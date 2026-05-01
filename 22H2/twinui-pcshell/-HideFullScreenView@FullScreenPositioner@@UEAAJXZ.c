/*
 * XREFs of ?HideFullScreenView@FullScreenPositioner@@UEAAJXZ @ 0x180215C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x180069C64 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 */

__int64 __fastcall FullScreenPositioner::HideFullScreenView(FullScreenPositioner *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)((char *)this - 104));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
