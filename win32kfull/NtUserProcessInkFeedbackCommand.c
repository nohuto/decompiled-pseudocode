__int64 __fastcall NtUserProcessInkFeedbackCommand(__int64 a1, void *Src, __int64 a3)
{
  SIZE_T v3; // rsi
  unsigned int v5; // r12d
  int v6; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rdi

  v3 = (unsigned int)a3;
  v5 = a1;
  v6 = 0;
  EnterSharedCrit(a1, Src, a3);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v8 = (void *)Win32AllocPoolWithQuotaZInit(v3, 1768452949LL);
    v9 = v8;
    if ( v8 )
    {
      memmove(v8, Src, v3);
      LOBYTE(v6) = (int)InkProcessorProcessInkFeedbackCommand(v5, v9, v3) >= 0;
      Win32FreePool(v9);
    }
    else
    {
      UserSetLastError(8);
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
