/*
 * XREFs of KeVerifyContextRecord @ 0x1403653D4
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403647F4 (KiContinuePreviousModeUser.c)
 *     KyRaiseException @ 0x140576670 (KyRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 * Callees:
 *     KiVerifyContextRecord @ 0x140365470 (KiVerifyContextRecord.c)
 *     RtlGuardIsValidStackPointer @ 0x1407EEA20 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1408813A0 (RtlGuardIsValidWow64StackPointer.c)
 */

__int64 __fastcall KeVerifyContextRecord(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  int v7; // edi
  int v8; // ebp
  unsigned __int64 v9; // rsi
  __int64 v10; // r14
  __int16 v12; // ax

  v5 = *(_QWORD *)(a1 + 544);
  v7 = a2;
  v8 = a1;
  if ( (*(_DWORD *)(v5 + 632) & 0x20) == 0 )
    return KiVerifyContextRecord(v8, v7, a3, a4, a5);
  if ( (*(_DWORD *)(a2 + 48) & 0x100001) != 0x100001 )
    return KiVerifyContextRecord(v8, v7, a3, a4, a5);
  v9 = *(_QWORD *)(a2 + 152);
  v10 = *(_QWORD *)(a1 + 240);
  if ( (unsigned int)RtlGuardIsValidStackPointer(v9, v10) )
    return KiVerifyContextRecord(v8, v7, a3, a4, a5);
  if ( *(_QWORD *)(v5 + 1408)
    && ((v12 = *(_WORD *)(v5 + 2412), v12 == 332) || v12 == 452)
    && v9 < 0xFFFFFFFF
    && (unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v9, v10) )
  {
    return KiVerifyContextRecord(v8, v7, a3, a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
