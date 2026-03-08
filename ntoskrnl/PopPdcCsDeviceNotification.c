/*
 * XREFs of PopPdcCsDeviceNotification @ 0x140994E6C
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B72350 (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x140857840 (PopNetUpdateCsConsumptionFlags.c)
 *     PopNetCompliantNicUpdate @ 0x1409936D4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140993894 (PopNetNonCompliantDeviceUpdate.c)
 *     PopPdcUpdateDeviceCompliance @ 0x140995184 (PopPdcUpdateDeviceCompliance.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPdcCsDeviceNotification(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  char v6; // al
  __int64 Pool2; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax
  _QWORD *v10; // rdx
  void **v11; // rax
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdx
  int *v15; // rcx

  v1 = 0;
  if ( !PopPlatformAoAc )
    return v1;
  if ( *(_DWORD *)(a1 + 8) > 4u )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPdcDeviceListLock, 0LL);
  v4 = PopPdcDeviceList;
  v5 = 0LL;
  v6 = 0;
  if ( PopPdcDeviceList != (_UNKNOWN *)&PopPdcDeviceList )
  {
    while ( 1 )
    {
      v5 = v4;
      if ( *((_QWORD *)v4 + 2) == *(_QWORD *)a1 )
        break;
      v4 = *(_DWORD **)v4;
      if ( v4 == (_DWORD *)&PopPdcDeviceList )
        goto LABEL_8;
    }
    v6 = 1;
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 12) )
  {
    if ( v6 )
    {
      ++v5[7];
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 40LL, 1866683203LL);
      v8 = Pool2;
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)a1;
        *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a1 + 8);
        *(_BYTE *)(Pool2 + 32) = *(_BYTE *)(a1 + 13);
        *(_DWORD *)(Pool2 + 28) = 1;
        v9 = (__int64 *)off_140C09200;
        if ( *off_140C09200 == (_UNKNOWN *)&PopPdcDeviceList )
        {
          *(_QWORD *)v8 = &PopPdcDeviceList;
          *(_QWORD *)(v8 + 8) = v9;
          *v9 = v8;
          off_140C09200 = (_UNKNOWN **)v8;
          goto LABEL_20;
        }
        goto LABEL_28;
      }
      v1 = -1073741801;
    }
  }
  else if ( v6 )
  {
    if ( (int)--v5[7] <= 0 )
    {
      v10 = *(_QWORD **)v4;
      if ( *(_DWORD **)(*(_QWORD *)v4 + 8LL) == v4 )
      {
        v11 = (void **)*((_QWORD *)v4 + 1);
        if ( *v11 == v4 )
        {
          *v11 = v10;
          v10[1] = v11;
          ExFreePoolWithTag(v5, 0x6F435343u);
LABEL_20:
          PopPdcUpdateDeviceCompliance();
          PopAcquirePolicyLock(v12);
          v14 = *(int *)(a1 + 8);
          if ( (((_DWORD)v14 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v14 == 3 )
          {
            v15 = PopCsDeviceCompliance;
            if ( PopCsDeviceCompliance[v14] == -1 )
              PopNetNonCompliantDeviceUpdate(*(_BYTE *)(a1 + 12), v14);
          }
          else
          {
            if ( *(_BYTE *)(a1 + 13) )
              PopNetCompliantNicUpdate(*(_BYTE *)(a1 + 12));
            PopNetUpdateCsConsumptionFlags();
          }
          PopReleasePolicyLock(v15, v14, v13);
          goto LABEL_30;
        }
      }
LABEL_28:
      __fastfail(3u);
    }
  }
  else
  {
    v1 = -1073741811;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPdcDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPdcDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPdcDeviceListLock);
  KeLeaveCriticalRegion();
  return v1;
}
