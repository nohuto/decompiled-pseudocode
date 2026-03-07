__int64 __fastcall xxxClientThreadSetup(__int64 a1)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v2; // rcx
  ULONG_PTR v3; // rdx
  unsigned int v4; // ebx
  int v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
  {
    v3 = *(unsigned int *)(CurrentThreadWin32Thread + 48);
    if ( (_DWORD)v3 )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, v3, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  UserSessionSwitchLeaveCrit(v2);
  EtwTraceBeginCallback(84LL);
  v4 = KeUserModeCallback(84LL, 0LL, 0LL, &v7, &v6);
  EtwTraceEndCallback(84LL);
  EnterCrit(1LL, 0LL);
  return v4;
}
