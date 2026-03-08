/*
 * XREFs of ?SetTransform3D@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJPEAVCTransform3D@@@Z @ 0x1800F9DC0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetTransform3D(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( a2 != this[11] )
  {
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1000u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
      this[11] = a2;
      CResource::NotifyOnChanged((__int64)this, 2u, (__int64)a2);
    }
  }
  return v2;
}
