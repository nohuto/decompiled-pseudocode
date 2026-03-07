void __fastcall BLTQUEUE::DiscardPendingPresent(BLTQUEUE *this)
{
  struct _KMUTANT *v1; // rbx
  _QWORD **v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  struct _EX_RUNDOWN_REF **v6; // rbp

  v1 = (struct _KMUTANT *)((char *)this + 160);
  KeWaitForSingleObject((char *)this + 160, Executive, 0, 0, 0LL);
  v3 = (_QWORD **)((char *)this + 216);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v6 = (struct _EX_RUNDOWN_REF **)(v4 - 1);
    v5[1] = v3;
    if ( v4[4] )
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)(v4 - 1));
    BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v6, 1u);
    DXGALLOCATIONREFERENCE::AssignNull(v6 + 4);
    BLTQUEUE::InsertQueueTail(this, (char *)this + 232, v6, 1LL);
  }
  if ( *((_BYTE *)this + 573) || *((_BYTE *)this + 574) )
  {
    *(_WORD *)((char *)this + 573) = 0;
    BLTQUEUE::FinishCommand(this, 0);
  }
  KeReleaseMutex(v1, 0);
}
