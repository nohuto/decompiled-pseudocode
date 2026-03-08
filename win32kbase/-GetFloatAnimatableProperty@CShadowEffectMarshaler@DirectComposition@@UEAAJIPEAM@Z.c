/*
 * XREFs of ?GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024E290
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CShadowEffectMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( a2 )
  {
    case 0:
      v4 = *((_DWORD *)this + 28);
      goto LABEL_12;
    case 2:
      v4 = *((_DWORD *)this + 29);
      goto LABEL_12;
    case 3:
      v4 = *((_DWORD *)this + 30);
      goto LABEL_12;
    case 4:
      v4 = *((_DWORD *)this + 31);
      goto LABEL_12;
    case 5:
      v4 = *((_DWORD *)this + 32);
LABEL_12:
      *(_DWORD *)a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
}
