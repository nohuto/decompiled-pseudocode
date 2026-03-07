void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapCpuVA(VIDMM_FENCE_STORAGE_PAGE *this, struct VIDMM_PROCESS *a2)
{
  char *v4; // rbp
  VIDMM_FENCE_STORAGE_PAGE *v5; // rax
  __int64 *v6; // rsi
  VIDMM_FENCE_STORAGE_PAGE *v7; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  VIDMM_FENCE_STORAGE_PAGE *v12; // rcx
  VIDMM_FENCE_STORAGE_PAGE **v13; // rax

  if ( !a2 || (*(_DWORD *)(*((_QWORD *)a2 + 4) + 424LL) & 0x100) == 0 )
  {
    v4 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    *((_QWORD *)v4 + 1) = KeGetCurrentThread();
    v5 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)this + 5);
    while ( v5 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 40) )
    {
      v6 = (__int64 *)((char *)v5 - 16);
      v7 = v5;
      v5 = *(VIDMM_FENCE_STORAGE_PAGE **)v5;
      if ( a2 == (struct VIDMM_PROCESS *)v6[1] || !a2 )
      {
        if ( (*((_DWORD *)v6 + 8))-- == 1 )
        {
          v9 = *v6;
          v10 = *(_QWORD *)a2;
          VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 4))(v10, v9);
          v12 = *(VIDMM_FENCE_STORAGE_PAGE **)v7;
          if ( *(VIDMM_FENCE_STORAGE_PAGE **)(*(_QWORD *)v7 + 8LL) != v7
            || (v13 = (VIDMM_FENCE_STORAGE_PAGE **)*((_QWORD *)v7 + 1), *v13 != v7) )
          {
            __fastfail(3u);
          }
          *v13 = v12;
          *((_QWORD *)v12 + 1) = v13;
          ExFreePoolWithTag(v6, 0);
        }
        break;
      }
    }
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
