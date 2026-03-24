/*
 * XREFs of UserDeleteW32Thread @ 0x1C011CB00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00073E0 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C002CF10 (Win32FreeToPagedLookasideList.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0037134 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003A724 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0047380 (UnlockObjectAssignment.c)
 *     FreeMessageList @ 0x1C0094B18 (FreeMessageList.c)
 *     IsFreeMessageListSupported @ 0x1C0095F54 (IsFreeMessageListSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UserDeleteW32Thread(__int64 a1)
{
  __int64 v1; // rsi
  void *ThreadWin32Thread; // rdi
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // xmm1_8
  int v10; // ebx
  int v11; // eax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  ThreadWin32Thread = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_24;
  v4 = *(void **)(a1 + 736);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(_QWORD *)(a1 + 880);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 496);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a1 + 432);
  if ( v7 )
  {
    if ( !*(_DWORD *)(v7 + 396) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2026);
      v7 = *(_QWORD *)(a1 + 432);
    }
    --*(_DWORD *)(v7 + 396);
    v8 = *(_QWORD *)(a1 + 432);
    if ( !*(_DWORD *)(v8 + 396) && !*(_DWORD *)(v8 + 392) )
    {
      if ( (int)IsFreeMessageListSupported() >= 0 )
      {
        CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(
          (__int64)&v12,
          *(_QWORD *)(a1 + 432));
        FreeMessageList(*(_QWORD *)(a1 + 432) + 24LL);
      }
      Win32FreeToPagedLookasideList((__int64)QLookaside, *(_QWORD *)(a1 + 432));
    }
  }
  v9 = *(_QWORD *)(a1 + 408);
  v12 = *(_OWORD *)(a1 + 392);
  v13 = v9;
  if ( *(_QWORD *)(a1 + 456) )
    UnlockObjectAssignment((void **)(a1 + 456));
  ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
  Win32FreePool(a1);
  if ( !ThreadWin32Thread )
  {
LABEL_24:
    v11 = v14;
  }
  else
  {
    v10 = v14;
    if ( !v14 )
      EtwTraceReleaseUserCrit();
    PsSetThreadWin32Thread(v1, 0LL, ThreadWin32Thread);
    if ( !v10 )
      UserSessionSwitchLeaveCrit();
    v11 = 1;
  }
  if ( !v11 )
    UserSessionSwitchLeaveCrit();
  if ( ThreadWin32Thread )
    ExFreePoolWithTag(ThreadWin32Thread, 0);
}
