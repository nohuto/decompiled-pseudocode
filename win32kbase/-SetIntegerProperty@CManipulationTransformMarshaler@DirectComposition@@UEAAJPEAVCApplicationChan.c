/*
 * XREFs of ?SetIntegerProperty@CManipulationTransformMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0252210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CManipulationTransformMarshaler::SetIntegerProperty(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 5 )
    return 3221225485LL;
  *((_DWORD *)this + 30) = a4;
  *a5 = 1;
  *((_DWORD *)this + 4) &= ~0x100u;
  return result;
}
