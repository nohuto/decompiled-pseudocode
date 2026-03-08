/*
 * XREFs of ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C021507C
 * Callers:
 *     DxgkCompletePnPTransition @ 0x1C0214FC4 (DxgkCompletePnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C02151D0 (-FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CompletePnPTransition(DXGSESSIONMGR *this, struct _PNP_TRANS_TOKEN *a2)
{
  _QWORD *i; // rdi
  struct _PNP_TRANS_TOKEN **v5; // rdx
  void **v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
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
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
