/*
 * XREFs of EtwTraceQueueMessage @ 0x1C008DDB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     EtwTraceQueueInputMessage @ 0x1C008DE94 (EtwTraceQueueInputMessage.c)
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x1C00E5516 (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1C014C390 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0qqsp_EtwWriteTransfer @ 0x1C0151338 (McTemplateK0qqsp_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceQueueMessage(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 ThreadWin32Thread; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebp
  int v10; // r8d
  __int64 CurrentProcess; // r15
  char v12; // r12
  void *v13; // rbx
  void *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r15d
  char v18; // bp
  __int64 v19; // r14
  __int64 v20; // rbx
  int v21; // r9d
  int v22; // ecx
  int v23; // r8d

  LOBYTE(v1) = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v9 = -1;
    CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
    v12 = ThreadWin32Thread ? (unsigned __int8)PsGetThreadId(*(PETHREAD *)ThreadWin32Thread) : -1;
    v13 = &unk_1C0268818;
    v14 = CurrentProcess ? (void *)PsGetProcessImageFileName(CurrentProcess) : &unk_1C0268818;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000000LL) != 0 )
    {
      if ( v14 )
        v13 = v14;
      if ( ThreadWin32Thread )
      {
        v15 = *(_QWORD *)(ThreadWin32Thread + 424);
        if ( v15 )
          v9 = *(_DWORD *)(v15 + 56);
      }
      McTemplateK0qqsp_EtwWriteTransfer(
        (_DWORD)v14,
        *(_QWORD *)(a1 + 16),
        v10,
        v9,
        v12,
        (__int64)v13,
        *(_QWORD *)(a1 + 16));
    }
  }
  result = *(unsigned int *)(a1 + 100);
  if ( (result & 4) != 0 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return result;
    v16 = *(_DWORD *)(a1 + 24);
    v17 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v16 - 581) <= 2 )
    {
      v18 = *(_DWORD *)(a1 + 24);
      if ( v16 == 582 || v16 == 581 || v16 == 583 )
      {
        v19 = *(_QWORD *)(a1 + 40);
        v1 = *(_QWORD *)(a1 + 32);
        goto LABEL_28;
      }
    }
    else
    {
      v18 = 0;
    }
    LOBYTE(v19) = 0;
LABEL_28:
    v20 = *(_QWORD *)(a1 + 16);
    LOBYTE(v21) = GetCallbackCount();
    return McTemplateK0cppppqq_EtwWriteTransfer(
             v22,
             (unsigned int)&QueuePostMessage,
             v23,
             v21,
             a1,
             v20,
             v1,
             v19,
             v18,
             v17);
  }
  if ( (result & 8) != 0 )
    return EtwTraceQueueInputMessage(a1);
  return result;
}
