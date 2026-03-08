/*
 * XREFs of ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x18024EDC4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18004A9B0 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18012F6FA (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x180227308 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z @ 0x18024EF70 (-SetDropShadow@CSpriteVisual@@IEAAXPEAVCDropShadow@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::ProcessSetShadow(
        CSpriteVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVISUAL_SETSHADOW *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  CDropShadow *DropShadow; // rax
  int v10; // eax
  __int64 v11; // rcx
  struct CResource *v12; // rax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x37u)) != 0LL )
  {
    if ( Resource != CSpriteVisual::GetDropShadow(this) )
    {
      CVisual::ClearContentTreeDataCaches(this);
      if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
      {
        DropShadow = CSpriteVisual::GetDropShadow(this);
        CDropShadow::RemoveVisualFromCache(DropShadow, this);
      }
      v10 = CResource::RegisterNotifier(this, Resource);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x63u, 0LL);
      }
      else
      {
        if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
        {
          v12 = CSpriteVisual::GetDropShadow(this);
          CResource::UnRegisterNotifierInternal(this, v12);
        }
        CSpriteVisual::SetDropShadow(this, Resource);
        CVisual::PropagateFlags((__int64)this, 5u);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x53u, 0LL);
  }
  return v4;
}
