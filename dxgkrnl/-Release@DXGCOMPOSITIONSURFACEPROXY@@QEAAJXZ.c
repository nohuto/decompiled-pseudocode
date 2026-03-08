/*
 * XREFs of ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DE9BC
 * Callers:
 *     ?CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C02DC7F0 (-CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?CloseChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C02DC850 (-CloseChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAA_NW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1C02DCCAC (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 *     ?UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ @ 0x1C02DF680 (-UnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@UEAAXXZ.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C035F93C (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Release(DXGCOMPOSITIONSURFACEPROXY *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
    operator delete(this);
  }
  return v1;
}
