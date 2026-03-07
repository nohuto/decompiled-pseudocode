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
