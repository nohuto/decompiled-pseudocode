/*
 * XREFs of ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C019BB34
 * Callers:
 *     DxgkCompletePnPTransition @ 0x1C019BB04 (DxgkCompletePnPTransition.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0020EFC (ExFreeToNPagedLookasideList.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C019BC58 (-FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CompletePnPTransition(DXGSESSIONMGR *this, struct _PNP_TRANS_TOKEN *a2)
{
  _QWORD *i; // rdi
  struct _PNP_TRANS_TOKEN **v5; // rcx
  void **v6; // rdx
  __int64 v7; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  for ( i = (_QWORD *)((char *)a2 + 24);
        (_QWORD *)*i != i;
        DXGSESSIONDATA::FinishPnPTransitionOnSession(*(DXGSESSIONDATA **)(*i - 16LL), a2) )
  {
    ;
  }
  v5 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)a2 + 1);
  if ( v5[1] != (struct _PNP_TRANS_TOKEN *)((char *)a2 + 8)
    || (v6 = (void **)*((_QWORD *)a2 + 2), *v6 != (char *)a2 + 8) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  v5[1] = (struct _PNP_TRANS_TOKEN *)v6;
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v7);
}
