/*
 * XREFs of ?GetChildrenCount@CContainerVectorShape@@UEBAIXZ @ 0x180104FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVectorShape::GetChildrenCount(CContainerVectorShape *this)
{
  return (__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3;
}
