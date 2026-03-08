/*
 * XREFs of ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B4FC4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B50C8 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RecommitGpuVirtualAddresses(VIDMM_GLOBAL *this, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // r8
  CVirtualAddressAllocator ***v7; // rdx
  CVirtualAddressAllocator ***v8; // rcx
  CVirtualAddressAllocator *i; // rbx
  int v10; // eax
  __int64 v12; // rcx
  CVirtualAddressAllocator *v13; // [rsp+50h] [rbp-10h] BYREF
  CVirtualAddressAllocator **v14; // [rsp+58h] [rbp-8h]
  struct VIDMM_ALLOC *v15; // [rsp+80h] [rbp+20h] BYREF

  v14 = &v13;
  v3 = (volatile signed __int32 *)((char *)this + 41072);
  v13 = (CVirtualAddressAllocator *)&v13;
  v5 = 0;
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 41072));
  v6 = (_QWORD *)*((_QWORD *)this + 5140);
  if ( v6 != (_QWORD *)((char *)this + 41120) )
  {
    v7 = (CVirtualAddressAllocator ***)v14;
    do
    {
      v8 = (CVirtualAddressAllocator ***)v6[60];
      if ( v8 && v6[2] != *((_QWORD *)this + 5048) )
      {
        if ( *v7 != &v13 )
          __fastfail(3u);
        v8[1] = (CVirtualAddressAllocator **)v7;
        *v8 = &v13;
        *v7 = (CVirtualAddressAllocator **)v8;
        v7 = v8;
        v14 = (CVirtualAddressAllocator **)v8;
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)((char *)this + 41120) );
  }
  _InterlockedDecrement(v3 + 4);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  for ( i = v13; i != (CVirtualAddressAllocator *)&v13; i = *(CVirtualAddressAllocator **)i )
  {
    v15 = 0LL;
    v10 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(i, a2, &v15);
    v5 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry2(1LL, a2, v10);
      DxgkLogInternalTriageEvent(v12, 0x40000LL);
      return v5;
    }
  }
  return v5;
}
