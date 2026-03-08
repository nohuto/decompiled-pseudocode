/*
 * XREFs of ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800EF158
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800DB32C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ProcessSetSpriteClip(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETSPRITECLIP *a3)
{
  unsigned int v3; // edi
  struct CResource *v4; // rsi
  const struct tagMILCMD_WINDOWNODE_SETSPRITECLIP *v5; // r9
  struct CResourceTable *v6; // r11
  char v8; // al
  char v9; // bp
  CPtrArrayBase *v10; // r10
  unsigned __int64 Count; // rax
  __int64 *v12; // rcx
  unsigned __int64 v13; // r8
  unsigned int v14; // edx
  int v15; // eax
  __int64 v16; // rcx
  __int64 Resource; // rax
  __int64 v19; // rcx

  v3 = 0;
  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  v8 = *((_BYTE *)a3 + 8) != 0;
  v9 = 0;
  if ( v8 != *((_BYTE *)this + 889) )
  {
    *((_BYTE *)this + 889) = v8;
    v9 = 1;
    v10 = (CWindowNode *)((char *)this + 776);
    while ( 1 )
    {
      Count = CPtrArrayBase::GetCount(v10);
      if ( v13 >= Count )
        break;
      *((_BYTE *)CPtrArrayBase::operator[](v12, v13) + 143) = *((_BYTE *)this + 889);
    }
  }
  v14 = *((_DWORD *)v5 + 3);
  if ( !v14
    || (Resource = CResourceTable::GetResource((__int64)v6, v14, 0x43u), (v4 = (struct CResource *)Resource) != 0LL)
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 56LL))(Resource, 142LL) )
  {
    if ( v4 != *((struct CResource **)this + 99) )
    {
      v15 = CResource::RegisterNotifier(this, v4);
      v3 = v15;
      if ( v15 >= 0 )
      {
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 99));
        *((_QWORD *)this + 99) = v4;
LABEL_10:
        *((_BYTE *)this + 888) = 0;
        CVisual::PropagateFlags((__int64)this, 5u);
        return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x212u, 0LL);
    }
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2003303421, 0x20Cu, 0LL);
  }
  if ( v9 )
    goto LABEL_10;
  return v3;
}
