/*
 * XREFs of ForwardTouchMessage @ 0x1C01B139C
 * Callers:
 *     NtUserPostMessage @ 0x1C0047F50 (NtUserPostMessage.c)
 *     NtUserfnTOUCH @ 0x1C01E4230 (NtUserfnTOUCH.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01B021C (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01B1740 (_FreeTouchInputInfo.c)
 *     _PostMessageCheckIL @ 0x1C01B81EC (_PostMessageCheckIL.c)
 */

__int64 __fastcall ForwardTouchMessage(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        volatile void *Address,
        int a6,
        __int64 a7,
        int a8,
        _QWORD *a9)
{
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdx
  struct HTOUCHINPUT__ *ValidTouchInputInfo; // rax
  struct HTOUCHINPUT__ *v16; // rsi
  unsigned int v17; // edi
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx

  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL || !Address || (unsigned __int64)(a4 - 1) > 0xFFFFFFFE )
  {
    UserSetLastError(87);
    return 0LL;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(4294967294LL);
  ProbeForRead(Address, 48LL * (unsigned int)a4, CurrentProcessWow64Process != 0 ? 1 : 4);
  ValidTouchInputInfo = CreateValidTouchInputInfo(a1, v14, a4, (struct tagTOUCHINPUT *const)Address);
  v16 = ValidTouchInputInfo;
  if ( !ValidTouchInputInfo )
    return 0LL;
  if ( a6 )
  {
    v17 = PostMessageCheckIL(a2, a3);
    v18 = a8;
  }
  else
  {
    v18 = a8;
    *a9 = (*((__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, struct HTOUCHINPUT__ *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
           + (((_BYTE)a8 + 6) & 0x1F)))(
            a2,
            a3,
            a4,
            ValidTouchInputInfo,
            a7);
    v17 = 1;
  }
  if ( !v17 || (v19 = v18 - 683) == 0 || (v20 = v19 - 1) == 0 || v20 == 8 )
    FreeTouchInputInfo(v16, 1LL);
  return v17;
}
