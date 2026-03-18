/*
 * XREFs of NtUserDoUninitMessagePumpHook @ 0x1C0014F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDoUninitMessagePumpHook()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // eax

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  v4 = *(_DWORD *)(v3 + 28);
  if ( v4 > 0 )
  {
    v2 = 1LL;
    *(_DWORD *)(v3 + 28) = v4 - 1;
  }
  UserSessionSwitchLeaveCrit(gptiCurrent, v3, v0, v1);
  return v2;
}
