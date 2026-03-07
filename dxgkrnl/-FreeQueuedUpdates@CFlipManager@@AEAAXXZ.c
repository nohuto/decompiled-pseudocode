void __fastcall CFlipManager::FreeQueuedUpdates(CFlipManager *this)
{
  _QWORD *v2; // rdi
  struct CFlipPresentUpdate *v3; // rsi
  void (__fastcall *v4)(_QWORD, _QWORD); // rax
  CFlipManager *v5; // rcx
  struct CFlipPresentUpdate *v6; // rdi
  CFlipManager *v7; // rcx
  _QWORD *v8; // rbx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx

  v2 = (_QWORD *)((char *)this + 152);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v2);
    v4 = *(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 160LL);
    v4(*((unsigned int *)this + 83), --*((_QWORD *)this + 21));
    CFlipManager::ReleaseKernelPresentUpdateReferences(v5, v3);
    if ( v3 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  while ( *((CFlipManager **)this + 22) != (CFlipManager *)((char *)this + 176) )
  {
    v6 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue((_QWORD *)this + 22);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v7, v6);
    if ( v6 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
  }
  v8 = (_QWORD *)((char *)this + 208);
  while ( (_QWORD *)*v8 != v8 )
  {
    v9 = (void (__fastcall ***)(_QWORD, __int64))((*v8 - 8LL) & -(__int64)(*v8 != 0LL));
    if ( v9 )
      (**v9)(v9, 1LL);
  }
}
