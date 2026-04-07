/*
 * XREFs of ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B6D90
 * Callers:
 *     ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800B63D0 (-CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013F7C (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::InitializeVisualTreeClone(_QWORD *a1, CRenderDataVisual *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CRenderDataVisual::InitializeVisualTreeClone((__int64)a1, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_QWORD *)a2 + 37) = a1[37];
    v7 = a1[37];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *((_QWORD *)a2 + 35) = a1[35];
    v8 = a1[35];
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    *((_QWORD *)a2 + 38) = a1[38];
    v9 = a1[38];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
