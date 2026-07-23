/*
 * XREFs of LdrAccessResource @ 0x1407C5ED0
 * Callers:
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140A6B744 (FindBitmapResource.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x14067255C (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData((unsigned __int64)DllHandle, (unsigned __int64)ResourceDataEntry);
}
