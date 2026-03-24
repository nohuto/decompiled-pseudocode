/*
 * XREFs of ?GetFloatAnimatableProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01DBB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx

  v3 = 0;
  if ( a2 > 0x3E )
  {
    v9 = a2 - 63;
    if ( !v9 )
    {
      *a3 = *((float *)this + 108);
      return v3;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v8 = *((_DWORD *)this + 109);
      goto LABEL_13;
    }
    v11 = v10 - 3;
    if ( !v11 )
    {
      v8 = *((_DWORD *)this + 114);
      goto LABEL_13;
    }
    if ( v11 == 1 )
    {
      v8 = *((_DWORD *)this + 115);
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  if ( a2 == 62 )
  {
    v8 = *((_DWORD *)this + 107);
    goto LABEL_13;
  }
  v4 = a2 - 52;
  if ( !v4 )
  {
    v8 = *((_DWORD *)this + 94);
    goto LABEL_13;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = *((_DWORD *)this + 95);
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *((_DWORD *)this + 96);
    goto LABEL_13;
  }
  v7 = v6 - 5;
  if ( !v7 )
  {
    v8 = *((_DWORD *)this + 103);
    goto LABEL_13;
  }
  if ( v7 != 2 )
    return (unsigned int)-1073741811;
  v8 = *((_DWORD *)this + 106);
LABEL_13:
  *(_DWORD *)a3 = v8;
  return v3;
}
