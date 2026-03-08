/*
 * XREFs of HalpDmaZeroMapBuffers @ 0x14050F420
 * Callers:
 *     HalpMapTransferV2 @ 0x140454DA4 (HalpMapTransferV2.c)
 *     HalpMapTransferV3 @ 0x140512CCC (HalpMapTransferV3.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpDmaAcquireBufferMappings @ 0x140453764 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404541D8 (HalpDmaReleaseBufferMappings.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall HalpDmaZeroMapBuffers(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r12d
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rcx
  char v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int i; // edx
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rax
  _QWORD *j; // r13
  unsigned int v15; // ebx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  _OWORD v21[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]
  unsigned int v23; // [rsp+C0h] [rbp+18h]

  v23 = a3;
  v4 = a4;
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v7 = a3 & 0xFFF;
  v8 = 0;
  v9 = (v7 + (unsigned __int64)a4 + 4095) >> 12;
  if ( CurrentIrql <= 2u )
  {
    if ( CurrentIrql < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        LODWORD(v13) = 4;
        if ( CurrentIrql != 2 )
        {
          v7 = (unsigned int)CurrentIrql + 1;
          v13 = (-1LL << (CurrentIrql + 1)) & 4;
        }
        SchedulerAssist[5] |= v13;
      }
      v8 = 1;
    }
    HalpDmaAcquireBufferMappings(v7, a2, v9, (__int64)v21);
    a3 = v23;
  }
  else
  {
    v10 = (__int64)a2;
    for ( i = 0; i < (unsigned int)v9; ++i )
    {
      if ( (*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        KeBugCheckEx(0xACu, 0x1000uLL, 0xEF06uLL, 0LL, 0LL);
      v10 = *(_QWORD *)(v10 + 8);
    }
  }
  for ( j = a2; v4; v4 -= v15 )
  {
    v15 = v4;
    if ( v4 >= 4096 - a3 )
      v15 = 4096 - a3;
    memset((void *)((j[6] & 0xFFFFFFFFFFFFF000uLL) + a3), 0, v15);
    j = (_QWORD *)j[1];
    a3 = 0;
  }
  if ( CurrentIrql <= 2u )
    HalpDmaReleaseBufferMappings(v10, (__int64)a2, v9, (__int64)v21);
  if ( v8 )
  {
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
}
