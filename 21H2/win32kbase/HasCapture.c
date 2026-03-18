/*
 * XREFs of HasCapture @ 0x1C01E7CA0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 */

char HasCapture()
{
  __int64 MouseProcessor; // rax
  char v1; // cl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( !MouseProcessor )
    return 0;
  v1 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3696), 1, 1) )
    return 0;
  return v1;
}
