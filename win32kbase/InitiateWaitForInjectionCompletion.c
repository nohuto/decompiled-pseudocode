bool __fastcall InitiateWaitForInjectionCompletion(void (*a1)(void), __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  CMouseProcessor *MouseProcessor; // rax

  v5 = 0;
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor((__int64)a1, a2, a3, a4);
  if ( MouseProcessor )
    return CMouseProcessor::InitiateWaitForInjectionCompletion(MouseProcessor, a1);
  return v5;
}
