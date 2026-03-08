/*
 * XREFs of ViAllocateMapRegistersFromFile @ 0x140AC4E8C
 * Callers:
 *     ViMapDoubleBuffer @ 0x140AC678C (ViMapDoubleBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 *     ViTagBuffer @ 0x140AC71B4 (ViTagBuffer.c)
 */

__int64 __fastcall ViAllocateMapRegistersFromFile(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4, _DWORD *a5)
{
  ULONG_PTR *v5; // rbx
  __int64 v6; // r15
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  int v10; // r12d
  unsigned int v11; // r13d
  KIRQL v12; // bp
  unsigned int v13; // r9d
  ULONG_PTR *v14; // r15
  const void *v15; // rax
  ULONG_PTR *v16; // r14
  const void *v17; // r13
  ULONG_PTR v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 *v20; // rbx
  char v21; // r10
  int v22; // r11d
  unsigned int v23; // ecx
  int v24; // r9d
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  volatile signed __int64 *v35; // [rsp+40h] [rbp-58h]

  v5 = (ULONG_PTR *)(a1 + 88);
  v6 = a1;
  v7 = 0;
  v8 = ((a2 & 0xFFF) + a3 + 4095LL) >> 12;
  v35 = (volatile signed __int64 *)(a1 + 80);
  v9 = a2;
  v10 = 0;
  v11 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( !*(_DWORD *)(v6 + 32) )
  {
LABEL_10:
    v13 = a3;
    goto LABEL_11;
  }
  v13 = a3;
  v14 = &v5[4 * *(unsigned int *)(v6 + 28)];
  v15 = (const void *)(v9 + a3);
  v16 = v5;
  if ( v5 < v14 )
  {
    v17 = v15;
    do
    {
      v18 = *v16;
      if ( *v16 && v18 >= a2 && v18 < (unsigned __int64)v17 )
      {
        ViHalPreprocessOptions(
          byte_140C0DD04,
          "Driver is trying to map an address range(%p-%p) that is already mapped    at %p",
          (const void *)0x1D,
          (const void *)a2,
          v17);
        VfReportIssueWithOptions(0xE6u, 0x1DuLL, a2, (ULONG_PTR)v17, *v16, byte_140C0DD04);
      }
      v16 += 4;
    }
    while ( v16 < v14 );
    v10 = 0;
    v9 = a2;
    v11 = 0;
    v6 = a1;
    goto LABEL_10;
  }
  v9 = a2;
  v6 = a1;
LABEL_11:
  if ( (_DWORD)v8 )
  {
    while ( v10 != *(_DWORD *)(v6 + 28) )
    {
      v19 = v11 + 1;
      v11 = 0;
      if ( !*v5 )
        v11 = v19;
      v5 += 4;
      ++v10;
      if ( v11 >= (unsigned int)v8 )
        goto LABEL_16;
    }
    ViHalPreprocessOptions(byte_140C0DD14, "Map registers needed: %x available: %x", 0x10000000, 2);
    VfReportIssueWithOptions(0xE6u, 0LL, 2uLL, (unsigned int)v8, v11, byte_140C0DD14);
    KxReleaseSpinLock(v35);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v29 = (v34 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v34;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  else
  {
LABEL_16:
    v20 = &v5[-4 * (unsigned int)v8];
    *a5 = v10 - v8;
    if ( (_DWORD)v8 )
    {
      v21 = a4;
      v22 = 4095;
      do
      {
        *v20 = v9;
        v20[3] = v9;
        v23 = 4096 - (v22 & v9);
        if ( v23 >= v13 )
          v23 = v13;
        *((_DWORD *)v20 + 2) = v23;
        *((_DWORD *)v20 + 3) = 2 - (v21 != 0);
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
        ViTagBuffer((v22 & (unsigned int)v9) + v20[2] + 4096, *((unsigned int *)v20 + 2), 3LL);
        v13 = v24 - *((_DWORD *)v20 + 2);
        v20 += 4;
        v9 = (v9 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        LODWORD(v8) = v8 - 1;
      }
      while ( (_DWORD)v8 );
    }
    KxReleaseSpinLock(v35);
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v12 <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v29 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick((__int64)v26);
      }
    }
    v7 = 1;
  }
  __writecr8(v12);
  return v7;
}
