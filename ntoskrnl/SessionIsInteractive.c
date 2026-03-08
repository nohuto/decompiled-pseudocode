/*
 * XREFs of SessionIsInteractive @ 0x1402B92A4
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PsGetSiloBySessionId @ 0x1406CDDA8 (PsGetSiloBySessionId.c)
 */

char __fastcall SessionIsInteractive(__int64 a1)
{
  char v1; // bl
  int v2; // edi
  _DWORD **v3; // rax
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = a1;
  v6 = 0LL;
  if ( (_DWORD)a1 == -1 || (int)PsGetSiloBySessionId(a1, &v6) < 0 )
    return 0;
  v3 = (_DWORD **)&PspHostSiloGlobals;
  if ( v6 )
    v3 = *(_DWORD ***)(v6 + 1488);
  if ( v2 != *v3[165] )
    return 1;
  v4 = v6 ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1488) + 1320LL) + 4LL) : MEMORY[0xFFFFF780000002D8];
  if ( v2 == v4 )
    return 1;
  return v1;
}
