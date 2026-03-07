void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unmap(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // r9
  void *v3; // rsi
  unsigned __int64 SmallAllocationSize; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  void *v9; // rbx
  struct _EPROCESS *v10; // rax
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v2 = *((_QWORD *)this + 10);
  if ( *((_BYTE *)this + 152) )
  {
    v3 = (void *)*((_QWORD *)this + 20);
    SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                            this,
                            (unsigned int)(**(_DWORD **)(v2 + 32) - 5) <= 1);
    v8 = *(_QWORD *)(v5 + 40) - *(_QWORD *)(v5 + 32);
    if ( v8 <= SmallAllocationSize )
    {
      CurrentProcess = PsGetCurrentProcess(v5, v8, v6, v7);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(CurrentProcess, v3);
    }
    else
    {
      v9 = *(void **)(v7 + 56);
      v10 = (struct _EPROCESS *)PsGetCurrentProcess(v5, v8, v6, v7);
      VidMmUnmapViewAsync(v10, v9, v3);
    }
    *((_BYTE *)this + 152) = 0;
  }
  else
  {
    VidMmUnmapViewAsync(0LL, *(void **)(v2 + 56), *((void **)this + 20));
    *((_BYTE *)this + 153) = 0;
  }
  *((_QWORD *)this + 20) = 0LL;
}
