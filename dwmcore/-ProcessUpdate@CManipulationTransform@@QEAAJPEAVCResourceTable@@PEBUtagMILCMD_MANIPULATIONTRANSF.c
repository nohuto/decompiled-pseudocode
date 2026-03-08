/*
 * XREFs of ?ProcessUpdate@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM@@@Z @ 0x18021EB20
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::ProcessUpdate(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATIONTRANSFORM *a3)
{
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
