/*
 * XREFs of KiVerifyContextRecord @ 0x140340180
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14033FA10 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x14034049C (KeVerifyContextRecord.c)
 * Callees:
 *     KeVerifyContextIpForUserCet @ 0x1403F24AC (KeVerifyContextIpForUserCet.c)
 *     PsWow64GetProcessMachine @ 0x1406C14C0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall KiVerifyContextRecord(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return 0LL;
  if ( (unsigned __int16)PsWow64GetProcessMachine(*(_QWORD *)(a1 + 544)) != 332
    && (!*(_QWORD *)(v6 + 2240) || *(_WORD *)(a2 + 56) != 35) )
  {
    *(_WORD *)(a2 + 56) = 51;
  }
  if ( !a4 )
    return 0LL;
  result = KeVerifyContextIpForUserCet(a1, a2, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
