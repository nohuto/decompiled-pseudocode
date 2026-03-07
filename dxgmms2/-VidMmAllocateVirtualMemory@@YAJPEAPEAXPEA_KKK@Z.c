__int64 __fastcall VidMmAllocateVirtualMemory(void **a1, unsigned __int64 *a2, int a3, int a4)
{
  void *CurrentPartitionHandle; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  if ( CurrentPartitionHandle != (void *)-1LL )
    return VidMmAllocateVirtualMemoryFromPartition((_DWORD)CurrentPartitionHandle, (_DWORD)a1, (_DWORD)a2, a3, a4);
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  return (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, int))VirtualMemoryInterface)(
           -1LL,
           a1,
           0LL,
           a2,
           a3,
           a4);
}
