/*
 * XREFs of ?ProcessSetSourceVisual@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSOURCEVISUAL@@@Z @ 0x1800BA7E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetSourceVisual(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSOURCEVISUAL *a3)
{
  struct CResource *Resource; // rbx
  unsigned int v5; // edx
  struct CResource *v7; // rdx
  int VisualTree; // ebx
  CVisual *v9; // rbx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xC4u);
    *((_BYTE *)this + 201) = 0;
  }
  v7 = (struct CResource *)*((_QWORD *)this + 8);
  if ( v7 == Resource )
    goto LABEL_7;
  CResource::UnRegisterNotifierInternal(this, v7);
  *((_QWORD *)this + 8) = 0LL;
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((char *)this + 72);
  *((_QWORD *)this + 8) = Resource;
  if ( !Resource )
    goto LABEL_7;
  VisualTree = CResource::RegisterNotifier(this, Resource);
  if ( VisualTree < 0 )
  {
    v11 = 133LL;
  }
  else
  {
    v9 = (CVisual *)*((_QWORD *)this + 8);
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((char *)this + 72);
    VisualTree = CVisual::GetVisualTree(v9, (struct CVisualTree **)this + 9);
    if ( VisualTree >= 0 )
    {
LABEL_7:
      CResource::NotifyOnChanged(this, 0LL, 0LL);
      return 0LL;
    }
    v11 = 136LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)VisualTree,
    v12);
  return (unsigned int)VisualTree;
}
