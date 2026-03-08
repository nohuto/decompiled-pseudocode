/*
 * XREFs of PerformMutexDriverCallbacks @ 0x1C004C9F4
 * Callers:
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     PerformMutexResourceBindings @ 0x1C004CBB8 (PerformMutexResourceBindings.c)
 *     Mutex @ 0x1C0050C50 (Mutex.c)
 *     ParseAcquire @ 0x1C005A0F0 (ParseAcquire.c)
 *     ParseRelease @ 0x1C005BF70 (ParseRelease.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ConvertNtStatusToAMLIStatus @ 0x1C004AE84 (ConvertNtStatusToAMLIStatus.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rdi
  KIRQL i; // al
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]
  __int128 v18; // [rsp+50h] [rbp-10h]

  v5 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( !gDeviceLockMutexSupported || !ghMutexObject )
  {
    v10 = 0;
    return ConvertNtStatusToAMLIStatus(v10);
  }
  if ( a4 )
  {
    v5 = a4;
    for ( i = ExAcquireSpinLockShared(&ACPINamespaceLock); *(_WORD *)(v5 + 66) == 8; v5 = *(_QWORD *)(v5 + 16) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    ExReleaseSpinLockShared(&ACPINamespaceLock, i);
    if ( *(_WORD *)(v5 + 66) != 6 )
    {
      v10 = -1072431089;
      goto LABEL_23;
    }
  }
  *(_QWORD *)&v16 = a1;
  *((_QWORD *)&v16 + 1) = a2 + 80;
  v17 = 0LL;
  v18 = 0LL;
  if ( a1 )
  {
    v11 = a1 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            v10 = -1073741637;
LABEL_22:
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a3, -1072431101);
            PrintDebugMessage(145, v10, 0, 0, 0LL);
            goto LABEL_23;
          }
          *(_QWORD *)&v17 = v5 + 120;
          *((_QWORD *)&v17 + 1) = *(_QWORD *)(a2 + 72);
          LODWORD(v18) = *(_DWORD *)(a2 + 64);
        }
        else
        {
          *(_QWORD *)&v17 = a3;
        }
      }
      else
      {
        *((_QWORD *)&v17 + 1) = a3;
        *(_QWORD *)&v17 = v5 + 120;
        *(_QWORD *)&v18 = *(_QWORD *)(a2 + 72);
        DWORD2(v18) = *(_DWORD *)(a2 + 64);
        WORD6(v18) = a5;
      }
    }
  }
  v14 = ((__int64 (__fastcall *)(__int128 *))ghMutexObject)(&v16);
  v10 = v14;
  if ( v14 < 0 && v14 != -1073741643 && v14 != -1073741536 )
    goto LABEL_22;
LABEL_23:
  if ( v5 )
    DereferenceObjectEx(v5, 0LL);
  return ConvertNtStatusToAMLIStatus(v10);
}
