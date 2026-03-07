void __fastcall __noreturn PoShutdownBugCheck(
        char a1,
        ULONG a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a6)
{
  unsigned __int64 CurrentThreadProcessId; // rax
  ULONG_PTR v11; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-50h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-48h]
  HANDLE CurrentThreadId; // [rsp+40h] [rbp-40h]
  unsigned __int64 v16; // [rsp+48h] [rbp-38h]
  ULONG v17; // [rsp+50h] [rbp-30h]
  int v18; // [rsp+54h] [rbp-2Ch]
  ULONG_PTR v19; // [rsp+58h] [rbp-28h]
  ULONG_PTR v20; // [rsp+60h] [rbp-20h]
  ULONG_PTR v21; // [rsp+68h] [rbp-18h]
  ULONG_PTR v22; // [rsp+70h] [rbp-10h]
  LARGE_INTEGER Interval; // [rsp+B0h] [rbp+30h] BYREF

  v18 = 0;
  if ( PopCriticalShutdownInProgress )
  {
    Interval.QuadPart = -300000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !a1 )
  {
    Process = 0LL;
    IoConfigureCrashDump(0LL, 0);
  }
  CurrentThread = KeGetCurrentThread();
  CurrentThreadId = PsGetCurrentThreadId();
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v11 = BugCheckParameter3;
  BugCheckParameter4 = a6;
  v16 = CurrentThreadProcessId;
  v17 = a2;
  v19 = a3;
  v20 = a4;
  v21 = BugCheckParameter3;
  v22 = a6;
  *(_QWORD *)&qword_140C3CD90 = &CurrentThread;
  ZwInitiatePowerAction(5LL, 4LL);
  KeBugCheckEx(a2, a3, a4, v11, BugCheckParameter4);
}
