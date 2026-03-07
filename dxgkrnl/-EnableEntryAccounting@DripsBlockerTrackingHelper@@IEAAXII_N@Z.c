void __fastcall DripsBlockerTrackingHelper::EnableEntryAccounting(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbp

  v5 = 4720LL * a2;
  v6 = a3;
  if ( a4 )
  {
    v7 = v5 + 72LL * a3;
    if ( !*((_BYTE *)this + v7 + 112) && !*((_BYTE *)this + 302104) )
    {
      *(LARGE_INTEGER *)((char *)this + v7 + 120) = KeQueryPerformanceCounter(0LL);
      *((_BYTE *)this + v7 + 112) = 1;
    }
  }
  else
  {
    v8 = v5 + 72LL * a3;
    if ( *((_BYTE *)this + v8 + 112) == 1 )
    {
      DripsBlockerTrackingHelper::AddActiveTime(this, a2, a3);
      *((_BYTE *)this + v8 + 112) = 0;
      *(_DWORD *)((char *)this + 72 * v6 + v5 + 144) = 0;
    }
  }
}
