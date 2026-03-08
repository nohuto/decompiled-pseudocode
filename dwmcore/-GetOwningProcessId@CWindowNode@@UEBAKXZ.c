/*
 * XREFs of ?GetOwningProcessId@CWindowNode@@UEBAKXZ @ 0x180106E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::GetOwningProcessId(CWindowNode *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 90) + 128LL);
}
