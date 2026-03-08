/*
 * XREFs of ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x180253D20
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRenderTransform@CCachedVisualImage@@IEAAJAEBU_D3DMATRIX@@@Z @ 0x18021466C (-SetRenderTransform@CCachedVisualImage@@IEAAJAEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessSetTransformMatrix(
        CSnapshot *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_SNAPSHOT_SETTRANSFORMMATRIX *a3)
{
  CCachedVisualImage *v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v3 = (CCachedVisualImage *)*((_QWORD *)this + 9);
  v4 = 0;
  if ( v3 )
  {
    v5 = CCachedVisualImage::SetRenderTransform(v3, (const struct _D3DMATRIX *)((char *)a3 + 8));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Eu, 0LL);
  }
  return v4;
}
