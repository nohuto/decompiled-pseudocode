/*
 * XREFs of ?SetRoot@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z @ 0x1801C6670
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x180216FD8 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::SetRoot(struct CResource **this, struct CResource *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != this[88] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2700u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[88]);
      this[88] = a2;
      CSceneVisual::OnRootChanged((CSceneVisual *)this);
    }
  }
  return v2;
}
