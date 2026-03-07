void __fastcall VIDMM_GLOBAL::IoMmuUnmapAllocation(VIDMM_GLOBAL *this, void **a2, struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _MDL *FullMDL; // rdi
  int v6; // ebx
  unsigned __int64 LogicalAddress; // rax

  if ( ((_DWORD)a2[9] & 0x400) == 0 )
  {
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)a2, a3);
    v6 = *(_DWORD *)a2[67];
    LogicalAddress = SysMmGetLogicalAddress(a2[66]);
    SysMmUnmapIommuRange(
      *(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL),
      LogicalAddress,
      FullMDL,
      (v6 & 0x10) != 0);
  }
}
