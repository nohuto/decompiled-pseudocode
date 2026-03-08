/*
 * XREFs of ExSweepHandleTable @ 0x1407D8110
 * Callers:
 *     ObKillProcess @ 0x1406C0F5C (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x140707D3C (ObInitProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140749B5C (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1407C3370 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1407D8274 (ObCloseHandleTableEntry.c)
 */

char __fastcall ExSweepHandleTable(struct _KPROCESS *a1, __int64 a2, char a3)
{
  char v3; // r13
  struct _KTHREAD *CurrentThread; // rsi
  int v8; // ebp
  __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // r8
  int v12; // eax
  char result; // al
  int v14; // [rsp+20h] [rbp-88h]
  int v15; // [rsp+28h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KeStackAttachProcess(a1, &ApcState);
    v3 = 1;
  }
  v8 = 0;
  v9 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v10 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v9);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 1) != 0 )
          break;
        if ( v11 )
        {
          ExpBlockOnLockedHandleEntry(a2, v10, v11);
        }
        else
        {
LABEL_7:
          v9 += 4LL;
          v10 += 2;
          if ( (v9 & 0x3FF) == 0 )
          {
            v9 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v11 == _InterlockedCompareExchange64(v10, v11 - 1, v11) )
      {
        LOBYTE(v15) = 1;
        LOBYTE(v14) = a3;
        v12 = ObCloseHandleTableEntry(
                a2,
                v10,
                a1,
                v9,
                v14,
                v15,
                ApcState.ApcListHead[0].Flink,
                ApcState.ApcListHead[0].Blink,
                ApcState.ApcListHead[1].Flink,
                ApcState.ApcListHead[1].Blink,
                ApcState.Process,
                *(_QWORD *)&ApcState.InProgressFlags);
        --CurrentThread->KernelApcDisable;
        if ( v12 >= 0 )
          ++v8;
        goto LABEL_7;
      }
    }
  }
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v3 == 1 )
    return KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return result;
}
