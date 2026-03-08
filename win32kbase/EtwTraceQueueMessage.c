/*
 * XREFs of EtwTraceQueueMessage @ 0x1C00A3AD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1C00EDBA8 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x1C00EE0AA (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1C00EE320 (McTemplateK0cppqp_EtwWriteTransfer.c)
 *     McTemplateK0cpttttttpppqq_EtwWriteTransfer @ 0x1C0164F7C (McTemplateK0cpttttttpppqq_EtwWriteTransfer.c)
 *     McTemplateK0qqsp_EtwWriteTransfer @ 0x1C0167244 (McTemplateK0qqsp_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceQueueMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v6; // r15d
  int v7; // ebp
  __int64 ThreadWin32Thread; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebp
  int v14; // r8d
  __int64 CurrentProcess; // r15
  char ThreadId; // r12
  void *v17; // rbx
  void *ProcessImageFileName; // rcx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r15d
  char v22; // bp
  __int64 v23; // r14
  __int64 v24; // rbx
  int v25; // r9d
  int v26; // ecx
  int v27; // r8d
  int v28; // ecx
  int v29; // r12d
  char v30; // bp
  __int64 v31; // r14
  __int64 v32; // rbx
  int v33; // r9d
  __int64 v34; // rbx
  __int64 v35; // rdi
  int v36; // r9d
  int v37; // ecx
  int v38; // r8d
  int v39; // [rsp+28h] [rbp-80h]
  int v40; // [rsp+30h] [rbp-78h]

  LOBYTE(v4) = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v13 = -1;
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    if ( ThreadWin32Thread )
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
    else
      ThreadId = -1;
    v17 = &unk_1C02A2108;
    if ( CurrentProcess )
      ProcessImageFileName = (void *)PsGetProcessImageFileName(CurrentProcess);
    else
      ProcessImageFileName = &unk_1C02A2108;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000000LL) != 0 )
    {
      if ( ProcessImageFileName )
        v17 = ProcessImageFileName;
      if ( ThreadWin32Thread )
      {
        v19 = *(_QWORD *)(ThreadWin32Thread + 424);
        if ( v19 )
          v13 = *(_DWORD *)(v19 + 56);
      }
      McTemplateK0qqsp_EtwWriteTransfer(
        (_DWORD)ProcessImageFileName,
        *(_QWORD *)(a1 + 16),
        v14,
        v13,
        ThreadId,
        (__int64)v17,
        *(_QWORD *)(a1 + 16));
    }
  }
  v6 = *(_DWORD *)(a1 + 100);
  if ( (v6 & 4) != 0 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return;
    v20 = *(_DWORD *)(a1 + 24);
    v21 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v20 - 581) <= 2 )
    {
      v22 = *(_DWORD *)(a1 + 24);
      if ( v20 == 582 || v20 == 581 || v20 == 583 )
      {
        v23 = *(_QWORD *)(a1 + 40);
        v4 = *(_QWORD *)(a1 + 32);
        goto LABEL_34;
      }
    }
    else
    {
      v22 = 0;
    }
    LOBYTE(v23) = 0;
LABEL_34:
    v24 = *(_QWORD *)(a1 + 16);
    LOBYTE(v25) = GetCallbackCount();
    McTemplateK0cppppqq_EtwWriteTransfer(v26, (unsigned int)&QueuePostMessage, v27, v25, a1, v24, v4, v23, v22, v21);
    return;
  }
  if ( (v6 & 8) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 96);
    if ( v7 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      {
        v34 = *(_QWORD *)(a1 + 16);
        v35 = *(_QWORD *)(a1 + 104);
        LOBYTE(v36) = GetCallbackCount();
        McTemplateK0cppqp_EtwWriteTransfer(v37, (unsigned int)&QueueEventMessage, v38, v36, a1, v35, v7, v34);
      }
      return;
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) == 0 )
      return;
    v28 = *(_DWORD *)(a1 + 24);
    v29 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v28 - 581) <= 2 )
    {
      v30 = *(_DWORD *)(a1 + 24);
      if ( v28 == 582 || v28 == 581 || v28 == 583 )
      {
        v31 = *(_QWORD *)(a1 + 40);
        v4 = *(_QWORD *)(a1 + 32);
        goto LABEL_42;
      }
    }
    else
    {
      v30 = 0;
    }
    LOBYTE(v31) = 0;
LABEL_42:
    v32 = *(_QWORD *)(a1 + 16);
    LOBYTE(v33) = GetCallbackCount();
    McTemplateK0cpttttttpppqq_EtwWriteTransfer(
      -__CFSHR__(v6, 7),
      (unsigned int)&QueueInputMessage,
      -__CFSHR__(v6, 8),
      v33,
      a1,
      v39,
      v40,
      -__CFSHR__(v6, 6),
      -__CFSHR__(v6, 7),
      -__CFSHR__(v6, 5),
      -__CFSHR__(v6, 8),
      v32,
      v4,
      v31,
      v30,
      v29);
  }
}
