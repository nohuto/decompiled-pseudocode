/*
 * XREFs of ?GetChildAt@CContainerVectorShape@@UEBAPEAVCVectorShape@@I@Z @ 0x180104FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVectorShape *__fastcall CContainerVectorShape::GetChildAt(CContainerVectorShape *this, unsigned int a2)
{
  return *(struct CVectorShape **)(*((_QWORD *)this + 13) + 8LL * a2);
}
