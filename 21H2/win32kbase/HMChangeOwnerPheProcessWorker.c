/*
 * XREFs of HMChangeOwnerPheProcessWorker @ 0x1C009A8A8
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0033190 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMChangeOwnerProcess @ 0x1C009A860 (HMChangeOwnerProcess.c)
 *     HMChangeOwnerPheProcess @ 0x1C0113C50 (HMChangeOwnerPheProcess.c)
 *     HMChangeOwnerProcessWorker @ 0x1C0113C90 (HMChangeOwnerProcessWorker.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00334BC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     GreIncQuotaCount @ 0x1C009AA00 (GreIncQuotaCount.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C009AA28 (EtwTraceUserUpdateHandleOwner.c)
 */

__int64 __fastcall HMChangeOwnerPheProcessWorker(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  HANDLE ProcessId; // rax
  unsigned __int8 v20; // cl
  unsigned int EtwUserHandleType; // eax
  __int64 result; // rax

  v3 = gpKernelHandleTable;
  v6 = (unsigned int)((a1 - (__int64)qword_1C024FD58) >> 5);
  v7 = 3 * v6;
  v8 = *((_QWORD *)gpKernelHandleTable + 3 * v6 + 1);
  v9 = *((_QWORD *)gpKernelHandleTable + 3 * v6);
  --*(_DWORD *)(v8 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v9 + 80) & 8) == 0 && v8 != *(_QWORD *)(a2 + 424) )
  {
    if ( *(_QWORD *)(v9 + 88) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v11, v10, v12);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 424));
    }
    if ( *(_QWORD *)(v9 + 96) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v14, v13, v15);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 424));
    }
    if ( *(_QWORD *)(v9 + 128) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v17, v16, v18);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 424));
    }
  }
  *(_DWORD *)(v9 + 16) = 0;
  if ( (*((_BYTE *)&unk_1C020A46C + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a2 + 424);
  v3[v7 + 1] = *(_QWORD *)(a2 + 424);
  ProcessId = PsGetProcessId(**(PEPROCESS **)(a2 + 424));
  v20 = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = ProcessId;
  EtwUserHandleType = GetEtwUserHandleType(v20);
  EtwTraceUserUpdateHandleOwner(*(_QWORD *)v3[v7], EtwUserHandleType);
  result = v3[v7 + 1];
  ++*(_DWORD *)(result + 68);
  return result;
}
