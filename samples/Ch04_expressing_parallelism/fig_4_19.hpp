// Copyright (C) 2023 Intel Corporation

// SPDX-License-Identifier: MIT

// These ".hpp" files are text from the book that are
// snippets that are not set up to be compiled as is.

template <int Dimensions = 1>
class group {
 public:
  // Return the index of this group in the kernel's
  // execution range
  id<Dimensions> get_group_id() const;
  size_t get_group_id(int dimension) const;
  size_t get_group_linear_id() const;

  // Return the number of groups in the kernel's execution
  // range
  range<Dimensions> get_group_range() const;
  size_t get_group_range(int dimension) const;

  // Return the number of work-items in this group
  range<Dimensions> get_local_range() const;
  size_t get_local_range(int dimension) const;
};
