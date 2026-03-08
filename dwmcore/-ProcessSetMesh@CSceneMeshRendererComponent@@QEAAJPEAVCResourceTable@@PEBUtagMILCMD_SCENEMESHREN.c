/*
 * XREFs of ?ProcessSetMesh@CSceneMeshRendererComponent@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH@@@Z @ 0x18024C0B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x18024BF08 (-ApplyMeshToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 */

__int64 __fastcall CSceneMeshRendererComponent::ProcessSetMesh(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENEMESHRENDERERCOMPONENT_SETMESH *a3)
{
  struct CResource *Resource; // rdi
  unsigned int v5; // edx
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x9Du);
    if ( !Resource )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
        (const char *)0x88980403LL);
      return 2291663875LL;
    }
  }
  if ( Resource != this[11] )
  {
    v8 = CResource::RegisterNotifier((CResource *)this, Resource);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
        (const char *)(unsigned int)v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x92,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scenemeshrenderercomponent.cpp",
        (const char *)v9);
      return v9;
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
    this[11] = Resource;
    CSceneMeshRendererComponent::ApplyMeshToSpectreResources((CSceneMeshRendererComponent *)this);
  }
  return 0LL;
}
