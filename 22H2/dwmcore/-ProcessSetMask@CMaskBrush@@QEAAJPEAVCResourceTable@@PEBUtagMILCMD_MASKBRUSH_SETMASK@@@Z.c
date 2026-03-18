/*
 * XREFs of ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1800E9F34
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049524 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A8DC (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800E9FD4 (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::ProcessSetMask(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MASKBRUSH_SETMASK *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CResource *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct CResource *v10; // rax

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v5 = ResourceWithoutType;
  if ( ResourceWithoutType != this[11] )
  {
    if ( ResourceWithoutType )
    {
      if ( !CMaskBrush::IsValidMaskResource(ResourceWithoutType) )
      {
        v9 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0xEAu, 0LL);
        return v9;
      }
      v7 = CResource::RegisterNotifier((CResource *)this, v5);
      v9 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xEDu, 0LL);
        return v9;
      }
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
    v10 = *this;
    this[11] = v5;
    (*((void (__fastcall **)(struct CResource **, __int64))v10 + 9))(this, 14LL);
  }
  return 0;
}
