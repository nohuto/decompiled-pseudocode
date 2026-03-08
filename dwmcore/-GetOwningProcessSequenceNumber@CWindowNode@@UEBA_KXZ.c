/*
 * XREFs of ?GetOwningProcessSequenceNumber@CWindowNode@@UEBA_KXZ @ 0x180106E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CWindowNode::GetOwningProcessSequenceNumber(CWindowNode *this)
{
  return *(_QWORD *)(*((_QWORD *)this + 90) + 16LL);
}
