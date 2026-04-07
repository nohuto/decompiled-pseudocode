/*
 * XREFs of ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000E710
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800057F4 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000E900 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000E9E8 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000EAD0 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8290 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ValidateVisual(CAnimatedTransitionVisual *this)
{
  CAnimatedTransitionVisual *v1; // rdi
  int v3; // eax
  unsigned int v4; // esi
  int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CAnimatedTransitionVisual *)((char *)this - 8);
  v3 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)((char *)this - 8));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  if ( *((_BYTE *)this + 968) )
  {
    v5 = CAnimatedTransitionVisual::Validate3DVisual(v1);
    if ( v5 < 0 )
    {
      v9 = 949LL;
      goto LABEL_13;
    }
  }
  else
  {
    if ( !*((_BYTE *)this + 960) )
    {
      v5 = CAnimatedTransitionVisual::Validate2DVisual(v1);
      if ( v5 >= 0 )
        goto LABEL_5;
      v9 = 957LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = CAnimatedTransitionVisual::_ValidateDCompVisual(v1);
    if ( v5 < 0 )
    {
      v9 = 953LL;
      goto LABEL_13;
    }
  }
LABEL_5:
  v6 = CRenderDataVisual::ValidateVisual(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3C0,
    (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
