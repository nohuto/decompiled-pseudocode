/*
 * XREFs of ?ContainsWheelTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1C009B8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMouseProcessor::ContainsWheelTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  __int64 v1; // rax
  char v2; // cl

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  if ( *(_WORD *)(v1 + 30) )
    return (*(_WORD *)(v1 + 28) & 0xC00) != 0;
  return v2;
}
