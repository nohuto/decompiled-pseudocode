void __fastcall CTokenManager::DeleteOutstandingAnalogToken(CTokenManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 40);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 40) = 0LL;
  }
}
