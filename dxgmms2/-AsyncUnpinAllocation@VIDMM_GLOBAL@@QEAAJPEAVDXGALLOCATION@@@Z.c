/*
 * XREFs of ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C00E0890
 * Callers:
 *     VidMmAsyncUnpinAllocation @ 0x1C002D140 (VidMmAsyncUnpinAllocation.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ @ 0x1C002D934 (-AcquireInverseSemaphore@DXGINVERSESEMAPHORE@@QEAAXXZ.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0086FAC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C00F17B0 (-VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AsyncUnpinAllocation(VIDMM_GLOBAL *this, struct DXGALLOCATION *a2)
{
  __int64 v2; // rbp
  int v5; // esi
  __int64 v6; // rcx
  char v7; // al
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 3);
  v5 = 0;
  if ( VIDMM_GLOBAL::IsTdrPending(this) || *(_BYTE *)(v6 + 7088) )
  {
    WdLogSingleEntry1(4LL, a2);
    return 3221225473LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)(v6 + 44672), 0);
    DXGPUSHLOCK::AcquireExclusive(v10);
    v11 = 2;
    v7 = *(_BYTE *)(v2 + 25);
    if ( (v7 & 2) != 0 )
    {
      *(_BYTE *)(v2 + 25) = v7 & 0xFB;
      DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)a2 + 5));
      DxgkUnreferenceDxgAllocation(a2);
    }
    else
    {
      v5 = VidMmUnpinAllocAsync(this, a2);
      if ( v5 >= 0 )
      {
        WdLogSingleEntry2(4LL, v2, a2);
        *(_BYTE *)(v2 + 25) = *(_BYTE *)(v2 + 25) & 0xF9 | 2;
        DXGINVERSESEMAPHORE::AcquireInverseSemaphore((struct _KEVENT *)((char *)this + 44416));
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
    return (unsigned int)v5;
  }
}
