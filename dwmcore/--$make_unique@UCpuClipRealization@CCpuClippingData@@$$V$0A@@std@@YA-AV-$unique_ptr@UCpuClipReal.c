_QWORD *__fastcall std::make_unique<CCpuClippingData::CpuClipRealization,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x88uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x88uLL);
    v3[12] = 0LL;
    v3[15] = 0LL;
    *((_BYTE *)v3 + 80) = 0;
    *((_BYTE *)v3 + 104) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
