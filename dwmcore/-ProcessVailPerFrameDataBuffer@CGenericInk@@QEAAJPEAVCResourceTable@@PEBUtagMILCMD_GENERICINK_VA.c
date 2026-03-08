/*
 * XREFs of ?ProcessVailPerFrameDataBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER@@@Z @ 0x18022AC38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSection@@II@Z @ 0x18022B2D8 (-ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSect.c)
 */

__int64 __fastcall CGenericInk::ProcessVailPerFrameDataBuffer(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER *a3)
{
  unsigned int v5; // edx
  struct CCrossContainerGuestReadWriteSharedSection *Resource; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CCrossContainerGuestReadWriteSharedSection *)CResourceTable::GetResource((__int64)a2, v5, 0x30u);
    if ( !Resource )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAB,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    CSuperWetSource::ProcessVailPerFrameDataBuffer(this, Resource, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4));
  }
  return 0LL;
}
