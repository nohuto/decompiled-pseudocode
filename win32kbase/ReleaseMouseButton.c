/*
 * XREFs of ReleaseMouseButton @ 0x1C02183D0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C022AE68 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 */

__int64 __fastcall ReleaseMouseButton(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( result )
    return CMouseProcessor::AccessibilityReleaseMouseButton(result, v4);
  return result;
}
