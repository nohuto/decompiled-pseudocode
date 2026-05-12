/*
 * XREFs of StorPortGetUncachedExtension @ 0x1C0039670
 * Callers:
 *     StorPortGetUncachedExtensionVrfy @ 0x1C007F380 (StorPortGetUncachedExtensionVrfy.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C0006B8C (StorAllocateContiguousIoResources.c)
 *     RaidDmaAllocateUncachedExtension @ 0x1C0033F60 (RaidDmaAllocateUncachedExtension.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C003D6E8 (StorpUpdateUncachedExtensionAllocationRegion.c)
 *     RaidInitializeDma @ 0x1C0079F74 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C007A0FC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rax
  int v4; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  int UncachedExtension; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  bool v17; // zf
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 - 16);
  v4 = 0x80000000;
  v19 = 0x80000000;
  v7 = *v3;
  if ( *v3 )
  {
    if ( *(_DWORD *)(v7 + 776) )
      return *(_QWORD *)(v7 + 760);
    if ( (unsigned __int8)RaidIsDmaInitialized(v7 + 728)
      || (int)RaidInitializeDma(v8, *(_QWORD *)(v7 + 32), v7 + 328) >= 0 )
    {
      if ( !a2 )
        goto LABEL_27;
      if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v7 + 4800);
        v19 = v4;
      }
      if ( *(_BYTE *)(a2 + 144) == 2 )
      {
        if ( *(_QWORD *)(v7 + 4432) < 0x100000000uLL )
          *(_QWORD *)(v7 + 4432) = -1LL;
        *(_QWORD *)(v7 + 4448) = 0x100000000LL;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 144) != 3 )
        {
          if ( *(_BYTE *)(a2 + 144) == 4 )
          {
            v9 = *(_QWORD *)(v7 + 4432);
            v10 = v9;
            if ( v9 < 0x100000000LL )
            {
              *(_QWORD *)(v7 + 4432) = -1LL;
              v9 = -1LL;
              v10 = -1LL;
            }
            v11 = v10;
            if ( HighestPhysicalAddress != -1 )
            {
              if ( (_DWORD)HighestPhysicalAddress )
              {
                if ( (unsigned __int64)HighestPhysicalAddress > 0x100000000LL )
                {
                  v12 = HighestPhysicalAddress & 0xFFFFFFFF00000000uLL;
                  if ( v9 >= (HighestPhysicalAddress & 0xFFFFFFFF00000000uLL) )
                  {
                    v11 = v12 - 1;
                    *(_QWORD *)(v7 + 4432) = v12 - 1;
                    v13 = (v12 - 1) & 0xFFFFFFFF00000000uLL;
                    if ( *(_QWORD *)(v7 + 4440) > v13 )
                      *(_QWORD *)(v7 + 4440) = v13;
                  }
                }
              }
            }
            *(_QWORD *)(v7 + 4448) = 0x100000000LL;
            *(_QWORD *)(v7 + 4464) = v11;
            StorpUpdateUncachedExtensionAllocationRegion(v7, &v19);
            v4 = v19;
          }
LABEL_27:
          UncachedExtension = RaidDmaAllocateUncachedExtension(
                                v7 + 728,
                                a3,
                                *(_QWORD *)(v7 + 4440),
                                *(_QWORD *)(v7 + 4432),
                                *(_QWORD *)(v7 + 4448),
                                *(_DWORD *)(v7 + 4424),
                                v4,
                                v7 + 760);
          if ( UncachedExtension >= 0 )
            goto LABEL_31;
          if ( v4 != 0x80000000 )
            UncachedExtension = RaidDmaAllocateUncachedExtension(
                                  v7 + 728,
                                  a3,
                                  *(_QWORD *)(v7 + 4440),
                                  *(_QWORD *)(v7 + 4432),
                                  *(_QWORD *)(v7 + 4448),
                                  *(_DWORD *)(v7 + 4424),
                                  0x80000000,
                                  v7 + 760);
          if ( UncachedExtension >= 0 )
          {
LABEL_31:
            if ( *(_BYTE *)(a2 + 144) == 4 )
            {
              v15 = *(_QWORD *)(v7 + 768);
              v16 = v15 | 0xFFFFFFFFLL;
              v17 = *(_QWORD *)(v7 + 4440) == 0LL;
              *(_QWORD *)(v7 + 4456) = v15 & 0xFFFFFFFF00000000uLL;
              if ( v17 )
                v15 &= 0xFFFFFFFF00000000uLL;
              *(_QWORD *)(v7 + 4464) = v16;
              v17 = *(_QWORD *)(v7 + 112) == 0LL;
              *(_QWORD *)(v7 + 4440) = v15;
              *(_QWORD *)(v7 + 4432) = v16;
              if ( v17 )
                *(_QWORD *)(v7 + 112) = StorAllocateContiguousIoResources(
                                          ((*(_DWORD *)(v7 + 468) + 7) & 0xFFFFFFF8) + 1088,
                                          v15,
                                          v7);
            }
            return *(_QWORD *)(v7 + 760);
          }
          return 0LL;
        }
        if ( *(_QWORD *)(v7 + 4432) < 0x100000000uLL )
          *(_QWORD *)(v7 + 4432) = -1LL;
        *(_QWORD *)(v7 + 4448) = 0LL;
      }
      *(_QWORD *)(v7 + 4464) = -1LL;
      goto LABEL_27;
    }
  }
  return 0LL;
}
