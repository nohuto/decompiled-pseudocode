/*
 * XREFs of ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180215110
 * Callers:
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18021504C (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800A8D04 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x1800F3950 (-UpdateVisualTree@CCachedVisualImage@@MEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDebugVisualImage::Initialize(CDebugVisualImage *this, struct CVisual *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 87;
  *((_DWORD *)this + 41) = 1;
  CCachedVisualImage::ChoosePixelFormat(this);
  *((_QWORD *)this + 18) = a2;
  updated = CResource::RegisterNotifier(this, a2);
  if ( updated < 0 )
  {
    v5 = 67LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\debugvisualimage.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CCachedVisualImage::UpdateVisualTree(this);
  if ( updated < 0 )
  {
    v5 = 68LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 1776) = 1;
  return 0LL;
}
