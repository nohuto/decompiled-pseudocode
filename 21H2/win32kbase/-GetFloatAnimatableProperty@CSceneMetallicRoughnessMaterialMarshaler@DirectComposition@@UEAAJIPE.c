/*
 * XREFs of ?GetFloatAnimatableProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01DBE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 == 11 )
  {
    *a3 = *((float *)this + 36);
  }
  else if ( a2 == 13 )
  {
    *a3 = *((float *)this + 40);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
