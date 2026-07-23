/*
 * XREFs of LdrFindResource_U @ 0x1407C5EF0
 * Callers:
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A6B744 (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140672884 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U(
           (char *)DllHandle,
           (__int64 *)ResourceInfo,
           Level,
           0,
           (unsigned int **)ResourceDataEntry);
}
