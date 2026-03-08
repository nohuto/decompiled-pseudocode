/*
 * XREFs of ?GetInputSink@CInteraction@@UEBAPEAXXZ @ 0x180208C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CInteraction::GetInputSink(CInteraction *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 5);
  result = 0LL;
  if ( v1 )
    return *(void **)(v1 + 64);
  return result;
}
