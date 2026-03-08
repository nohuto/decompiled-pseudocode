/*
 * XREFs of ?ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETHOVERSOURCE@@@Z @ 0x1801012C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCHoverPointerSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCHoverPointerSource@@@Z @ 0x18010131C (--4-$ComPtr@VCHoverPointerSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCHoverPointerSource@@@Z.c)
 */

__int64 __fastcall CInteraction::ProcessSetHoverSource(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_SETHOVERSOURCE *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 Resource; // rax

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x52u);
    if ( Resource )
      v4 = Resource - 8;
  }
  if ( v4 != *((_QWORD *)this + 35) )
    Microsoft::WRL::ComPtr<CHoverPointerSource>::operator=((char *)this + 280, v4);
  return 0LL;
}
