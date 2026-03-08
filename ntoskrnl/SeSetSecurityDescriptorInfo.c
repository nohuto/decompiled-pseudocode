/*
 * XREFs of SeSetSecurityDescriptorInfo @ 0x1407510B0
 * Callers:
 *     IopSetDeviceSecurityDescriptor @ 0x140750F44 (IopSetDeviceSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x140751100 (ObSetSecurityDescriptorInfo.c)
 * Callees:
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 */

NTSTATUS __stdcall SeSetSecurityDescriptorInfo(
        PVOID Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  if ( *ObjectsSecurityDescriptor )
    return RtlpSetSecurityObject(
             (_DWORD)Object,
             *SecurityInformation,
             (_DWORD)ModificationDescriptor,
             (_DWORD)ObjectsSecurityDescriptor,
             0,
             PoolType,
             (__int64)GenericMapping,
             0LL);
  else
    return -1073741609;
}
