/*
 * XREFs of KiVerifyContextRecord @ 0x140365470
 * Callers:
 *     KeVerifyContextRecord @ 0x1403653D4 (KeVerifyContextRecord.c)
 * Callees:
 *     KeVerifyContextIpForUserCet @ 0x14036551C (KeVerifyContextIpForUserCet.c)
 *     PsWow64GetProcessMachine @ 0x1407EE9F0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall KiVerifyContextRecord(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  unsigned int v9; // ebx
  int v10; // eax

  v5 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return 0LL;
  v9 = 0;
  if ( (unsigned __int16)PsWow64GetProcessMachine(v5) != 332 && (!*(_QWORD *)(v5 + 2240) || *(_WORD *)(a2 + 56) != 35) )
    *(_WORD *)(a2 + 56) = 51;
  if ( !a4 )
    return 0LL;
  v10 = KeVerifyContextIpForUserCet(a1, a2, a4, a5);
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v9;
}
