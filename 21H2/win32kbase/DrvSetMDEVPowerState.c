/*
 * XREFs of DrvSetMDEVPowerState @ 0x1C00D41D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvSetMDEVPowerState(__int64 a1, int a2)
{
  unsigned int i; // r9d
  __int64 result; // rax
  __int64 v4; // r8

  for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
  {
    result = *(_QWORD *)(56LL * i + a1 + 40);
    v4 = *(_QWORD *)(result + 2552);
    if ( a2 )
      *(_DWORD *)(v4 + 160) &= ~0x80000000;
    else
      *(_DWORD *)(v4 + 160) |= 0x80000000;
  }
  return result;
}
