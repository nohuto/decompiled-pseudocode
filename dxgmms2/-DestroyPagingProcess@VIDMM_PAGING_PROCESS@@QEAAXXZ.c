void __fastcall VIDMM_PAGING_PROCESS::DestroyPagingProcess(VIDMM_PAGING_PROCESS *this)
{
  VIDMM_DEVICE *v2; // rcx
  __int64 i; // rsi
  struct CVirtualAddressAllocator *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int j; // ebp
  struct VIDMM_ALLOC ***v8; // r14
  VIDMM_DEVICE *v9; // rcx

  if ( *((_QWORD *)this + 2) )
  {
    v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v2 )
      VIDMM_DEVICE::UnmapPagingQueueGpuVAs(v2);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 2) + 7016LL); i = (unsigned int)(i + 1) )
    {
      v4 = (struct CVirtualAddressAllocator *)*((_QWORD *)this + i + 4);
      if ( v4 )
      {
        if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() || *((_QWORD *)v4 + 15) )
        {
          for ( j = 0; j < *(_DWORD *)(*((_QWORD *)v4 + 11) + 7016LL); ++j )
          {
            v8 = (struct VIDMM_ALLOC ***)(*((_QWORD *)v4 + 15) + 32LL * j);
            if ( *v8 )
            {
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v8, v4, 0LL);
              *v8 = 0LL;
            }
          }
        }
        CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)this + i + 4), v5, v6);
        *((_QWORD *)this + i + 4) = 0LL;
      }
    }
    v9 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v9 )
    {
      VIDMM_DEVICE::`scalar deleting destructor'(v9);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
