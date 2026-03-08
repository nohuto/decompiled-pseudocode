/*
 * XREFs of ?ProcessSetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL@@@Z @ 0x18024C040
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x18024C23C (-SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::ProcessSetMaterial(
        CSceneMeshRendererComponent *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMATERIAL *a3)
{
  struct CSceneMaterial *Resource; // rax
  unsigned int v5; // edx
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CSceneMaterial *)CResourceTable::GetResource((__int64)a2, v5, 0x9Bu);
    if ( !Resource )
    {
      v7 = -2003303421;
      v8 = 122LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  v7 = CSceneMeshRendererComponent::SetMaterial(this, Resource);
  if ( v7 < 0 )
  {
    v8 = 126LL;
    goto LABEL_4;
  }
  return 0LL;
}
