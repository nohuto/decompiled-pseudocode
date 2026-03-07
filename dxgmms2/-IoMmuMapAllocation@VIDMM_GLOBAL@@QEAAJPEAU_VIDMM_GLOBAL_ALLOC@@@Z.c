int __fastcall VIDMM_GLOBAL::IoMmuMapAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *FullMDL; // rsi
  int v6; // ebx
  unsigned __int64 LogicalAddress; // rax

  if ( (*((_DWORD *)a2 + 18) & 0x400) != 0 )
    return 0;
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  if ( FullMDL )
  {
    v6 = **((_DWORD **)a2 + 67);
    LogicalAddress = SysMmGetLogicalAddress(*((void *const *)a2 + 66));
    return SysMmMapIommuRange(
             *(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL),
             LogicalAddress,
             FullMDL,
             (v6 & 0x10) != 0);
  }
  else
  {
    WdLogSingleEntry0(3LL);
    return -1073741801;
  }
}
