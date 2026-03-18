/*
 * XREFs of ClearLogicalCursorPos @ 0x1C00C59E0
 * Callers:
 *     InitLoadResources @ 0x1C006C520 (InitLoadResources.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 */

__int64 ClearLogicalCursorPos()
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
  {
    *(_QWORD *)(result + 60) = *((_QWORD *)gpsi + 620);
    *(_DWORD *)(result + 68) = 18;
  }
  return result;
}
