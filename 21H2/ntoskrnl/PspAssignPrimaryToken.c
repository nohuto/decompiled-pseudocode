/*
 * XREFs of PspAssignPrimaryToken @ 0x140847028
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     PspLockUnlockProcessExclusive @ 0x14024BA3C (PspLockUnlockProcessExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     SeIsTokenAssignableToProcess @ 0x140695160 (SeIsTokenAssignableToProcess.c)
 *     ObClearProcessDeviceMap @ 0x14069C104 (ObClearProcessDeviceMap.c)
 *     SeCheckPrivilegedObject @ 0x1406E856C (SeCheckPrivilegedObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeExchangePrimaryToken @ 0x140847260 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, ULONG_PTR a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  int IsTokenAssignableToProcess; // ebx
  PVOID v10; // rdi
  _QWORD *v11; // rax
  signed __int64 v12; // rcx
  char v13[8]; // [rsp+40h] [rbp-30h] BYREF
  PVOID v14; // [rsp+48h] [rbp-28h] BYREF
  PVOID v15; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-18h] BYREF

  v13[0] = 0;
  v14 = 0LL;
  v15 = 0LL;
  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v15, 0LL);
  if ( result >= 0 )
  {
    v8 = v15;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v15, v13);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v13[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, a3, 512, a2) )
      {
        IsTokenAssignableToProcess = ObpReferenceObjectByHandleWithTag(
                                       a3,
                                       512,
                                       (__int64)PsProcessType,
                                       a2,
                                       0x65537350u,
                                       &v14,
                                       0LL,
                                       0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v10 = v14;
          Object[0] = 0LL;
          if ( _bittest((const signed __int32 *)v14 + 280, 0xFu) )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            --*(_WORD *)(a1 + 484);
            ExAcquirePushLockSharedEx((ULONG_PTR)v10 + 1080, 0LL);
            if ( _bittest((const signed __int32 *)v10 + 280, 0xFu) )
            {
              IsTokenAssignableToProcess = -1073741637;
            }
            else
            {
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v10, v8, Object);
              if ( IsTokenAssignableToProcess >= 0 )
              {
                v11 = v14;
                v12 = _InterlockedIncrement64(&PsNextSecurityDomain);
                *((_QWORD *)v14 + 316) = v12;
                v11[317] = v12;
              }
            }
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 135, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v10 + 135);
            KeAbPostRelease((ULONG_PTR)v10 + 1080);
            KeLeaveCriticalRegionThread(a1);
            v10 = v14;
            if ( IsTokenAssignableToProcess >= 0 )
            {
              PspLockUnlockProcessExclusive((__int64)v14, a1);
              ObfDereferenceObject(Object[0]);
              ObClearProcessDeviceMap((__int64)v10);
            }
            v8 = v15;
          }
          ObfDereferenceObjectWithTag(v10, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    ObfDereferenceObject(v8);
    return IsTokenAssignableToProcess;
  }
  return result;
}
