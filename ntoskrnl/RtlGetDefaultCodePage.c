/*
 * XREFs of RtlGetDefaultCodePage @ 0x14079B460
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetDefaultCodePage()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _WORD *v1; // r9
  __int64 result; // rax
  _WORD *v3; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  *v1 = CurrentServerSiloGlobals[66].Blink;
  result = LOWORD(CurrentServerSiloGlobals[70].Blink);
  *v3 = result;
  return result;
}
