__int64 __fastcall HalpIommuGetHardwareDomain(__int64 a1, __int64 a2, char a3, char a4, char a5, __int64 *a6)
{
  __int64 *v6; // r15
  __int64 v7; // rbx
  int DmarptRootAddress; // ebp
  _QWORD *v12; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  _QWORD *i; // rax
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rax
  char v21; // cl
  char v22; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  __int64 v28; // [rsp+20h] [rbp-48h]
  volatile signed __int64 *v29; // [rsp+28h] [rbp-40h]
  PHYSICAL_ADDRESS v30; // [rsp+70h] [rbp+8h] BYREF
  char v31; // [rsp+80h] [rbp+18h]

  v31 = a3;
  v30.QuadPart = 0LL;
  v6 = a6;
  v7 = 0LL;
  v28 = 0LL;
  v29 = (volatile signed __int64 *)(a1 + 32);
  DmarptRootAddress = 0;
  v12 = (_QWORD *)(a1 + 16);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
  {
    v7 = (__int64)i;
    if ( i[3] == a2 )
      break;
  }
  if ( i != v12 )
  {
    if ( a1 != HalpIommuBypassDomain && a4 )
      ++*(_QWORD *)(v7 + 16);
    goto LABEL_11;
  }
  if ( v31 )
  {
    v16 = (void *)HalpMmAllocCtxAlloc(v13, 144LL);
    v7 = (__int64)v16;
    if ( !v16 )
    {
      DmarptRootAddress = -1073741670;
      goto LABEL_12;
    }
    memset(v16, 0, 0x90uLL);
    *(_QWORD *)(v7 + 16) = 1LL;
    *(_QWORD *)(v7 + 24) = a2;
    *(_DWORD *)(v7 + 32) = 1;
    if ( *(_BYTE *)(a1 + 52) )
    {
      v21 = a5;
      v22 = a5;
      *(_DWORD *)(v7 + 32) = 0;
      *(_BYTE *)(v7 + 48) ^= (*(_BYTE *)(v7 + 48) ^ (4 * v22)) & 4;
      if ( v21 )
        v28 = a1 + 48;
    }
    v17 = *(_QWORD *)(a1 + 40);
    if ( v17 && !*(_BYTE *)(a1 + 52) )
    {
      DmarptRootAddress = HalpIommuGetDmarptRootAddress(
                            v17,
                            (unsigned int)((unsigned __int8)HIBYTE(*(_WORD *)(a2 + 488)) >> 5) + 1,
                            &v30);
      if ( DmarptRootAddress < 0 )
        goto LABEL_23;
      *(PHYSICAL_ADDRESS *)(v7 + 72) = v30;
      *(_BYTE *)(v7 + 64) = 3;
    }
    *(_DWORD *)(v7 + 36) = *(_DWORD *)(a1 + 12);
    DmarptRootAddress = HalpIommuAcquireNewDomain(a2, v7 + 32, v28);
    if ( DmarptRootAddress >= 0 )
    {
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(v7 + 80);
      v19 = *(__int64 **)(a1 + 24);
      if ( (_QWORD *)*v19 != v12 )
        __fastfail(3u);
      *(_QWORD *)v7 = v12;
      *(_QWORD *)(v7 + 8) = v19;
      *v19 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      goto LABEL_11;
    }
LABEL_23:
    HalpMmAllocCtxFree(v18, v7);
    goto LABEL_12;
  }
LABEL_11:
  *v6 = v7;
LABEL_12:
  KxReleaseSpinLock(v29);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
      v27 = (v26 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v26;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v14);
  return (unsigned int)DmarptRootAddress;
}
