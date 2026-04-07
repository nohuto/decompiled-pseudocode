/*
 * XREFs of ?Initialize@UdwmTopVisual@@MEAAJXZ @ 0x1800BACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027EA0 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall UdwmTopVisual::Initialize(UdwmTopVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
