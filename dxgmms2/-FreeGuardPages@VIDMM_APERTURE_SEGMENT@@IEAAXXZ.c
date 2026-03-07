void __fastcall VIDMM_APERTURE_SEGMENT::FreeGuardPages(VIDMM_APERTURE_SEGMENT *this)
{
  __int64 v1; // rbp
  PMDL *v2; // rdi
  PMDL v4; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v1 = *((_QWORD *)this + 64);
  v2 = (PMDL *)((char *)this + 504);
  if ( v1 )
  {
    v4 = *v2;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, PMDL))VirtualMemoryInterface + 6))(v1, v4);
    *((_QWORD *)this + 64) = 0LL;
  }
  if ( *v2 )
  {
    MmFreePagesFromMdl(*v2);
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
}
