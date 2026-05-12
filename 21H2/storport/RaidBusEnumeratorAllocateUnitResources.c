/*
 * XREFs of RaidBusEnumeratorAllocateUnitResources @ 0x1C00187E4
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0017F8C (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00186DC (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x1C000BE14 (RaidAllocateSrb.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     RaidPrepareSrbForReuse @ 0x1C0073010 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorAllocateUnitResources(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  void *v5; // rcx
  PVOID v7; // rax
  ULONG *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  SIZE_T v13; // rdx
  _BYTE *Srb; // rax
  PVOID Pool; // rax
  PIRP Irp; // rax
  PMDL Mdl; // rax
  void *MappedSystemVa; // rcx
  struct _MDL *v19; // rdx

  v3 = *a1;
  v5 = *(void **)(a2 + 16);
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
  }
  else
  {
    Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0, *(_BYTE *)(v3 + 426), 1);
    *(_QWORD *)(a2 + 16) = Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x12uLL, 0x4E536152u, *(_QWORD *)(v3 + 8));
    *(_QWORD *)(a2 + 24) = Pool;
    if ( !Pool )
      return 3221225495LL;
  }
  if ( *(_QWORD *)a2 )
  {
    IoReuseIrp(*(PIRP *)a2, -1073741823);
  }
  else
  {
    Irp = IoAllocateIrp(1, 0);
    *(_QWORD *)a2 = Irp;
    if ( !Irp )
      return 3221225495LL;
  }
  v7 = *(PVOID *)(a2 + 32);
  v8 = (ULONG *)(a2 + 40);
  if ( v7 )
  {
    if ( *v8 >= a3 )
      goto LABEL_8;
    ExFreePoolWithTag(*(PVOID *)(a2 + 32), 0x32316152u);
  }
  v13 = 512LL;
  if ( a3 >= 0x200 )
    v13 = a3;
  *v8 = v13;
  v7 = RaidAllocatePool(NonPagedPoolNx, v13, 0x32316152u, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = v7;
  if ( !v7 )
  {
    *v8 = 0;
    return 3221225495LL;
  }
LABEL_8:
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
  {
    Mdl = IoAllocateMdl(v7, *v8, 0, 0, 0LL);
    *(_QWORD *)(a2 + 8) = Mdl;
    if ( Mdl )
    {
      if ( (Mdl->MdlFlags & 0x20) == 0 )
        goto LABEL_10;
      MappedSystemVa = Mdl->MappedSystemVa;
      v19 = Mdl;
LABEL_30:
      MmUnmapLockedPages(MappedSystemVa, v19);
      goto LABEL_10;
    }
    return 3221225495LL;
  }
  if ( (*(_BYTE *)(v9 + 10) & 0x20) != 0 )
  {
    v19 = *(struct _MDL **)(a2 + 8);
    MappedSystemVa = *(void **)(v9 + 24);
    goto LABEL_30;
  }
LABEL_10:
  v10 = *(_QWORD *)(a2 + 24);
  if ( v10 )
  {
    *(_OWORD *)v10 = 0LL;
    *(_WORD *)(v10 + 16) = 0;
  }
  v11 = *(void **)(a2 + 32);
  if ( v11 )
    memset(v11, 0, *v8);
  return 0LL;
}
