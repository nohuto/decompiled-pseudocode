__int64 __fastcall VIDMM_GLOBAL::PageInFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2)
{
  int v4; // edi
  bool v6; // [rsp+48h] [rbp+10h] BYREF
  struct VIDMM_ALLOC *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  *((_BYTE *)a2 + 58) |= 2u;
  v6 = 0;
  v4 = VIDMM_GLOBAL::PageInDeviceInternal(this, a2, 0, &v6, &v7);
  if ( v4 >= 0 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
  *((_BYTE *)a2 + 58) &= ~2u;
  return (unsigned int)v4;
}
