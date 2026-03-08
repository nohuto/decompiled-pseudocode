/*
 * XREFs of ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0086FD4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00897A0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0089AAC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00A6170 (-RecordVaPagingHistoryFreeGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 *     ?CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B499C (-CompareVadByStartAddressAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct _KTHREAD **a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  struct _KTHREAD *v8; // rbx
  int started; // eax
  unsigned int i; // esi
  _QWORD **v11; // r15
  _QWORD *j; // r14
  _BYTE v14[8]; // [rsp+30h] [rbp-58h] BYREF
  DXGPUSHLOCK *v15; // [rsp+38h] [rbp-50h]
  int v16; // [rsp+40h] [rbp-48h]
  _BYTE v17[8]; // [rsp+48h] [rbp-40h] BYREF
  DXGPUSHLOCK *v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, a2 + 7, 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v8 = a2[6];
  v16 = 1;
  v20 = a3;
  while ( v8 )
  {
    started = CompareVadByStartAddressAvl(&v20, (struct _RTL_BALANCED_NODE *)v8);
    if ( started < 0 )
    {
      v8 = *(struct _KTHREAD **)v8;
    }
    else
    {
      if ( started <= 0 )
        break;
      v8 = (struct _KTHREAD *)*((_QWORD *)v8 + 1);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  if ( v8 )
  {
    if ( (*((_DWORD *)v8 + 18) & 0x800) != 0 && !a5 )
    {
      WdLogSingleEntry3(3LL, a2, a3, 20882LL);
    }
    else
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryFreeGpuVa(
        this,
        a2[12],
        *((_QWORD *)v8 + 3),
        *((_QWORD *)v8 + 4) - *((_QWORD *)v8 + 3));
      for ( i = 0; i < *((_DWORD *)this + 1754); ++i )
      {
        v11 = (_QWORD **)((char *)v8 + 24 * i + 96);
        for ( j = *v11; j != v11; j = (_QWORD *)*j )
          VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)a2,
            (struct VIDMM_MAPPED_VA_RANGE *)(j - 1),
            1u,
            0LL);
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, a2 + 7, 0);
      DXGPUSHLOCK::AcquireExclusive(v18);
      v19 = 2;
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a2, v8);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, a3);
    return 3221225485LL;
  }
}
