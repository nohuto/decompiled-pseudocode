/*
 * XREFs of ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A7380
 * Callers:
 *     ?SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025BFA0 (-SetBufferProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     ?SetBufferProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C025C310 (-SetBufferProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0009244 (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0009338 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C005A9B8 (-UnbindAnimation@CApplicationChannel@DirectComposition@@QEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00A7488 (-SetOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@.c)
 *     ?SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C00A74F0 (-SetRelativeSizeHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     ?SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0252C18 (-SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_K.c)
 *     ?SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0252D00 (-SetRelativeOffsetHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetBufferProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edi
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax

  v6 = 0;
  v9 = a3 - 11;
  if ( !v9 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetTransformMatrixHelper(this, a2, a4, a5, a6);
  v10 = v9 - 1;
  if ( !v10 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetClipRectangleHelper(this, a2, a4, a5, a6);
  v11 = v10 - 2;
  if ( !v11 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetHeatMapColorHelper(this, a2, a4, a5, a6);
  v12 = v11 - 13;
  if ( !v12 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetOffsetHelper(this, a2, a4, a5, a6);
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a5 == 8 )
    {
      *((_DWORD *)this + 21) = *a4;
      *((_DWORD *)this + 22) = a4[1];
      if ( *((_QWORD *)this + 5) )
      {
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x17u);
        DirectComposition::CApplicationChannel::UnbindAnimation(a2, this, 0x18u);
      }
      *((_DWORD *)this + 4) |= 0x200000u;
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
  v16 = v13 - 1;
  if ( !v16 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetRelativeOffsetHelper(this, a2, a4, a5, a6);
  v17 = v16 - 1;
  if ( !v17 )
    return (unsigned int)DirectComposition::CVisualMarshaler::SetRelativeSizeHelper(this, a2, a4, a5, a6);
  v18 = v17 - 15;
  if ( v18 )
  {
    if ( v18 != 5 || a5 != 16 )
      return (unsigned int)-1073741811;
    v19 = *(_QWORD *)a4 - *((_QWORD *)this + 30);
    if ( *(_QWORD *)a4 == *((_QWORD *)this + 30) )
      v19 = *((_QWORD *)a4 + 1) - *((_QWORD *)this + 31);
    if ( v19 )
    {
      *((_OWORD *)this + 15) = *(_OWORD *)a4;
      *((_DWORD *)this + 92) |= 8u;
LABEL_10:
      *a6 = 1;
    }
  }
  else
  {
    if ( a5 != 12 )
      return (unsigned int)-1073741811;
    v20 = *(_QWORD *)a4 - *((_QWORD *)this + 15);
    if ( *(_QWORD *)a4 == *((_QWORD *)this + 15) )
      v20 = a4[2] - (unsigned __int64)*((unsigned int *)this + 32);
    if ( v20 )
    {
      *((_QWORD *)this + 15) = *(_QWORD *)a4;
      v21 = a4[2];
      *((_DWORD *)this + 4) |= 0x40000000u;
      *((_DWORD *)this + 32) = v21;
      goto LABEL_10;
    }
  }
  return v6;
}
