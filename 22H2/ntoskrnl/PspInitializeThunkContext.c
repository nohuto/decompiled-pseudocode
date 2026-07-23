/*
 * XREFs of PspInitializeThunkContext @ 0x1406C07E0
 * Callers:
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     KiDispatchException @ 0x14033C330 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14033F500 (RtlInitializeExtendedContext.c)
 *     KePopulateContinuationContext @ 0x14034063C (KePopulateContinuationContext.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     PspCallThreadNotifyRoutines @ 0x14061B820 (PspCallThreadNotifyRoutines.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406C0EA8 (RtlCopyContext.c)
 *     PspCreateUserContext @ 0x1406C1520 (PspCreateUserContext.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 */

char PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG v1; // r14d
  NTSTATUS ExtendedContextLength; // ebx
  SIZE_T v3; // rsi
  unsigned __int64 v4; // rax
  void *v5; // rsp
  int v6; // r9d
  _CONTEXT *v7; // r13
  void *InstrumentationCallback; // rdx
  __int64 v9; // rcx
  char result; // al
  _QWORD *InitialStack; // rdx
  _QWORD *i; // r8
  _BYTE Context[1424]; // [rsp+30h] [rbp+0h] BYREF

  memset(&Context[60], 0, 0x7CuLL);
  memset(&Context[4], 0, 20);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)&Context[24] = CurrentThread;
  v1 = ((unsigned int)CurrentThread->MiscFlags >> 14) & 0x40 | 0x10001B;
  ExtendedContextLength = RtlGetExtendedContextLength(v1, (PULONG)&Context[4]);
  if ( ExtendedContextLength >= 0 )
  {
    v3 = *(unsigned int *)&Context[4];
    v4 = *(unsigned int *)&Context[4] + 15LL;
    if ( v4 <= *(unsigned int *)&Context[4] )
      v4 = 0xFFFFFFFFFFFFFF0LL;
    v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
    memset(Context, 0, *(unsigned int *)&Context[4]);
    ExtendedContextLength = RtlInitializeExtendedContext((PCONTEXT)Context, v1, (PCONTEXT_EX *)&Context[8]);
    if ( ExtendedContextLength >= 0 )
    {
      memset(&Context[192], 0, 0x4D0uLL);
      --CurrentThread->SpecialApcDisable;
      PspCallThreadNotifyRoutines(CurrentThread, 1u, 1);
      LOBYTE(v6) = 1;
      ExtendedContextLength = PspGetContextThreadInternal((_DWORD)CurrentThread, (unsigned int)Context, 0, v6, 0);
      *(_DWORD *)Context = ExtendedContextLength;
      if ( ExtendedContextLength >= 0 )
      {
        v7 = (_CONTEXT *)((*(_QWORD *)&Context[152] - v3) & 0xFFFFFFFFFFFFFFF0uLL);
        *(_QWORD *)&Context[344] = (char *)v7 - 40;
        PspCreateUserContext(
          (unsigned int)&Context[192],
          0,
          PspLoaderInitRoutine,
          (*(_DWORD *)&Context[152] - v3) & 0xFFFFFFF0,
          *((_QWORD *)PspSystemDlls + 5));
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          *(_QWORD *)&Context[392] = *(_QWORD *)&Context[440];
          *(_QWORD *)&Context[440] = InstrumentationCallback;
        }
        v9 = (__int64)v7;
        if ( v3 - 1 > 0xFFE )
        {
          ProbeForWrite(v7, v3, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v7 >= 0x7FFFFFFF0000LL )
            v9 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v9 = *(_BYTE *)v9;
          *(_BYTE *)(v9 + v3 - 1) = *(_BYTE *)(v9 + v3 - 1);
        }
        ExtendedContextLength = RtlInitializeExtendedContext(v7, v1, (PCONTEXT_EX *)&Context[16]);
        *(_DWORD *)Context = ExtendedContextLength;
        if ( ExtendedContextLength >= 0 )
        {
          ExtendedContextLength = RtlCopyContext(v7, v1, (PCONTEXT)Context);
          *(_DWORD *)Context = ExtendedContextLength;
          if ( ExtendedContextLength >= 0 )
            KePopulateContinuationContext(*(__int64 *)&Context[248]);
        }
        if ( ExtendedContextLength >= 0 )
          ExtendedContextLength = PspSetContextThreadInternal(CurrentThread, 2);
      }
    }
  }
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( ExtendedContextLength < 0 )
  {
    *(_QWORD *)&Context[48] = PspLoaderInitRoutine;
    *(_QWORD *)&Context[32] = (unsigned int)ExtendedContextLength;
    *(_DWORD *)&Context[56] = 0;
    *(_QWORD *)&Context[40] = 0LL;
    InitialStack = CurrentThread->InitialStack;
    for ( i = InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    return KiDispatchException(
             (PEXCEPTION_RECORD)&Context[32],
             (unsigned __int64)(InitialStack - 90),
             (__int64)(i - 50),
             1u,
             0);
  }
  return result;
}
