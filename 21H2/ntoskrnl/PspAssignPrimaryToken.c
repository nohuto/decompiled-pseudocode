/*
 * XREFs of PspAssignPrimaryToken @ 0x1407BC1D0
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PspLockUnlockProcessExclusive @ 0x140241524 (PspLockUnlockProcessExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PspLockProcessSecurityShared @ 0x140399FA0 (PspLockProcessSecurityShared.c)
 *     PspUnlockProcessSecurityShared @ 0x140582004 (PspUnlockProcessSecurityShared.c)
 *     ObDereferenceDeviceMap @ 0x14067BE28 (ObDereferenceDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C4F9C (SeIsTokenAssignableToProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     SeCheckPrivilegedObject @ 0x14078E020 (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x1407BC3D4 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v8; // rsi
  NTSTATUS IsTokenAssignableToProcess; // ebx
  _QWORD *v10; // rdi
  signed __int64 v11; // rax
  char v12[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  PADAPTER_OBJECT v14; // [rsp+50h] [rbp-10h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-8h] BYREF

  Object = 0LL;
  v14 = 0LL;
  v12[0] = 0;
  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, (PVOID *)&v14, 0LL);
  if ( result >= 0 )
  {
    v8 = v14;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v14, v12);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v12[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, (int)a3, 512, a2) )
      {
        IsTokenAssignableToProcess = ObReferenceObjectByHandleWithTag(
                                       a3,
                                       0x200u,
                                       (POBJECT_TYPE)PsProcessType,
                                       a2,
                                       0x65537350u,
                                       &Object,
                                       0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v10 = Object;
          DmaAdapter = 0LL;
          if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            PspLockProcessSecurityShared((__int64)Object, a1);
            if ( (v10[140] & 0x8000) != 0 )
            {
              IsTokenAssignableToProcess = -1073741637;
            }
            else
            {
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v10, v8, &DmaAdapter);
              if ( IsTokenAssignableToProcess >= 0 )
              {
                v10 = Object;
                v11 = _InterlockedIncrement64(&PsNextSecurityDomain);
                v8 = v14;
                *((_QWORD *)Object + 316) = v11;
                v10[317] = v11;
              }
            }
            PspUnlockProcessSecurityShared((__int64)v10, a1);
          }
          if ( IsTokenAssignableToProcess >= 0 )
          {
            PspLockUnlockProcessExclusive((__int64)v10, a1);
            HalPutDmaAdapter(DmaAdapter);
            ObDereferenceDeviceMap((__int64)v10);
          }
          ObfDereferenceObjectWithTag(v10, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    HalPutDmaAdapter(v8);
    return IsTokenAssignableToProcess;
  }
  return result;
}
