/*
 * XREFs of RaidAdapterSendCryptoOperationSynchronously @ 0x1C002ED74
 * Callers:
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C002D750 (RaidAdapterProgramCryptoKeyRoutine.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C00124D8 (RaidDriverGetName.c)
 *     RaCallMiniportAdapterControl @ 0x1C0013DF4 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00194F0 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendCryptoOperationSynchronously(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(a1 + 5736) || !(unsigned int)RaidIsAdapterControlSupported(a1, 18) )
    return 3221225659LL;
  if ( *a3 != 1 || a3[1] != 40 )
    return 3221225485LL;
  result = RaCallMiniportAdapterControl(a1 + 320);
  if ( (_DWORD)result )
  {
    v6 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)BugCheckParameter2 = 0LL;
    RaidDriverGetName(v6, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 4uLL, BugCheckParameter2[1], 1uLL, 0LL);
  }
  return result;
}
