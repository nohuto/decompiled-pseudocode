/*
 * XREFs of ?GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01EDF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CHolographicExclusiveModeMarshaler *this,
        int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 || a2 != 1 )
    return 3221225485LL;
  *a3 = *((float *)this + 15);
  return result;
}
