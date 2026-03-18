/*
 * XREFs of ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C009B100
 * Callers:
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C000232C (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1C00029E8 (-Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2.c)
 *     ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C009B0A8 (-InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemReso.c)
 *     ?Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0225840 (-Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?Initialize@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0225870 (-Initialize@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::Initialize(DirectComposition::CVisualMarshaler *this)
{
  __int64 result; // rax

  *((_BYTE *)this + 320) |= 0x40u;
  *((_DWORD *)this + 78) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 66) = -1;
  *((_DWORD *)this + 67) = -1;
  *((_DWORD *)this + 68) = -1;
  *((_DWORD *)this + 69) = -1;
  *((_DWORD *)this + 70) = -1;
  *((_DWORD *)this + 71) = -1;
  result = 0LL;
  *((_DWORD *)this + 30) = 1065353216;
  return result;
}
