void __fastcall CThreadLockInputDest::~CThreadLockInputDest(
        CThreadLockInputDest *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( *((_QWORD *)this + 1) )
  {
    if ( qword_1C02D65D8 )
      qword_1C02D65D8((char *)this + 40);
    v5 = ThreadUnlock1((__int64)this, a2, a3, a4);
    *((_QWORD *)this + 1) = v5;
    if ( v5 )
    {
      if ( v5 == *(_QWORD *)(*(_QWORD *)this + 80LL) )
        CInputDest::_UnlockedFromThread(*(CInputDest **)this);
    }
  }
}
