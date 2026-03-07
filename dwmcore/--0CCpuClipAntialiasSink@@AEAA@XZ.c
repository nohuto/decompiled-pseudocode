CCpuClipAntialiasSink *__fastcall CCpuClipAntialiasSink::CCpuClipAntialiasSink(CCpuClipAntialiasSink *this)
{
  SIZE_T size_of; // rax
  __int64 v3; // rax
  CCpuClipAntialiasSink *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CCpuClipAntialiasSink::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)v3 = v3;
  *(_QWORD *)(v3 + 8) = v3;
  *(_QWORD *)(v3 + 16) = v3;
  *(_WORD *)(v3 + 24) = 257;
  *((_QWORD *)this + 2) = v3;
  *((_QWORD *)this + 4) = 0LL;
  `vector constructor iterator'(
    (char *)this + 40,
    8LL,
    2LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  result = this;
  *((_BYTE *)this + 56) = 0;
  return result;
}
