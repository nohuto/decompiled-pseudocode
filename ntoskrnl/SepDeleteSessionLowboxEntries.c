/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x140354B60
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1407DAE44 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x1407DBBB8 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlDeleteHashTable @ 0x1403BBB80 (RtlDeleteHashTable.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *i; // rsi
  struct _KTHREAD *v2; // rax
  volatile signed __int64 *v3; // rdi
  volatile signed __int64 *v4; // r14
  int v5; // edx
  int v6; // r10d
  unsigned int v7; // ebp
  _QWORD *v8; // r9
  _QWORD *v9; // rdx
  __int64 j; // r8
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  volatile signed __int64 v13; // rcx
  volatile signed __int64 **v14; // rax

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    for ( i = *(volatile signed __int64 **)g_SessionLowboxMap; i != (volatile signed __int64 *)g_SessionLowboxMap; i = v4 )
    {
      v2 = KeGetCurrentThread();
      v3 = i + 3;
      v4 = (volatile signed __int64 *)*i;
      --v2->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 3), 0LL);
      v5 = *((_DWORD *)i + 8);
      v6 = (i[5] & 4) != 0 ? 0x20 : 0;
      v7 = v5 + v6 - 1;
      v8 = (_QWORD *)(*((_QWORD *)i + 5) - ((i[5] & 4) != 0 ? 4 : 0));
      if ( !v5 )
        goto LABEL_15;
      v9 = (_QWORD *)(*((_QWORD *)i + 5) - ((i[5] & 4) != 0 ? 4 : 0));
      for ( j = ~*v8 | ((1LL << v6) - 1); j == -1; j = ~*v9 )
      {
        if ( ++v9 > &v8[(unsigned __int64)v7 >> 6] )
          goto LABEL_15;
      }
      _BitScanForward64(&v11, ~j);
      v12 = v11 + ((unsigned int)(v9 - v8) << 6);
      if ( v12 > v7 || v12 == -1 || v12 - v6 == -1 )
      {
LABEL_15:
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v13 = *i;
        if ( *(volatile signed __int64 **)(*i + 8) != i
          || (v14 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v14 != i) )
        {
          __fastfail(3u);
        }
        *v14 = (volatile signed __int64 *)v13;
        *(_QWORD *)(v13 + 8) = v14;
        if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        KeAbPostRelease((ULONG_PTR)(i + 3));
        KeLeaveCriticalRegion();
        ExFreePoolWithTag((PVOID)i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 3);
        KeAbPostRelease((ULONG_PTR)(i + 3));
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
}
