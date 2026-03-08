/*
 * XREFs of PspAssignPrimaryToken @ 0x14083F864
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PspLockUnlockProcessExclusive @ 0x1402F6A6C (PspLockUnlockProcessExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObClearProcessDeviceMap @ 0x140704918 (ObClearProcessDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x140776104 (SeIsTokenAssignableToProcess.c)
 *     SeCheckPrivilegedObject @ 0x1407913D4 (SeCheckPrivilegedObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeExchangePrimaryToken @ 0x14083FA34 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, ULONG_PTR a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  int IsTokenAssignableToProcess; // ebx
  PVOID v10; // rdi
  signed __int64 v11; // rax
  char v12[8]; // [rsp+40h] [rbp-30h] BYREF
  PVOID v13; // [rsp+48h] [rbp-28h] BYREF
  PVOID v14; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-18h] BYREF

  v12[0] = 0;
  v13 = 0LL;
  v14 = 0LL;
  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v14, 0LL);
  if ( result >= 0 )
  {
    v8 = v14;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v14, v12);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v12[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, a3, 512, a2) )
      {
        IsTokenAssignableToProcess = ObpReferenceObjectByHandleWithTag(
                                       a3,
                                       512,
                                       (__int64)PsProcessType,
                                       a2,
                                       0x65537350u,
                                       &v13,
                                       0LL,
                                       0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v10 = v13;
          Object[0] = 0LL;
          if ( _bittest((const signed __int32 *)v13 + 280, 0xFu) )
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
                v10 = v13;
                v11 = _InterlockedIncrement64(&PsNextSecurityDomain);
                *((_QWORD *)v13 + 316) = v11;
                *((_QWORD *)v10 + 317) = v11;
              }
            }
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 135, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)v10 + 135);
            KeAbPostRelease((ULONG_PTR)v10 + 1080);
            KeLeaveCriticalRegionThread(a1);
            v10 = v13;
            if ( IsTokenAssignableToProcess >= 0 )
            {
              PspLockUnlockProcessExclusive((__int64)v13, a1);
              ObfDereferenceObject(Object[0]);
              ObClearProcessDeviceMap((__int64)v10);
            }
            v8 = v14;
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
