/*
 * XREFs of ?Initialize@ViewAnimationStoryboardHelper@@QEAAJHAEBU_GUID@@@Z @ 0x180306BB8
 * Callers:
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x180306EF0 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewAnimationStoryboardHelper::Initialize(
        ViewAnimationStoryboardHelper *this,
        __int64 a2,
        const struct _GUID *a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 1) == -1 )
  {
    *((_DWORD *)this + 1) = 93;
    result = 0LL;
    *(struct _GUID *)((char *)this + 8) = AnimationClock_TabSwitch;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\ViewAnimationStoryboardHelper.h",
      (const char *)0x800704DFLL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\ViewAnimationStoryboardHelper.h",
      (const char *)0x800704DFLL);
    return 2147943647LL;
  }
  return result;
}
