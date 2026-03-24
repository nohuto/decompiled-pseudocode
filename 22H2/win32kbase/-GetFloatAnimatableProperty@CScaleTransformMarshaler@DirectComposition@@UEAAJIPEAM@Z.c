/*
 * XREFs of ?GetFloatAnimatableProperty@CScaleTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01DBD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CScaleTransformMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // eax

  v3 = 0;
  if ( !a2 )
  {
    *a3 = *((float *)this + 18);
    return v3;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v6 = *((_DWORD *)this + 19);
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = *((_DWORD *)this + 20);
    goto LABEL_9;
  }
  if ( v5 == 1 )
  {
    v6 = *((_DWORD *)this + 21);
LABEL_9:
    *(_DWORD *)a3 = v6;
    return v3;
  }
  return (unsigned int)-1073741811;
}
