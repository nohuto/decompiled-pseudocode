void __fastcall SysMmDestroyAdapter(struct SYSMM_ADAPTER *a1)
{
  _QWORD *v1; // r9
  _QWORD *v3; // r8
  __int64 i; // rdi
  struct SYSMM_LOGICAL_BLOCK *v5; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v6; // rcx
  char *v7; // rcx
  unsigned int j; // edi
  struct _IOMMU_DMA_DEVICE **v9; // rsi

  v1 = (_QWORD *)((char *)a1 + 40);
  if ( (_QWORD *)*v1 != v1 )
  {
    if ( (dword_1C013BCE0 & 0x20) != 0 )
      WdLogSingleEntry5(0LL, 484LL, 6LL, a1, v1, 0LL);
    else
      SysMmCreateLiveDump();
  }
  v3 = (_QWORD *)*((_QWORD *)a1 + 48);
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 7); i = (unsigned int)(i + 1) )
    {
      v5 = (struct SYSMM_LOGICAL_BLOCK *)v3[3 * i + 2];
      if ( v5 )
      {
        SmmFreeLogicalAddress(*((struct SYSMM_LOGICAL_ALLOCATOR **)a1 + 46), v5);
        v3 = (_QWORD *)*((_QWORD *)a1 + 48);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  SmmDeinitializeIommu(a1);
  v6 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 46);
  if ( v6 )
    SmmDestroyLogicalAllocator(v6);
  v7 = (char *)*((_QWORD *)a1 + 47);
  if ( v7 )
  {
    for ( j = 0; j < *((_DWORD *)a1 + 6); ++j )
    {
      v9 = (struct _IOMMU_DMA_DEVICE **)&v7[16 * j];
      if ( *v9 )
      {
        SmmIommuDeleteDevice(*v9);
        *v9 = 0LL;
        v7 = (char *)*((_QWORD *)a1 + 47);
      }
    }
    ExFreePoolWithTag(v7, 0);
  }
  operator delete(a1);
}
