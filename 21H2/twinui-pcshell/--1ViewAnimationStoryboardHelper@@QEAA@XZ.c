/*
 * XREFs of ??1ViewAnimationStoryboardHelper@@QEAA@XZ @ 0x180305CC4
 * Callers:
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$7 @ 0x1803077B4 (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$7.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ViewAnimationStoryboardHelper::~ViewAnimationStoryboardHelper(ViewAnimationStoryboardHelper *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)this )
  {
    *(_BYTE *)this = 0;
    v1 = DwmpEndTransitionRequest(*((unsigned int *)this + 1));
    if ( v1 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\ViewAnimationStoryboardHelper.h",
        (const char *)(unsigned int)v1);
  }
}
