/*
 * XREFs of HalpMceMemoryErrorRecovery @ 0x140516980
 * Callers:
 *     HalpMceRecoveryMemoryErrorAmd @ 0x140516BC0 (HalpMceRecoveryMemoryErrorAmd.c)
 *     HalpMceRecoveryMemoryErrorIntel @ 0x140516CDC (HalpMceRecoveryMemoryErrorIntel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMceMemoryErrorRecovery(char a1, char a2, __int64 a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r10

  v3 = -1073741823;
  v4 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->HalReserved[6] + 32LL);
  if ( v4 )
  {
    if ( a1 )
      *(_DWORD *)v4 |= 9u;
    if ( a2 )
    {
      *(_DWORD *)v4 |= 5u;
      *(_QWORD *)(v4 + 8) = a3;
    }
    v3 = 0;
    if ( (*(_DWORD *)v4 & 0x10) != 0 && !a2 )
      return (unsigned int)-1073741823;
  }
  return v3;
}
