__int64 __fastcall MiObtainSystemCharges(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned __int64 v9; // rdx

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1uLL) )
    return 0LL;
  v6 = 128LL;
  if ( a3 != 2 )
    v6 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v6) )
  {
    MiReturnCommit(a1, a2, v7);
    return 0LL;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 1 )
    {
      v9 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), a2);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 32), a2);
    }
    else if ( a3 == 4 )
    {
      _InterlockedExchangeAdd64(&qword_140C69658, a2);
    }
    else
    {
      _InterlockedExchangeAdd64(&qword_140C69640, a2);
    }
  }
  return 1LL;
}
