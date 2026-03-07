__int64 __fastcall MiProcessWsInSwapFault(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  result = MiReleaseWsSwapReservationPfn(a2);
  v9 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( result )
    result = MiReleasePageFileInfo(v9, result, 1LL);
  if ( a4 )
  {
    *a4 &= ~0x20uLL;
  }
  else
  {
    result = MiGetVaAge(v9, a3);
    if ( (unsigned __int8)result < 7u )
    {
      LOBYTE(v10) = 1;
      return MiSetVaAgeList(a1, a3, 1LL, v10);
    }
  }
  return result;
}
