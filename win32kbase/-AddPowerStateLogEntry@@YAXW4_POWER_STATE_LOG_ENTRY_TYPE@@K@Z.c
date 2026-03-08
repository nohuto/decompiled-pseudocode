/*
 * XREFs of ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x1C00B7E1C
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00B3E28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     UserPowerStateCallout @ 0x1C00B7A1C (UserPowerStateCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddPowerStateLogEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rcx

  v4 = a2;
  v5 = a1;
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(SGDGetUserSessionState(a1, a2, a3, a4) + 800), 1u);
  v11 = SGDGetUserSessionState(v8, v7, v9, v10);
  result = MEMORY[0xFFFFF78000000008];
  v13 = 2LL * (v6 & 0x7F);
  *(_DWORD *)(v11 + 8 * v13 + 820) = v4;
  *(_QWORD *)(v11 + 8 * v13 + 808) = result;
  *(_DWORD *)(v11 + 8 * v13 + 816) = v5;
  return result;
}
