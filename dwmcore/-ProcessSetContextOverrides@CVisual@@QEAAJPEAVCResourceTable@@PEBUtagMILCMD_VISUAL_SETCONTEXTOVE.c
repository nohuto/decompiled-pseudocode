/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1800FAF5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1800394A0 (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800FB008 (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1800FB030 (-SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1800FB070 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  float v5; // xmm1_4
  FLOAT v6; // xmm1_4
  __int64 v7; // rax
  char v8; // cl
  bool v9; // zf
  struct D2D_VECTOR_3F v11; // [rsp+20h] [rbp-18h] BYREF

  CVisual::GetWorldUpVectorOverride(this, &v11);
  v5 = *((float *)a3 + 2);
  if ( v5 != CVisual::GetWorldRenderingScaleOverride(this)
    || *((float *)a3 + 3) != v11.x
    || *((float *)a3 + 4) != v11.y
    || *((float *)a3 + 5) != v11.z )
  {
    CVisual::SetWorldRenderingScaleOverride(this, v5);
    v6 = *((float *)a3 + 4);
    v11.x = *((FLOAT *)a3 + 3);
    v11.z = *((FLOAT *)a3 + 5);
    v11.y = v6;
    CVisual::SetWorldUpVectorOverride(this, &v11);
    v7 = *((_QWORD *)this + 28);
    if ( (*(_DWORD *)(v7 + 4) & 0x40000) != 0 || (*(_DWORD *)(v7 + 4) & 0x20000) != 0 )
      v8 = 0x80;
    else
      v8 = 0;
    v9 = (*((_DWORD *)this + 24) & 0x4000) == 0;
    *((_BYTE *)this + 102) = v8 | *((_BYTE *)this + 102) & 0x7F;
    if ( !v9 )
    {
      *((_QWORD *)this + 73) = 0LL;
      CVisual::PropagateFlags((__int64)this, 0x10u);
    }
  }
  return 0LL;
}
