/*
 * XREFs of SeSetSecurityDescriptorInfoEx @ 0x140790F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 */

NTSTATUS __stdcall SeSetSecurityDescriptorInfoEx(
        PVOID Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  if ( *ObjectsSecurityDescriptor )
    return RtlpSetSecurityObject(
             (_DWORD)Object,
             *SecurityInformation,
             (_DWORD)ModificationDescriptor,
             (_DWORD)ObjectsSecurityDescriptor,
             AutoInheritFlags,
             PoolType,
             (__int64)GenericMapping,
             0LL);
  else
    return -1073741609;
}
