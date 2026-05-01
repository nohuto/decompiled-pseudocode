/*
 * XREFs of ?InitializeForTagging@CAppTransitionTargetManager@@UEAAJPEBUAnimationPassState@@K@Z @ 0x1804375F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAppTransitionTargetManager::InitializeForTagging(
        CAppTransitionTargetManager *this,
        const struct AnimationPassState *a2,
        int a3)
{
  __int64 result; // rax
  __int128 v4; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 104) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    result = 0LL;
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)a2;
    v4 = *((_OWORD *)a2 + 1);
    *((_DWORD *)this + 27) = a3;
    *((_BYTE *)this + 104) = 1;
    *(_OWORD *)((char *)this + 88) = v4;
  }
  return result;
}
