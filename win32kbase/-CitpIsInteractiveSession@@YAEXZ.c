/*
 * XREFs of ?CitpIsInteractiveSession@@YAEXZ @ 0x1C00C5BA4
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C00C5898 (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C00C5978 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CitpIsInteractiveSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  char v5; // cl
  char IsMultiSessionSku; // al

  v4 = *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  if ( v4 != (unsigned int)RtlGetCurrentServiceSessionId() )
    return 1;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  v5 = 0;
  if ( !IsMultiSessionSku )
    return 1;
  return v5;
}
