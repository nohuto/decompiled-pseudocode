_QWORD *__fastcall MmFreeSystemCacheReserveView(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  ULONG_PTR SystemCacheReverseMap; // rax
  _QWORD *v3; // r8
  ULONG_PTR v4; // r9
  unsigned __int64 v5; // r11

  MiGetPteAddress(a1);
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v1);
  if ( *(_QWORD *)(SystemCacheReverseMap + 32) >> 62 < 2uLL )
    KeBugCheckEx(0x1Au, 0x784uLL, SystemCacheReverseMap, v4, *(_QWORD *)(SystemCacheReverseMap + 32) >> 62);
  do
  {
    if ( (*v3 & 1) != 0 || (*v3 & 0x400LL) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, SystemCacheReverseMap, v4, 0LL);
    ++v3;
  }
  while ( (unsigned __int64)v3 < v5 );
  return MiReleaseSystemCacheView(0LL, v4);
}
