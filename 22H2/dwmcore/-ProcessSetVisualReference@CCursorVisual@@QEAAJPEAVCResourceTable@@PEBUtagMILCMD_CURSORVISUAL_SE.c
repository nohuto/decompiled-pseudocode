/*
 * XREFs of ?ProcessSetVisualReference@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_SETVISUALREFERENCE@@@Z @ 0x1801BE858
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800450D0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D9B0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3484 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z @ 0x1801BE72C (-GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCursorVisual::ProcessSetVisualReference(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CURSORVISUAL_SETVISUALREFERENCE *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  __int64 v9; // rcx
  struct CResource *v10; // rcx
  struct CVisual *v11; // rax
  CCursorVisual *v12; // rcx

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[80]);
  this[80] = 0LL;
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v7, 0xC6u);
    if ( Resource )
    {
      this[80] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      v10 = this[80];
      if ( v10 )
      {
        v11 = (struct CVisual *)(*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 200LL))(v10);
        if ( v11 )
          *((_DWORD *)this + 157) = CCursorVisual::GetDesktopId(v12, v11);
      }
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x61u, 0LL);
    }
  }
  return v6;
}
