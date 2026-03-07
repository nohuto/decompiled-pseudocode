signed __int64 __fastcall MiSetNextStandbyPageSameNodeNoLockAsserts(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  signed __int64 v3; // r8
  __int64 v4; // r9
  signed __int64 result; // rax
  signed __int64 v6; // r8

  v2 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)a1 = (a2 << 40) | *(_QWORD *)a1 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a1 + 36) = v2 & 0x1FFFFF | ((unsigned int)(a2 >> 24) << 21);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (a2 & 0xF800000000LL) << 20;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v4 | v3 & 0xF07FFFFFFFFFFFFFuLL, v3);
  if ( v3 != result )
  {
    do
    {
      v6 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v4 | result & 0xF07FFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v6 != result );
  }
  return result;
}
