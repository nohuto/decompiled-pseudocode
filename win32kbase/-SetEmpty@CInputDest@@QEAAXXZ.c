void __fastcall CInputDest::SetEmpty(CInputDest *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 23) )
  {
    v2 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
        HMUnlockObjectInternal((_DWORD *)v2);
    }
  }
  memset(this, 0, 0x78uLL);
}
