/*
 * XREFs of HalpDmaSyncMapBuffers @ 0x1404544F2
 * Callers:
 *     HalpDmaFlushContiguousTransferV2 @ 0x140455976 (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x140455A8C (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x140455BE8 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x140455D28 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404FDA54 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404FDBA4 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404FDFEC (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404FE110 (HalpDmaMapScatterTransferV3.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HalpDmaAcquireBufferMappings @ 0x140453764 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404541D8 (HalpDmaReleaseBufferMappings.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x14050F0B4 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x14050F610 (HalpFlushMapBuffers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall HalpDmaSyncMapBuffers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        char a6,
        char a7,
        char a8)
{
  unsigned __int8 CurrentIrql; // bl
  char *v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // r12
  unsigned int v16; // edx
  _QWORD *i; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rax
  char *v20; // rsi
  __int64 v21; // rcx
  int v22; // r15d
  unsigned int v23; // edi
  _QWORD *v24; // r12
  unsigned int v25; // r15d
  const void *v26; // r9
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  int v32; // [rsp+48h] [rbp-70h]
  int v33; // [rsp+50h] [rbp-68h]
  _OWORD v34[3]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v35; // [rsp+88h] [rbp-30h]
  char v36; // [rsp+C8h] [rbp+10h]

  memset(v34, 0, sizeof(v34));
  v35 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v13 = *(char **)(a2 + 24);
  else
    v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( v13 )
  {
    v36 = 0;
    v14 = a3 & 0xFFF;
    v15 = (v14 + (unsigned __int64)a5 + 4095) >> 12;
    v32 = v15;
    if ( CurrentIrql <= 2u )
    {
      if ( CurrentIrql < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          LODWORD(v19) = 4;
          if ( CurrentIrql != 2 )
          {
            v14 = (unsigned int)CurrentIrql + 1;
            v19 = (-1LL << (CurrentIrql + 1)) & 4;
          }
          SchedulerAssist[5] |= v19;
        }
        v36 = 1;
      }
      HalpDmaAcquireBufferMappings(v14, a4, v15, (__int64)v34);
    }
    else
    {
      v16 = 0;
      for ( i = a4; v16 < (unsigned int)v15; ++v16 )
      {
        if ( (i[6] & 0xFFFFFFFFFFFFF000uLL) == 0 )
          KeBugCheckEx(0xACu, 0x1000uLL, 0xEF03uLL, 0LL, 0LL);
        i = (_QWORD *)i[1];
      }
    }
    v20 = &v13[a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32)];
    v33 = (int)v20;
    v21 = (unsigned __int16)v20 & 0xFFF;
    v22 = (int)v20;
    if ( !*(_BYTE *)(a1 + 445) && !a6 )
    {
      HalpFlushMapBuffers(a1, (_DWORD)v20, (_DWORD)a4, a5, 0, a8);
      v21 = (unsigned __int16)v20 & 0xFFF;
    }
    if ( a5 )
    {
      v23 = a5;
      v24 = a4;
      do
      {
        v25 = v23;
        if ( v23 >= 4096 - (int)v21 )
          v25 = 4096 - v21;
        v26 = (const void *)((v24[6] & 0xFFFFFFFFFFFFF000uLL) + (unsigned int)v21);
        if ( !a7 )
        {
          if ( a6 )
            ((void (__fastcall *)(const void *, char *, _QWORD))HalpMoveMemory[0])(v26, v20, v25);
          else
            memmove(v20, v26, v25);
        }
        v24 = (_QWORD *)v24[1];
        v21 = 0LL;
        v20 += v25;
        v23 -= v25;
      }
      while ( v23 );
      LODWORD(v15) = v32;
      v22 = v33;
    }
    if ( !*(_BYTE *)(a1 + 445) && a6 )
      HalpFlushMapBuffers(a1, v22, (_DWORD)a4, a5, a6, a8);
    if ( CurrentIrql <= 2u )
      HalpDmaReleaseBufferMappings(v21, (__int64)a4, v15, (__int64)v34);
    if ( v36 )
    {
      if ( KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    HalpDmaSyncMapBuffersWithEmergencyResources(a1, a2, a3, (_DWORD)a4, a5, a6, a7, a8);
  }
}
