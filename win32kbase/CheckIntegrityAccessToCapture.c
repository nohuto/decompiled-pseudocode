/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x1C0217680
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0231A3C (_anonymous_namespace_--ValidateUIPI.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 MouseProcessor; // rax
  unsigned int v6; // edi

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( !MouseProcessor )
    return 0;
  v6 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3696), 1, 1)
    || !(unsigned __int8)anonymous_namespace_::ValidateUIPI(a1, MouseProcessor + 3576) )
  {
    return 0;
  }
  return v6;
}
