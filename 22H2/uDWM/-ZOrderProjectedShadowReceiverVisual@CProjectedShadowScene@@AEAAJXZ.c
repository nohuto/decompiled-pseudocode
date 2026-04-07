/*
 * XREFs of ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC840
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001A2C0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC6DC (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180019DAC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z @ 0x180097CB0 (-GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  struct CTopLevelWindow *LowestProjectedShadowCasterWindowForDesktop; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 64) )
    return 0LL;
  LowestProjectedShadowCasterWindowForDesktop = CWindowList::GetLowestProjectedShadowCasterWindowForDesktop(
                                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                                  *((_QWORD *)this + 2));
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 2));
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               *((struct CVisual **)this + 7),
               LowestProjectedShadowCasterWindowForDesktop,
               0,
               1);
  v5 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9C,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)inserted);
  return v5;
}
