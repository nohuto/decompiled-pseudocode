void __stdcall HalFreeCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PHYSICAL_ADDRESS LogicalAddress,
        PVOID VirtualAddress,
        BOOLEAN CacheEnabled)
{
  ((void (__fastcall *)(_QWORD, _DWORD, _QWORD, _QWORD, _BYTE))DmaAdapter->DmaOperations->FreeCommonBuffer)(
    DmaAdapter,
    Length,
    (_LARGE_INTEGER)LogicalAddress.QuadPart,
    VirtualAddress,
    CacheEnabled);
}
