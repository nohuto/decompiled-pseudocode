/*
 * XREFs of PsInitializeVsmEnclave @ 0x1409B45D4
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140A3B328 (MiInitializeVsmEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     VslInitializeEnclave @ 0x14093F734 (VslInitializeEnclave.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsInitializeVsmEnclave(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v6; // r15
  _QWORD *Pool2; // r14
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rbp
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = (volatile signed __int64 *)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  Pool2 = 0LL;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v12 = *(_DWORD *)(a1 + 44);
  if ( v12 )
  {
    if ( v12 == 1 )
      v13 = -1073740528;
    else
      v13 = -1073740526;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 76) )
    {
      LODWORD(v14) = 0;
    }
    else
    {
      if ( a3 != 8 || *(_DWORD *)a2 != 8 )
      {
        v13 = -1073741820;
        goto LABEL_21;
      }
      v14 = *(unsigned int *)(a2 + 4);
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, 40 * v14, 1950708560LL);
      if ( !Pool2 )
      {
        v13 = -1073741670;
        goto LABEL_21;
      }
    }
    v13 = VslInitializeEnclave(*(_QWORD *)(a1 + 24), a1 + 80, (struct _MDL *)a2, a3, a4, a5, (_DWORD *)(a1 + 40));
    if ( v13 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 76) )
      {
        *(_DWORD *)(a1 + 72) = v14;
        *Pool2 = 0LL;
        if ( (unsigned int)v14 <= 1 )
        {
          v15 = (unsigned int)(v14 - 1);
        }
        else
        {
          v15 = (unsigned int)(v14 - 1);
          v16 = Pool2 + 5;
          v17 = (unsigned int)v15;
          v18 = Pool2;
          do
          {
            *v16 = v18;
            v18 += 5;
            v16 += 5;
            --v17;
          }
          while ( v17 );
        }
        *(_QWORD *)(a1 + 120) = Pool2;
        v19 = &Pool2[5 * v15];
        Pool2 = 0LL;
        *(_QWORD *)(a1 + 128) = v19;
      }
      *(_DWORD *)(a1 + 44) = 1;
      *(_QWORD *)(a1 + 64) = a1 + 56;
      v13 = 0;
      *(_QWORD *)(a1 + 56) = a1 + 56;
    }
  }
LABEL_21:
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v13;
}
