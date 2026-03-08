/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x1C002FD74
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00074BC (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0007558 (Controller_RaiseAndTrackIrql.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000A7F8 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C000A998 (Command_InternalSendCommand.c)
 *     XilCommand_WriteDoorbell @ 0x1C000ABF8 (XilCommand_WriteDoorbell.c)
 *     Controller_ReportFatalErrorEx @ 0x1C001EB8C (Controller_ReportFatalErrorEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ii @ 0x1C0030D30 (WPP_RECORDER_SF_ii.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C0031388 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033774 (Controller_HwVerifierBreakIfEnabled.c)
 *     Etw_CommandCompleteError @ 0x1C004A868 (Etw_CommandCompleteError.c)
 */

char __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rdi
  char v5; // r12
  __int64 v6; // rcx
  __int64 CommandRingBufferLogicalAddress; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // eax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int128 *v19; // rax
  _OWORD ***v20; // rcx
  char result; // al
  __int64 v22; // rcx
  __int128 v23; // [rsp+40h] [rbp-10h] BYREF

  v23 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 601) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v6);
      v5 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  *(_BYTE *)(a1 + 121) = 0;
  CommandRingBufferLogicalAddress = XilCommand_GetCommandRingBufferLogicalAddress(a1);
  v11 = *a2;
  v12 = CommandRingBufferLogicalAddress + 16LL * *(unsigned int *)(a1 + 44);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(*(_QWORD *)(a1 + 16), v8, v9, v10);
  if ( v11 == v12 || v11 == *(_QWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 44) )
  {
    v13 = *(_QWORD *)(a1 + 80);
    if ( v13 != a1 + 80 )
    {
      v4 = *(__int64 **)(a1 + 80);
      v14 = *(_DWORD *)(v13 + 56);
      if ( v14 )
      {
        if ( v14 == 5 || v14 == 10 )
          v4 = 0LL;
      }
      else
      {
        v15 = (__int64 *)*v4;
        if ( *(__int64 **)(*v4 + 8) != v4 || (v16 = (__int64 **)v4[1], *v16 != v4) )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = (__int64)v16;
        v17 = (unsigned int)++*(_DWORD *)(a1 + 44);
        if ( (_DWORD)v17 == *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 44) = 0;
          v17 = 0LL;
        }
        XilCommand_AdvanceCommandRingControlDequeuePointer(a1, v17);
      }
    }
    if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v8, 7, 42, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
      XilCommand_WriteDoorbell(a1);
    }
    v18 = *(_QWORD *)(a1 + 96);
    if ( v18 != a1 + 96 )
    {
      *((_QWORD *)&v23 + 1) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)&v23 = v18;
      *(_QWORD *)(v18 + 8) = &v23;
      **((_QWORD **)&v23 + 1) = &v23;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      goto LABEL_30;
    }
    *((_QWORD *)&v23 + 1) = &v23;
    v19 = &v23;
    *(_QWORD *)&v23 = &v23;
    while ( v19 != &v23 )
    {
      if ( *((__int128 **)v19 + 1) != &v23 || (v20 = *(_OWORD ****)v19, *(__int128 **)(*(_QWORD *)v19 + 8LL) != v19) )
        __fastfail(3u);
      *(_QWORD *)&v23 = *(_QWORD *)v19;
      v20[1] = (_OWORD **)&v23;
      Command_InternalSendCommand(a1, (__int64)v19, v9, v10);
LABEL_30:
      v19 = (__int128 *)v23;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v8, 7, 43, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(a1 + 8),
      0,
      0,
      0x8000,
      (__int64)"After command abort completion, software and hardware dequeue pointers do not match",
      *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
      (__int64)a2);
    Controller_ReportFatalErrorEx(*(_QWORD *)(a1 + 8), 2u, 4115, 0LL, 0LL, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 36) = 2;
  }
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v5 )
    result = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  if ( v4 )
  {
    *((_BYTE *)v4 + 60) = 25;
    Etw_CommandCompleteError(v22, a1, v4, 2LL);
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD))v4[5])(v4, 2LL, 0LL);
  }
  return result;
}
