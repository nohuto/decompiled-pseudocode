/*
 * XREFs of IsMouseButtonDown @ 0x1C0218000
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 */

char __fastcall IsMouseButtonDown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 MouseProcessor; // rax

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
    LOBYTE(MouseProcessor) = *(_DWORD *)(MouseProcessor + 3572) != 0;
  return MouseProcessor;
}
