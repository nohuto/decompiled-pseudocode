/*
 * XREFs of ?SetBufferProperty@CParticleGeneratorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleGeneratorMarshaler::SetBufferProperty(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  int v19; // eax
  int v20; // eax

  v6 = 0;
  *a6 = 0;
  if ( !a3 )
  {
    if ( a4 && a5 == 12 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)a4;
      v20 = a4[2];
      *((_DWORD *)this + 4) |= 0x20u;
      *((_DWORD *)this + 16) = v20;
      goto LABEL_33;
    }
    return (unsigned int)-1073741811;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( a4 && a5 == 12 )
    {
      *(_QWORD *)((char *)this + 68) = *(_QWORD *)a4;
      v19 = a4[2];
      *((_DWORD *)this + 4) |= 0x40u;
      *((_DWORD *)this + 19) = v19;
      goto LABEL_33;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 6;
  if ( !v8 )
  {
    if ( a4 && a5 == 16 )
    {
      v18 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x1000u;
      *(_OWORD *)((char *)this + 100) = v18;
      goto LABEL_33;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a4 && a5 == 16 )
    {
      v17 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x2000u;
      *(_OWORD *)((char *)this + 116) = v17;
      goto LABEL_33;
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a4 && a5 == 16 )
    {
      v16 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x4000u;
      *(_OWORD *)((char *)this + 132) = v16;
      goto LABEL_33;
    }
    return (unsigned int)-1073741811;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a4 && a5 == 16 )
    {
      v15 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x8000u;
      *(_OWORD *)((char *)this + 148) = v15;
      goto LABEL_33;
    }
    return (unsigned int)-1073741811;
  }
  v12 = v11 - 3;
  if ( !v12 )
  {
    if ( a4 && a5 == 12 )
    {
      *(_QWORD *)((char *)this + 172) = *(_QWORD *)a4;
      v14 = a4[2];
      *((_DWORD *)this + 4) |= 0x40000u;
      *((_DWORD *)this + 45) = v14;
      goto LABEL_33;
    }
    return (unsigned int)-1073741811;
  }
  if ( v12 != 1 || !a4 || a5 != 12 )
    return (unsigned int)-1073741811;
  *((_QWORD *)this + 23) = *(_QWORD *)a4;
  v13 = a4[2];
  *((_DWORD *)this + 4) |= 0x80000u;
  *((_DWORD *)this + 48) = v13;
LABEL_33:
  *a6 = 1;
  return v6;
}
