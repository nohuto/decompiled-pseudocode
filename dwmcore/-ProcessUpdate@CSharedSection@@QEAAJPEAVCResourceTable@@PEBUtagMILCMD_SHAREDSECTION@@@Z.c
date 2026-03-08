/*
 * XREFs of ?ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTION@@@Z @ 0x1800FC278
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSharedSection::ProcessUpdate(
        CSharedSection *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTION *a3)
{
  *((_QWORD *)this + 8) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 4);
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
