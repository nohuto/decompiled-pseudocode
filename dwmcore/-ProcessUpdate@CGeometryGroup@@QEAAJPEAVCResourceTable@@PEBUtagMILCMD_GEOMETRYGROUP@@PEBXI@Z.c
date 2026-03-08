/*
 * XREFs of ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18021E908
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18004A69C (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800E746C (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18021E498 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x18021EF20 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometryGroup::ProcessUpdate(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRYGROUP *a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // eax
  __int64 v10; // rcx
  struct CResource **v11; // rdx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-38h]
  struct CResource **v18; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_DWORD *)a3 + 3) )
  {
    v9 = CGeometryGroup::ProcessAppend(this, a2, a3, a4, a5);
    v12 = v9;
    if ( v9 >= 0 )
      goto LABEL_10;
    v17 = 244;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v17, 0LL);
    goto LABEL_9;
  }
  CGeometryGroup::UnRegisterNotifiers(this);
  v9 = CResource::UnmarshalResourceArray(
         a4,
         a5,
         *((_DWORD *)a3 + 2),
         0x43u,
         (unsigned int *)this + 42,
         (void **)&v18,
         (__int64)a2,
         0);
  v11 = v18;
  v12 = v9;
  *((_QWORD *)this + 22) = v18;
  if ( v9 < 0 )
  {
    v17 = 237;
    goto LABEL_8;
  }
  v13 = CResource::RegisterNNotifiersInternal(this, v11, *((unsigned int *)this + 42));
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x168u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v12, 0xF0u, 0LL);
LABEL_9:
    CGeometryGroup::UnRegisterNotifiers(this);
  }
LABEL_10:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v12;
}
