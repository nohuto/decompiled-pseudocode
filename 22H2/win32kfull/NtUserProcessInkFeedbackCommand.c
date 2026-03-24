/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1C01FFFC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C0220188 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall NtUserProcessInkFeedbackCommand(unsigned int a1, void *Src, unsigned int a3)
{
  SIZE_T v3; // r14
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v13; // rdi

  v3 = a3;
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v10 = (void *)Win32AllocPoolWithQuota(v3, 1768452949LL);
    v13 = v10;
    if ( v10 )
    {
      memmove(v10, Src, v3);
      LOBYTE(v6) = (int)InkProcessorProcessInkFeedbackCommand(a1, v13, v3) >= 0;
      Win32FreePool(v13);
    }
    else
    {
      UserSetLastError(8LL, v11, v12);
    }
  }
  else
  {
    UserSetLastError(87LL, v7, v8);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v6;
}
