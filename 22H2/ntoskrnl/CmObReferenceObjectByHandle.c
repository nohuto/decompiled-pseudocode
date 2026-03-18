/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140AF63D0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     NtSetValueKey @ 0x1406D2AB0 (NtSetValueKey.c)
 *     NtEnumerateKey @ 0x1406DBEC0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1406E2F20 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DE10 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E3E0 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EAF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     NtLockRegistryKey @ 0x140848FA0 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D150 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140A0D420 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D6F0 (NtCompressKey.c)
 *     NtRenameKey @ 0x140A0E060 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E560 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0E8C0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0EC80 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EF10 (NtSaveMergedKeys.c)
 *     CmSaveKeyToBuffer @ 0x140AF67B0 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B72B88 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rbx
  struct _OBJECT_HANDLE_INFORMATION *v7; // rax
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v7 = (struct _OBJECT_HANDLE_INFORMATION *)&v10;
  v10 = 0LL;
  Object = 0LL;
  if ( !a6 )
    v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, v7);
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      *a5 = Object;
      if ( v6 )
        *v6 = v10;
      return 0LL;
    }
    v8 = -1073741816;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v8;
}
