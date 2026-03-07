void __fastcall CFlipConsumerMessage::~CFlipConsumerMessage(CFlipConsumerMessage *this)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rdx
  _QWORD *v3; // rax

  *(_QWORD *)this = &CFlipConsumerMessage::`vftable'{for `CFlipPropertySetBase'};
  *((_QWORD *)this + 5) = &CFlipPresentCancel::`vftable';
  v1 = ((unsigned __int64)this + 48) & -(__int64)((CFlipConsumerMessage *)((char *)this + 40) != 0LL);
  v2 = *(_QWORD *)v1;
  if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1
    || (v3 = *(_QWORD **)((((unsigned __int64)this + 48) & -(__int64)((CFlipConsumerMessage *)((char *)this + 40) != 0LL))
                        + 8),
        *v3 != v1) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  CFlipPropertySetBase::~CFlipPropertySetBase(this);
}
