_QWORD *__fastcall detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  _QWORD *result; // rax

  v4 = (__int64)(*a3 - *a1) >> 5;
  detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v4);
  result = a2;
  *a2 = *a1 + 32 * v4;
  return result;
}
