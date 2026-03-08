/*
 * XREFs of HvlpDepositPages @ 0x14053E7A4
 * Callers:
 *     HvlpHandleInsufficientMemory @ 0x14053DA58 (HvlpHandleInsufficientMemory.c)
 *     HvlpStartLogicalProcessor @ 0x14053FE30 (HvlpStartLogicalProcessor.c)
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140676630 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14093E334 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1403BE0E0 (MmAllocateNodePagesForMdlEx.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1, __int64 a2, char a3, char a4)
{
  unsigned int v4; // ebp
  char v5; // r13
  char v6; // r12
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // r14
  unsigned int v11; // ecx
  __int64 NodePagesForMdl; // rax
  char *v13; // r15
  unsigned int v15; // r12d
  unsigned int v16; // eax
  PHYSICAL_ADDRESS *v17; // rax
  unsigned int v18; // r14d
  int v19; // esi
  PHYSICAL_ADDRESS *v20; // r13
  int v21; // eax
  int v22; // [rsp+40h] [rbp-68h]
  __int64 v23; // [rsp+48h] [rbp-60h]
  __int128 v24; // [rsp+50h] [rbp-58h] BYREF
  __int64 v25; // [rsp+60h] [rbp-48h]
  __int64 v26; // [rsp+68h] [rbp-40h]
  unsigned int v27; // [rsp+B0h] [rbp+8h]

  v24 = 0LL;
  v25 = 0LL;
  v4 = 128;
  LODWORD(v26) = 0;
  v5 = a4;
  v6 = a3;
  v7 = 113;
  v8 = 0x200000LL;
  v9 = *(unsigned __int16 *)(KeNodeBlock[a1] + 2);
  v27 = v9;
  while ( 1 )
  {
    v23 = v8;
    v10 = v8;
    v11 = (v7 & 0x20) != 0 ? (v4 + 511) & 0xFFFFFE00 : v4;
    NodePagesForMdl = MmAllocateNodePagesForMdlEx(0, -1, v8, v11 << 12, 1, v9, v7);
    v13 = (char *)NodePagesForMdl;
    if ( NodePagesForMdl )
    {
      v15 = (*(_DWORD *)(NodePagesForMdl + 40) >> 12) + ((*(_DWORD *)(NodePagesForMdl + 40) & 0xFFF) != 0);
      v16 = v4;
      v4 -= v15;
      if ( v16 < v15 )
        v4 = 0;
      v17 = HvlpAcquireHypercallPage((__int64)&v24, 1, 0LL, 8LL);
      v18 = 0;
      v17->QuadPart = HvlPartitionId;
      v22 = v5 != 0 ? 255 : 72;
      if ( v15 )
      {
        v19 = ((unsigned __int64)(v5 != 0 ? 0xB7 : 0) + 72) >> 32;
        v20 = v17 + 1;
        do
        {
          if ( v15 - v18 < 0x1FF )
            v19 ^= ((unsigned __int16)v19 ^ (unsigned __int16)(v15 - v18)) & 0xFFF;
          else
            v19 = v19 & 0xFFFFF000 | 0x1FF;
          memmove(v20, &v13[8 * v18 + 48], 8LL * (v19 & 0xFFF));
          HvcallInitiateHypercall(v22);
          v18 += 511;
        }
        while ( v18 < v15 );
        v5 = a4;
      }
      HvlpReleaseHypercallPage(&v24);
      ExFreePoolWithTag(v13, 0);
      v10 = v23;
      v6 = a3;
    }
    else if ( (v7 & 0x20) == 0 || v6 && (v7 & 0x40) == 0 )
    {
      return 3221225495LL;
    }
    if ( !v4 )
      break;
    v21 = v7 & 0x40;
    if ( (v7 & 0x40) != 0 )
      v7 &= ~0x40u;
    else
      v7 = v7 & 0xFFFFFFDB | 4;
    v9 = v27;
    v8 = v10 & -(__int64)(v21 != 0);
  }
  return 0LL;
}
