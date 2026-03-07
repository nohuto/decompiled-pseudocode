void __fastcall CFlipPresentUpdate::~CFlipPresentUpdate(CFlipPresentUpdate *this)
{
  __int64 v2; // rdi
  void *v3; // rcx
  CFlipPropertySetBase *v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  *(_QWORD *)this = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
  v2 = (__int64)this + 16;
  v3 = (void *)*((_QWORD *)this + 6);
  *(_QWORD *)v2 = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (CFlipPropertySetBase *)*((_QWORD *)this + 7);
  if ( v4 )
    CFlipPropertySetBase::Release(v4);
  *(_QWORD *)v2 = &CFlipPresentCancel::`vftable';
  v5 = v2 + 8;
  v6 = -v2;
  v7 = v5 & -(__int64)(v6 != 0);
  v8 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD **)((v5 & -(__int64)(v6 != 0)) + 8), *v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  CFlipTokenOperation::~CFlipTokenOperation(this);
}
