/*
 * XREFs of ?GetSourceModifierHandle@CManipulationMarshaler@DirectComposition@@IEBAII@Z @ 0x1C0251C40
 * Callers:
 *     _lambda_e7288af00cdd6f7af065feb83fd33220_::operator() @ 0x1C025165C (_lambda_e7288af00cdd6f7af065feb83fd33220_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::GetSourceModifierHandle(
        DirectComposition::CManipulationMarshaler *this,
        unsigned int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + a2 + 8);
  result = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 16);
    if ( v4 )
      return *(unsigned int *)(v4 + 32);
  }
  return result;
}
