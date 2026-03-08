/*
 * XREFs of ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x180004408
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180005B3C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetLightSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CResource *v6; // rsi
  __int64 Resource; // rax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  v6 = 0LL;
  if ( !(_DWORD)v5
    || (Resource = CResourceTable::GetResource(a2, v5, 36LL), (v6 = (struct CResource *)Resource) != 0LL)
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 56LL))(Resource, 34LL) )
  {
    if ( v6 != this[12] )
    {
      v10 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x14Fu, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
        this[13] = 0LL;
        this[12] = v6;
        CProjectedShadowScene::RequestRedrawAll((CProjectedShadowScene *)this);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x149u, 0LL);
  }
  return v4;
}
