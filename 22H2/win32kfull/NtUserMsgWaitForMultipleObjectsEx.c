/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C011D490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxGetInputEvent @ 0x1C011DA20 (xxxGetInputEvent.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0139D9C (xxxMsgWaitForMultipleObjectsEx.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01B33C8 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01B3604 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01B3660 (_SetWaitForQueueAttach.c)
 *     ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01F48A4 (-xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(
        unsigned int a1,
        volatile void *a2,
        int a3,
        int a4,
        unsigned int a5)
{
  unsigned __int16 v5; // bx
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // ax
  PERESOURCE *v15; // rax
  __int64 v16; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  __int64 v19; // r8
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  char *v23; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rdx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v27; // r8d
  __int64 v28; // rbx
  char *v29; // rax
  char *v30; // r14
  size_t v31; // rbx
  char *v32; // rdx
  unsigned int v33; // ecx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r10
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 *v40; // rax
  unsigned __int64 v41; // rbx
  __int64 *v42; // rax
  int v44; // [rsp+30h] [rbp-918h]
  __int64 v45; // [rsp+38h] [rbp-910h]
  char *v46; // [rsp+48h] [rbp-900h]
  __int64 v47; // [rsp+50h] [rbp-8F8h] BYREF
  char *v48; // [rsp+58h] [rbp-8F0h]
  void (*v49)(void *); // [rsp+60h] [rbp-8E8h]
  __int64 InputEvent; // [rsp+68h] [rbp-8E0h]
  __int64 ProcessPeb; // [rsp+70h] [rbp-8D8h]
  char v52; // [rsp+80h] [rbp-8C8h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-8A8h]
  __int64 v54; // [rsp+A8h] [rbp-8A0h]
  __int64 v55; // [rsp+B0h] [rbp-898h]
  _BYTE v56[1104]; // [rsp+4D0h] [rbp-478h] BYREF

  v5 = a4;
  v7 = a1;
  v8 = -1;
  v44 = -1;
  EnterCrit(0LL, 0LL);
  v11 = 0LL;
  v12 = a5;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87);
    goto LABEL_61;
  }
  v13 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( !v13
    || (a5 & 1) != 0 && (_DWORD)v7
    || ((a5 & 4) == 0 ? (v14 = 0) : (v14 = *(_WORD *)(v13 + 8)),
        ((unsigned __int16)(*(_WORD *)(v13 + 4) | v14) & v5) == 0) )
  {
    InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
    if ( !InputEvent )
      goto LABEL_61;
    if ( (a5 & 1) != 0 )
    {
      v45 = 0LL;
      CancelQueueEventCompletionPacket();
    }
    else
    {
      v15 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v13, v12, v9, v10);
      if ( !ExIsResourceAcquiredSharedLite(*v15) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      v16 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
      v45 = *(_QWORD *)(v16 + 1472);
      if ( !v45 )
      {
LABEL_58:
        v8 = v44;
        goto LABEL_61;
      }
    }
    CurrentProcess = PsGetCurrentProcess(v13, v12, v9);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    v20 = *(_OWORD **)(ProcessPeb + 32);
    if ( (_OWORD *)((char *)v20 + 1096) < v20 || (unsigned __int64)v20 + 1096 > MmUserProbeAddress )
      v20 = (_OWORD *)MmUserProbeAddress;
    v21 = v56;
    v22 = 8LL;
    do
    {
      *v21 = *v20;
      v21[1] = v20[1];
      v21[2] = v20[2];
      v21[3] = v20[3];
      v21[4] = v20[4];
      v21[5] = v20[5];
      v21[6] = v20[6];
      v21 += 8;
      *(v21 - 1) = v20[7];
      v20 += 8;
      --v22;
    }
    while ( v22 );
    *v21 = *v20;
    v21[1] = v20[1];
    v21[2] = v20[2];
    v21[3] = v20[3];
    *((_QWORD *)v21 + 8) = *((_QWORD *)v20 + 8);
    v23 = &v52;
    v24 = v56;
    v25 = 8LL;
    do
    {
      *(_OWORD *)v23 = *v24;
      *((_OWORD *)v23 + 1) = v24[1];
      *((_OWORD *)v23 + 2) = v24[2];
      *((_OWORD *)v23 + 3) = v24[3];
      *((_OWORD *)v23 + 4) = v24[4];
      *((_OWORD *)v23 + 5) = v24[5];
      *((_OWORD *)v23 + 6) = v24[6];
      v23 += 128;
      *((_OWORD *)v23 - 1) = v24[7];
      v24 += 8;
      --v25;
    }
    while ( v25 );
    *(_OWORD *)v23 = *v24;
    *((_OWORD *)v23 + 1) = v24[1];
    *((_OWORD *)v23 + 2) = v24[2];
    *((_OWORD *)v23 + 3) = v24[3];
    *((_QWORD *)v23 + 8) = *((_QWORD *)v24 + 8);
    if ( (_DWORD)v7 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v23, 0LL, v19);
      v27 = 4;
      if ( CurrentProcessWow64Process )
        v27 = 1;
      v28 = v7;
      ProbeForRead(a2, 8 * v7, v27);
    }
    else
    {
      v28 = v7;
    }
    v29 = (char *)Win32AllocPoolWithQuotaZInit(8LL * (unsigned int)(v7 + 1), 2037609301LL);
    v30 = v29;
    v46 = v29;
    if ( !v29 )
    {
      UserSetLastError(8);
      goto LABEL_61;
    }
    v31 = 8 * v28;
    memmove(v29, (const void *)a2, v31);
    v33 = 0;
    v34 = v55;
    v35 = v54;
    v36 = v53;
    while ( v33 < (unsigned int)v7 )
    {
      v32 = &v30[8 * v33];
      v37 = *(_DWORD *)v32;
      if ( *(_DWORD *)v32 >= 0xFFFFFFF4 )
      {
        switch ( v37 )
        {
          case -12:
            *(_QWORD *)v32 = v34;
            break;
          case -11:
            *(_QWORD *)v32 = v35;
            break;
          case -10:
            *(_QWORD *)v32 = v36;
            break;
        }
      }
      ++v33;
    }
    if ( (a5 & 8) != 0 )
      SetWaitForQueueAttach(1LL, v32, v34, v35);
    v38 = v45;
    if ( (a5 & 1) != 0 )
      v38 = InputEvent;
    *(_QWORD *)&v30[v31] = v38;
    v39 = 0LL;
    v40 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v40 )
      v39 = *v40;
    v47 = *(_QWORD *)(v39 + 16);
    *(_QWORD *)(v39 + 16) = &v47;
    v48 = v46;
    v49 = Win32FreePool;
    v44 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v46, a3, a4, a5);
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    if ( !*(_DWORD *)(gptiCurrent + 1216LL) )
    {
      v41 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      EtwTraceMessageCheckDelay(gptiCurrent);
      if ( (_DWORD)v41 )
        v8 = v41;
      *(_DWORD *)(gptiCurrent + 1216LL) = v8;
      if ( *(int *)(gptiCurrent + 488LL) < 0 )
        xxxHandleHealthyThread(gptiCurrent);
      *(_QWORD *)(gptiCurrent + 1272LL) &= ~0x200000000uLL;
      EtwTraceProcessWindowInfo(gptiCurrent);
    }
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), 0);
    *(_DWORD *)(gptiCurrent + 1272LL) &= ~0x400u;
    v42 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v42 )
      v11 = *v42;
    *(_QWORD *)(v11 + 16) = v47;
    ((void (__fastcall *)(char *))v49)(v48);
    if ( (a5 & 1) != 0 )
      ReassociateQueueEventCompletionPacket();
    goto LABEL_58;
  }
  v8 = v7;
LABEL_61:
  UserSessionSwitchLeaveCrit(v13, v12, v9, v10);
  return v8;
}
