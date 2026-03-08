/*
 * XREFs of ?GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C02620E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C024C0F0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveColorMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CPrimitiveColorMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( a2 )
  {
    case 1:
      v4 = *((_DWORD *)this + 14);
      goto LABEL_10;
    case 2:
      v4 = *((_DWORD *)this + 15);
      goto LABEL_10;
    case 3:
      v4 = *((_DWORD *)this + 16);
      goto LABEL_10;
    case 4:
      v4 = *((_DWORD *)this + 17);
LABEL_10:
      *(_DWORD *)a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(this, a2, a3);
}
