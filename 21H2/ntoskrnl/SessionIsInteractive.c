/*
 * XREFs of SessionIsInteractive @ 0x14027141C
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
 *     NtSetThreadExecutionState @ 0x1406713E0 (NtSetThreadExecutionState.c)
 *     PopSetWin32kInputTimeout @ 0x1408F5468 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PsGetSiloBySessionId @ 0x14068FAB4 (PsGetSiloBySessionId.c)
 */

char __fastcall SessionIsInteractive(__int64 a1)
{
  char v1; // bl
  int v2; // edi
  _DWORD **v3; // rax
  int v5; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = a1;
  v6 = 0LL;
  if ( (_DWORD)a1 == -1 || (int)PsGetSiloBySessionId(a1, &v6) < 0 )
    return 0;
  v3 = (_DWORD **)&PspHostSiloGlobals;
  if ( v6 )
    v3 = *(_DWORD ***)(v6 + 1272);
  if ( v2 != *v3[141] )
    return 1;
  v5 = v6 ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1272) + 1128LL) + 4LL) : MEMORY[0xFFFFF780000002D8];
  if ( v2 == v5 )
    return 1;
  return v1;
}
