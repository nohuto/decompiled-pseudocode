__int64 __fastcall SmmOpenPhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1, struct SYSMM_ADAPTER *a2)
{
  struct SYSMM_ADAPTER *v4; // rsi
  int v5; // edi
  KIRQL CurrentIrql; // r15
  KIRQL v7; // al
  struct SYSMM_ADAPTER **v8; // rdx
  int v9; // r8d
  int LogicalAddress; // eax
  char *v12; // r8
  char *v13; // rdx
  int v14; // eax
  char *v15; // r8
  char *v16; // rdx
  struct SYSMM_LOGICAL_BLOCK *v17; // rdx
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF
  char v19; // [rsp+70h] [rbp+8h]

  v19 = 0;
  ExAcquirePushLockExclusiveEx((char *)a1 + 32, 0LL);
  v4 = (struct SYSMM_PHYSICAL_OBJECT *)((char *)a1 + 64);
  if ( (*((_DWORD *)a2 + 23) & 1) == 0 || (dword_1C013BCE0 & 0x18) != 0 )
  {
    v5 = 0;
  }
  else
  {
    LogicalAddress = SmmAllocateLogicalAddress(
                       *((struct SYSMM_LOGICAL_ALLOCATOR **)a2 + 46),
                       *(_QWORD *)a1,
                       (char *)a1 + 64,
                       (struct SYSMM_LOGICAL_BLOCK **)a1 + 11);
    v5 = LogicalAddress;
    if ( LogicalAddress < 0 )
    {
      WdLogSingleEntry2(3LL, a1, LogicalAddress);
LABEL_33:
      v17 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 11);
      if ( v17 )
      {
        SmmFreeLogicalAddress(*((struct SYSMM_LOGICAL_ALLOCATOR **)a2 + 46), v17);
        *((_QWORD *)a1 + 11) = 0LL;
      }
      goto LABEL_11;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)a2 + 18);
  else
    ExAcquirePushLockSharedEx((char *)a2 + 80, 0LL);
  if ( !*((_DWORD *)a2 + 26) )
  {
    v12 = (char *)a2 + 64;
    v13 = (char *)a1 + 64;
    if ( (*((_DWORD *)a1 + 11) & 1) != 0 )
      v14 = SmmMapNonPagedObjectToIommu(a1, v13, v12);
    else
      v14 = SmmMapPagedObjectToIommu(a1, v13, v12);
    v5 = v14;
    if ( v14 < 0 )
      WdLogSingleEntry2(3LL, a1, v14);
    else
      v19 = 1;
  }
  if ( CurrentIrql >= 2u )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)a2 + 18);
  else
    ExReleasePushLockSharedEx((char *)a2 + 80, 0LL);
  if ( v5 < 0 )
  {
    if ( v19 )
    {
      SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
        (SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v18,
        (struct SYSMM_ADAPTER *)((char *)a2 + 64));
      if ( !*((_DWORD *)a2 + 26) )
      {
        v15 = (char *)a2 + 64;
        v16 = (char *)a1 + 64;
        if ( (*((_DWORD *)a1 + 11) & 1) != 0 )
          SmmUnmapNonPagedObjectFromIommu(a1, v16, v15);
        else
          SmmUnmapPagedObjectFromIommu(a1, v16, v15);
      }
      SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED((SYSMM_AUTO_DOMAIN_LOCK_SHARED *)v18);
    }
    goto LABEL_33;
  }
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a2 + 9);
  v8 = (struct SYSMM_ADAPTER **)*((_QWORD *)a2 + 6);
  if ( *v8 != (struct SYSMM_ADAPTER *)((char *)a2 + 40) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)a2 + 40;
  *((_QWORD *)a1 + 9) = v8;
  *v8 = v4;
  *((_QWORD *)a2 + 6) = v4;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)a2 + 9, v7);
  *((_QWORD *)a1 + 10) = a2;
LABEL_11:
  ExReleasePushLockExclusiveEx((char *)a1 + 32, 0LL);
  if ( v5 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a1 + 10);
    if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (unsigned int)&SysMmControlGuid_Context,
        (unsigned int)"\a",
        v9,
        (_DWORD)a2,
        (char)a1,
        (_BYTE)a1 + 64);
  }
  return (unsigned int)v5;
}
