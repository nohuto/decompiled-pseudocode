/*
 * XREFs of MouseButtonAction @ 0x1C01E80D0
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01B9C40 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01F90E8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 */

__int64 __fastcall MouseButtonAction(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, a1, a2);
  return result;
}
