/*
 * XREFs of NtLoadKeyEx @ 0x1406E7310
 * Callers:
 *     NtLoadKey @ 0x140781A80 (NtLoadKey.c)
 * Callees:
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 */

NTSTATUS __cdecl NtLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey,
        HANDLE Event,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  return CmLoadDifferencingKey(
           (int)TargetKey,
           (int)SourceFile,
           Flags,
           (int)TrustClassKey,
           (__int64)Event,
           DesiredAccess,
           (__int64)RootHandle,
           (int)Reserved,
           0LL,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode);
}
