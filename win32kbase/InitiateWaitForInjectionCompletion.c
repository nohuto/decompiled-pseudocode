/*
 * XREFs of InitiateWaitForInjectionCompletion @ 0x1C0217E30
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C022E49C (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 */

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
