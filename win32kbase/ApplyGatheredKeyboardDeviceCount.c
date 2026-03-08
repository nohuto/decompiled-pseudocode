/*
 * XREFs of ApplyGatheredKeyboardDeviceCount @ 0x1C00D2520
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0080388 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z @ 0x1C00D2550 (-ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor@@QEAAXK@Z.c)
 */

void __fastcall ApplyGatheredKeyboardDeviceCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  CKeyboardProcessor *KeyboardProcessor; // rax

  v4 = a1;
  KeyboardProcessor = (CKeyboardProcessor *)anonymous_namespace_::GetKeyboardProcessor(a1, a2, a3, a4);
  if ( KeyboardProcessor )
    CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(KeyboardProcessor, v4);
}
