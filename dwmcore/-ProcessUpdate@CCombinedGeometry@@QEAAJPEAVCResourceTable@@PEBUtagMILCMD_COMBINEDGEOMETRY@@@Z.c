/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x18000C114
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x18000C1F0 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMBINEDGEOMETRY *a3)
{
  __int64 v6; // rdx
  __int64 Resource; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // edi
  unsigned int v15; // esi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v19; // ecx

  CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 2);
  v6 = *((unsigned int *)a3 + 3);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 67LL);
    this[22] = (struct CResource *)Resource;
    if ( !Resource )
    {
      v15 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x61u, 0LL);
      goto LABEL_15;
    }
  }
  else
  {
    this[22] = 0LL;
  }
  v9 = *((unsigned int *)a3 + 4);
  if ( (_DWORD)v9 )
  {
    v10 = CResourceTable::GetResource(a2, v9, 67LL);
    this[23] = (struct CResource *)v10;
    if ( v10 )
      goto LABEL_5;
    v15 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x73u, 0LL);
LABEL_15:
    CCombinedGeometry::UnRegisterNotifiers((CCombinedGeometry *)this);
    goto LABEL_7;
  }
  this[23] = 0LL;
LABEL_5:
  v12 = CResource::RegisterNotifier((CResource *)this, this[22]);
  v14 = v12;
  v15 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x8Fu, 0LL);
    goto LABEL_14;
  }
  v16 = CResource::RegisterNotifier((CResource *)this, this[23]);
  v14 = v16;
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x90u, 0LL);
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v14, 0x7Cu, 0LL);
    goto LABEL_15;
  }
LABEL_7:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return v15;
}
