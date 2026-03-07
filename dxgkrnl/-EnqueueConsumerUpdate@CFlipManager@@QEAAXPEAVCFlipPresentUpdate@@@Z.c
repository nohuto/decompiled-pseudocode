void __fastcall CFlipManager::EnqueueConsumerUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  void (__fastcall *v7)(_QWORD, PRKEVENT); // rax

  v2 = this + 19;
  if ( (_QWORD *)*v2 == v2 )
    KeSetEvent(this[36], 1, 0);
  v5 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v6 = (_QWORD *)v2[1];
  if ( (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v5 = v2;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v6;
  *v6 = v5;
  v2[1] = v5;
  v7 = *(void (__fastcall **)(_QWORD, PRKEVENT))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 160LL);
  this[21] = (PRKEVENT)((char *)this[21] + 1);
  v7(*((unsigned int *)this + 83), this[21]);
  this[30] = (PRKEVENT)((char *)this[30] + 1);
}
