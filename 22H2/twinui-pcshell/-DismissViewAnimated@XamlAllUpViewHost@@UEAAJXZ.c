/*
 * XREFs of ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x1803710A0
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180377C50 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x18036ED3C (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::DismissViewAnimated(__int64 **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  volatile int *v3; // rdx
  int v5; // [rsp+28h] [rbp-10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)(this + 3) & -(__int64)(this != 0LL));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  XamlAllUpViewHost::AnimateDismissFrames(this, v3);
  if ( v5 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
