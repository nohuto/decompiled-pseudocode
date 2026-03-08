/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1800F4390
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F44A4 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F4560 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  __int64 v7; // rcx
  struct CResource *Resource; // rsi
  struct CResource **v9; // rax
  struct CResource **v10; // rdi
  struct CResource *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 )
  {
    if ( !*((_QWORD *)this + 89) )
      return v4;
    CLayerVisual::ClearTreeEffect(this);
    goto LABEL_12;
  }
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x39u);
  if ( !Resource )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x31u, 0LL);
    return v4;
  }
  v9 = (struct CResource **)*((_QWORD *)this + 89);
  if ( !v9 )
  {
    v9 = (struct CResource **)DefaultHeap::AllocClear(0x10uLL);
    if ( !v9 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v9[1] = 0LL;
    *v9 = 0LL;
    *((_QWORD *)this + 89) = v9;
  }
  if ( *v9 != Resource )
  {
    CResource::UnRegisterNotifierInternal(this, *v9);
    v10 = (struct CResource **)*((_QWORD *)this + 89);
    if ( *v10 != Resource )
    {
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
      v11 = *v10;
      *v10 = Resource;
      if ( v11 )
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = CResource::RegisterNotifier(this, Resource);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x3Fu, 0LL);
      return v4;
    }
    CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(this);
LABEL_12:
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return v4;
}
