void __fastcall CCompositionFrame::Confirm(CCompositionFrame *this)
{
  CCompositionFrame *v1; // rdi
  CCompositionFrame *v2; // rsi
  CCompositionFrame **v4; // rsi
  CCompositionFrame **v5; // rax
  CCompositionFrame *v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  CCompositionFrame **v10; // rdi
  CCompositionFrame *v11; // rcx
  struct CFlipManagerSignal *v12; // rbp
  __int64 v13; // rsi

  v1 = (CCompositionFrame *)((char *)this + 152);
  *((_DWORD *)this + 24) = 1;
  v2 = (CCompositionFrame *)*((_QWORD *)this + 19);
  if ( v2 != (CCompositionFrame *)((char *)this + 152) )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v2 - 1) + 40LL))((__int64)v2 - 8);
      v2 = *(CCompositionFrame **)v2;
    }
    while ( v2 != v1 );
  }
  v4 = (CCompositionFrame **)((char *)this + 168);
  v5 = (CCompositionFrame **)*((_QWORD *)this + 21);
  if ( v5[1] != (CCompositionFrame *)((char *)this + 168) )
    goto LABEL_12;
  v6 = *v5;
  if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
    goto LABEL_12;
  *v4 = v6;
  *((_QWORD *)v6 + 1) = v4;
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v10 = v5 - 6;
      (*((void (__fastcall **)(CCompositionFrame **))*(v5 - 1) + 7))(v5 - 1);
      ObfDereferenceObject(v10);
      v5 = (CCompositionFrame **)*v4;
      if ( *((CCompositionFrame ***)*v4 + 1) != v4 )
        break;
      v11 = *v5;
      if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
        break;
      *v4 = v11;
      *((_QWORD *)v11 + 1) = v4;
      if ( v5 == v4 )
        goto LABEL_5;
    }
LABEL_12:
    __fastfail(3u);
  }
LABEL_5:
  v7 = *((_QWORD *)this + 11);
  v8 = (_QWORD *)((char *)this + 184);
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    v12 = (struct CFlipManagerSignal *)(v9 - 1);
    if ( !v9 )
      v12 = 0LL;
    v13 = *((_QWORD *)v12 + 5);
    *((_QWORD *)v12 + 5) = 0LL;
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v13 + 40)) >= 0 )
    {
      CFlipManager::ProcessSignal((CFlipManager *)(v13 + 32), v12, v7);
      CPushLock::ReleaseLock((CPushLock *)(v13 + 40));
    }
    ObfDereferenceObject((PVOID)v13);
  }
}
