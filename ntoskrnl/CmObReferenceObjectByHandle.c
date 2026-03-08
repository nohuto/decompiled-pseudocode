/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140AF2300
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1407AB260 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 *     NtLockRegistryKey @ 0x140845E40 (NtLockRegistryKey.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140A0A710 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0A9E0 (NtCompressKey.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0B850 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0BBB0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0BF70 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0C200 (NtSaveMergedKeys.c)
 *     CmSaveKeyToBuffer @ 0x140AF2780 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140B6E868 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
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
