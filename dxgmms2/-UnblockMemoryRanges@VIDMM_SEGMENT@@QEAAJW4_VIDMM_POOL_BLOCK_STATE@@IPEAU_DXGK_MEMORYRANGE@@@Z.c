__int64 __fastcall VIDMM_SEGMENT::UnblockMemoryRanges(
        VIDMM_SEGMENT *a1,
        __int64 a2,
        unsigned int a3,
        struct _DXGK_MEMORYRANGE *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  struct _DXGK_MEMORYRANGE v11; // xmm0
  VIDMM_GLOBAL *v12; // rcx
  unsigned __int64 v13; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v14[12]; // [rsp+60h] [rbp-68h] BYREF

  v13 = 0LL;
  v7 = VIDMM_SEGMENT::ValidateMemoryRanges(a1, a3, a4, &v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    memset(v14, 0, 0x58uLL);
    v11 = *a4;
    v12 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 1);
    LODWORD(v14[0]) = 216;
    *(struct _DXGK_MEMORYRANGE *)&v14[7] = v11;
    v14[5] = a1;
    LOBYTE(v14[6]) = 7;
    HIDWORD(v14[6]) = a3;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(v12, (struct _VIDMM_SYSTEM_COMMAND *)v14, 0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(1LL, v7, 698LL);
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return v8;
  }
}
