/*
 * XREFs of ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXTRANSFORM@@@Z @ 0x1800BBD44
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801F0A60 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BC160 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMatrixTransform::ProcessUpdate(
        CMatrixTransform *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MATRIXTRANSFORM *a3)
{
  *((_OWORD *)this + 10) = *(_OWORD *)((char *)a3 + 8);
  *((_QWORD *)this + 22) = *((_QWORD *)a3 + 3);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
