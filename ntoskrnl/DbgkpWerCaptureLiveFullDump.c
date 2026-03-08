/*
 * XREFs of DbgkpWerCaptureLiveFullDump @ 0x1409386E8
 * Callers:
 *     DbgkpWerProcessPolicyResult @ 0x140938DC0 (DbgkpWerProcessPolicyResult.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     DbgkpWerInitializeDeferredLiveDump @ 0x140938BA4 (DbgkpWerInitializeDeferredLiveDump.c)
 *     DbgkpWerInvokeCallbacks @ 0x140938CFC (DbgkpWerInvokeCallbacks.c)
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkpWerCaptureLiveFullDump(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // eax
  __int64 Pool2; // rax
  __int64 v6; // r14
  int v7; // ebx
  int *v8; // rsi
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  const CHAR *v12; // r8
  struct _WORK_QUEUE_ITEM *v13; // rcx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 104);
  v16 = 0LL;
  *a2 = 1;
  *(_DWORD *)(a1 + 80) = 0x10000000;
  DbgPrintEx(5u, 3u, "DBGK: Creating full dump.  ComponentName %ws, Defer = %d\n", a1, (v2 >> 1) & 1);
  Pool2 = ExAllocatePool2(256LL, 56LL, 1466393156LL);
  v6 = Pool2;
  if ( !Pool2 )
  {
    DbgPrintEx(5u, 0, "DBGK: Could not allocate an Io Control.\n");
    return (unsigned int)-1073741801;
  }
  *(_QWORD *)(a1 + 120) = Pool2;
  v8 = (int *)(Pool2 + 24);
  *(_DWORD *)Pool2 = 2;
  *(_DWORD *)(Pool2 + 4) = 56;
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 32LL);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 1) != 0 )
    *v8 |= 4u;
  v9 = *v8;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 0x10) != 0 )
  {
    v9 |= 0x20u;
    *v8 = v9;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL) & 4) != 0 )
    *(_DWORD *)(Pool2 + 28) |= 1u;
  *v8 = v9 | 0x10;
  v10 = *(_QWORD *)(a1 + 96);
  v15 = 0LL;
  v11 = WerLiveKernelOpenDumpFile(v10, &v15);
  v7 = v11;
  if ( v11 < 0 )
  {
    v12 = "DBGK: WerLiveKernelOpenDumpFile failed. Status = 0x%X\n";
    goto LABEL_11;
  }
  *(_QWORD *)(v6 + 8) = v15;
  if ( (*(_DWORD *)(a1 + 104) & 2) == 0 || (*v8 |= 8u, v7 = DbgkpWerInitializeDeferredLiveDump(a1), v7 >= 0) )
  {
    v7 = DbgkpWerInvokeCallbacks(a1);
    if ( v7 >= 0 )
    {
      v7 = IoCaptureLiveDump(
             *(_DWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             *(_QWORD *)(a1 + 48),
             *(_QWORD *)(a1 + 56),
             *(_QWORD *)(a1 + 64),
             v6,
             (__int64)&v16);
      if ( (*(_DWORD *)(a1 + 104) & 2) != 0 )
      {
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741802 )
        {
          v13 = *(struct _WORK_QUEUE_ITEM **)(a1 + 112);
          *(_QWORD *)(a1 + 128) = v16;
          ExQueueWorkItem(v13, DelayedWorkQueue);
          v7 = 0;
          *a2 = 0;
          return (unsigned int)v7;
        }
      }
      else if ( v7 >= 0 )
      {
        v11 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
        v7 = v11;
        if ( v11 >= 0 )
        {
          *(_DWORD *)(a1 + 104) |= 1u;
          return (unsigned int)v7;
        }
        v12 = "DBGK: DbgkpWerCaptureLiveFullDump: WerLiveKernelSubmitReport failed with status 0x%X\n";
LABEL_11:
        DbgPrintEx(5u, 0, v12, (unsigned int)v11);
        return (unsigned int)v7;
      }
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerCaptureLiveFullDump: IoCaptureLiveDump failed with status 0x%X\n",
        (unsigned int)v7);
    }
  }
  return (unsigned int)v7;
}
