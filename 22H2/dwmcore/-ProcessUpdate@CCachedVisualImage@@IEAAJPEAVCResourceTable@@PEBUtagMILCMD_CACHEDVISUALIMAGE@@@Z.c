/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18003287C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x180032820 (-UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x180032A0C (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180037460 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D9B0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3484 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ @ 0x1800D3BB8 (-MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 Resource; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // ecx

  CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a3 + 8);
  v6 = *((unsigned int *)a3 + 10);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 140LL);
    *((_QWORD *)this + 13) = Resource;
    if ( !Resource )
    {
      v13 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2003303421, 0xCDu, 0LL);
LABEL_26:
      CCachedVisualImage::UnRegisterNotifiers((struct CResource **)this);
      goto LABEL_16;
    }
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_OWORD *)this + 7) = *(_OWORD *)((char *)a3 + 24);
  v7 = *((unsigned int *)a3 + 11);
  if ( !(_DWORD)v7 )
  {
    *((_QWORD *)this + 16) = 0LL;
    goto LABEL_5;
  }
  v21 = CResourceTable::GetResource(a2, v7, 172LL);
  *((_QWORD *)this + 16) = v21;
  if ( !v21 )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, -2003303421, 0xDEu, 0LL);
    goto LABEL_26;
  }
LABEL_5:
  v8 = *((unsigned int *)a3 + 12);
  if ( !(_DWORD)v8 )
  {
    *((_QWORD *)this + 17) = 0LL;
    goto LABEL_11;
  }
  v9 = CResourceTable::GetResource(a2, v8, 195LL);
  *((_QWORD *)this + 17) = v9;
  if ( !v9 )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0xEFu, 0LL);
    goto LABEL_26;
  }
  if ( *((_BYTE *)this + 1801) )
  {
    *((_BYTE *)this + 1801) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
  if ( *((_BYTE *)this + 1800) )
  {
    *((_BYTE *)this + 1800) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
LABEL_11:
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 38) = *((unsigned __int8 *)a3 + 60);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 16);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 17);
  CCachedVisualImage::ChoosePixelFormat(this);
  v11 = CResource::RegisterNotifier(this, *((struct CResource **)this + 17));
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x8Au, 0LL);
  }
  else
  {
    v14 = CResource::RegisterNotifier(this, *((struct CResource **)this + 13));
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x8Bu, 0LL);
    }
    else
    {
      v16 = CResource::RegisterNotifier(this, *((struct CResource **)this + 16));
      v13 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x8Cu, 0LL);
    }
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v13, 0x110u, 0LL);
    goto LABEL_26;
  }
LABEL_16:
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v13;
}
