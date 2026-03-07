__int64 __fastcall HUBMISC_AttachDevice(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx

  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 1328) + 1636LL), 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1336), 0xFFFFFFFD);
  HUBSM_AddEvent(*(_QWORD *)(a1 + 1328) + 504LL, 4034);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1636LL) & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1336), 1u);
    result = 3013LL;
    v3 = 9;
  }
  else
  {
    result = 3009LL;
    v3 = 3;
  }
  *(_DWORD *)(a1 + 1424) = v3;
  return result;
}
