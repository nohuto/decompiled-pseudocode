void __fastcall ApplyGatheredKeyboardDeviceCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  CKeyboardProcessor *KeyboardProcessor; // rax

  v4 = a1;
  KeyboardProcessor = (CKeyboardProcessor *)anonymous_namespace_::GetKeyboardProcessor(a1, a2, a3, a4);
  if ( KeyboardProcessor )
    CKeyboardProcessor::ApplyGatheredKeyboardDeviceCount(KeyboardProcessor, v4);
}
