/*
 * XREFs of ACPIAssociateWakeInterrupt @ 0x1C004431C
 * Callers:
 *     ACPIWakeEmulationEnable @ 0x1C00452A4 (ACPIWakeEmulationEnable.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C0044668 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIDereferenceWakeInterrupt @ 0x1C004485C (ACPIDereferenceWakeInterrupt.c)
 *     ACPIFindWakeInterruptForVector @ 0x1C00449AC (ACPIFindWakeInterruptForVector.c)
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1C0046320 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 *     ACPIConnectWakeInterrupt @ 0x1C0098AB4 (ACPIConnectWakeInterrupt.c)
 */

__int64 __fastcall ACPIAssociateWakeInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r13
  KIRQL v4; // al
  KIRQL v5; // si
  __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rbx
  int v10; // edi
  _QWORD *v11; // rcx
  int v12; // eax
  KIRQL v13; // bp
  PVOID v14; // rax
  int v15; // eax
  _QWORD *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v20 = 0LL;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v5 = v4;
  if ( *(_DWORD *)(v1 + 108) )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v4);
    return 3221225760LL;
  }
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 24);
  if ( (int)ACPIFindWakeInterruptForVector(v8, v7, &v20) < 0 )
  {
    v14 = ExAllocateFromNPagedLookasideList(&WakeInterruptLookAsideList);
    v9 = (__int64)v14;
    if ( !v14 )
    {
      v10 = -1073741670;
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      v9 = v20;
      goto LABEL_24;
    }
    memset(v14, 0, 0x60uLL);
    *(_QWORD *)(v9 + 8) = v9;
    *(_QWORD *)v9 = v9;
    *(_QWORD *)(v9 + 24) = v9 + 16;
    *(_QWORD *)(v9 + 16) = v9 + 16;
    *(_DWORD *)(v9 + 32) = v8;
    v15 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(v9 + 56) = 0;
    *(_DWORD *)(v9 + 36) = v15;
    *(_QWORD *)(v9 + 40) = v7;
    KeInitializeEvent((PRKEVENT)(v9 + 64), SynchronizationEvent, 0);
    *(_DWORD *)(v9 + 88) = 2;
    v16 = *(_QWORD **)(v9 + 24);
    if ( *v16 == v9 + 16 )
    {
      *(_QWORD *)a1 = v9 + 16;
      *(_QWORD *)(a1 + 8) = v16;
      *v16 = a1;
      *(_QWORD *)(v9 + 24) = a1;
      v17 = (__int64 *)qword_1C006E9F8;
      if ( *(__int64 **)qword_1C006E9F8 == &AcpiPowerWaitWakeInterruptList )
      {
        *(_QWORD *)v9 = &AcpiPowerWaitWakeInterruptList;
        *(_QWORD *)(v9 + 8) = v17;
        *v17 = v9;
        qword_1C006E9F8 = v9;
        v20 = v9;
        goto LABEL_20;
      }
    }
LABEL_27:
    __fastfail(3u);
  }
  v9 = v20;
  if ( *(_DWORD *)(v20 + 36) == *(_DWORD *)(a1 + 28) )
  {
    *(_DWORD *)(v20 + 88) += 2;
    v11 = *(_QWORD **)(v9 + 24);
    if ( *v11 == v9 + 16 )
    {
      *(_QWORD *)a1 = v9 + 16;
      *(_QWORD *)(a1 + 8) = v11;
      *v11 = a1;
      *(_QWORD *)(v9 + 24) = a1;
      if ( *(int *)(v9 + 56) >= 2 )
      {
        if ( !(unsigned __int8)OSPowerTryAcquireWakeInterruptChangeStateLock(v9) )
        {
          KeReleaseSpinLock(&AcpiPowerLock, v5);
          v10 = -1073741823;
          goto LABEL_24;
        }
      }
      else
      {
        KeReleaseSpinLock(&AcpiPowerLock, v5);
        KeWaitForSingleObject((PVOID)(v9 + 64), Executive, 0, 0, 0LL);
        v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      }
      v12 = *(_DWORD *)(v9 + 56);
      v13 = v5;
      if ( v12 == 3 )
      {
        KeSetEvent((PRKEVENT)(v9 + 64), 0, 0);
        KeReleaseSpinLock(&AcpiPowerLock, v5);
        v10 = 0;
        goto LABEL_24;
      }
      *(_DWORD *)(v9 + 56) = 0;
      if ( v12 == 4 )
      {
        LODWORD(v18) = 1;
        v19 = *(_QWORD *)(v9 + 48);
        IoReportInterruptActive(&v18);
        v10 = 0;
        goto LABEL_21;
      }
LABEL_20:
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      v10 = ACPIConnectWakeInterrupt(v3, v9);
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      if ( v10 < 0 )
      {
        *(_DWORD *)(v9 + 56) = 5;
        goto LABEL_23;
      }
LABEL_21:
      *(_DWORD *)(v9 + 56) = 3;
LABEL_23:
      KeSetEvent((PRKEVENT)(v9 + 64), 0, 0);
      KeReleaseSpinLock(&AcpiPowerLock, v13);
LABEL_24:
      if ( v9 )
      {
        ACPIDereferenceWakeInterrupt(&v20);
        ACPIDelayedFreeWakeInterrupt(v8, v7);
      }
      return (unsigned int)v10;
    }
    goto LABEL_27;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return (unsigned int)-1073741637;
}
