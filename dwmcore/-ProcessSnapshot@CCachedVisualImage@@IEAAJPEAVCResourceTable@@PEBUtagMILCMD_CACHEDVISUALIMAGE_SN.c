/*
 * XREFs of ?ProcessSnapshot@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT@@@Z @ 0x1800FB204
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x1800FB230 (-RegisterRenderSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessSnapshot(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CComposition::RegisterRenderSnapshotToPerform(this[2], (struct CCachedVisualImage *)this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\CachedVisualImage.h",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
