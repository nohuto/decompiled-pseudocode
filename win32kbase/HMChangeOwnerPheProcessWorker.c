/*
 * XREFs of HMChangeOwnerPheProcessWorker @ 0x1C00AEF58
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00782A0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMChangeOwnerProcess @ 0x1C00AEF30 (HMChangeOwnerProcess.c)
 *     HMChangeOwnerPheProcess @ 0x1C0153810 (HMChangeOwnerPheProcess.c)
 *     HMChangeOwnerProcessWorker @ 0x1C0153830 (HMChangeOwnerProcessWorker.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C0050090 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00785AC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C00AF0E8 (EtwTraceUserUpdateHandleOwner.c)
 */

__int64 __fastcall HMChangeOwnerPheProcessWorker(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  struct _W32PROCESS *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _W32PROCESS *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _W32PROCESS *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  HANDLE ProcessId; // rax
  unsigned __int8 v22; // cl
  unsigned int EtwUserHandleType; // eax
  __int64 result; // rax

  v2 = gpKernelHandleTable;
  v5 = (unsigned int)((a1 - (__int64)qword_1C02D0E08) >> 5);
  v6 = 3 * v5;
  v7 = *((_QWORD *)gpKernelHandleTable + 3 * v5 + 1);
  v8 = *((_QWORD *)gpKernelHandleTable + 3 * v5);
  --*(_DWORD *)(v7 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v8 + 80) & 8) == 0 && v7 != *(_QWORD *)(a2 + 424) )
  {
    if ( *(_QWORD *)(v8 + 88) )
    {
      GreAcquireHmgrSemaphore(a1);
      --*(_DWORD *)(v7 + 60);
      GreReleaseHmgrSemaphore(v9);
      v10 = *(struct _W32PROCESS **)(a2 + 424);
      GreAcquireHmgrSemaphore(v11);
      HmgpIncProcessHandleCountEx(v10);
      GreReleaseHmgrSemaphore(v12);
    }
    if ( *(_QWORD *)(v8 + 96) )
    {
      GreAcquireHmgrSemaphore(a1);
      --*(_DWORD *)(v7 + 60);
      GreReleaseHmgrSemaphore(v13);
      v14 = *(struct _W32PROCESS **)(a2 + 424);
      GreAcquireHmgrSemaphore(v15);
      HmgpIncProcessHandleCountEx(v14);
      GreReleaseHmgrSemaphore(v16);
    }
    if ( *(_QWORD *)(v8 + 128) )
    {
      GreAcquireHmgrSemaphore(a1);
      --*(_DWORD *)(v7 + 60);
      GreReleaseHmgrSemaphore(v17);
      v18 = *(struct _W32PROCESS **)(a2 + 424);
      GreAcquireHmgrSemaphore(v19);
      HmgpIncProcessHandleCountEx(v18);
      GreReleaseHmgrSemaphore(v20);
    }
  }
  *(_QWORD *)(v8 + 16) = 0LL;
  if ( (*((_BYTE *)&unk_1C028159C + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(a2 + 424);
  v2[v6 + 1] = *(_QWORD *)(a2 + 424);
  ProcessId = PsGetProcessId(**(PEPROCESS **)(a2 + 424));
  v22 = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = ProcessId;
  EtwUserHandleType = GetEtwUserHandleType(v22);
  EtwTraceUserUpdateHandleOwner(*(_QWORD *)v2[v6], EtwUserHandleType);
  result = v2[v6 + 1];
  ++*(_DWORD *)(result + 68);
  return result;
}
