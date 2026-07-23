/*
 * XREFs of RtlMarkHiberPhase @ 0x140592F14
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14099A1F0 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140226874 (MiGetPhysicalAddress.c)
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 *     KeAddTriageDumpDataBlock @ 0x1403CA270 (KeAddTriageDumpDataBlock.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PopSetBootPhaseRange @ 0x1409979B8 (PopSetBootPhaseRange.c)
 */

void RtlMarkHiberPhase()
{
  ULONG_PTR v0; // r12
  unsigned int v1; // eax
  unsigned __int64 v2; // rbx
  unsigned __int64 i; // rdi
  int PhysicalAddress; // eax
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  int v9; // eax
  unsigned __int64 v10; // rcx
  ULONG *m; // r9
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  int *v15; // rcx
  int v16; // r11d
  unsigned int *v17; // rax
  unsigned int v18; // ebx
  __int64 j; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  char *v25; // rcx
  int v26; // r10d
  unsigned int *v27; // rax
  unsigned int v28; // ebx
  __int64 k; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbp
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rdi
  ULONG *v35; // rdx
  void *v36; // rcx
  int v37; // r10d
  unsigned int *v38; // rax
  unsigned int v39; // ebx
  unsigned __int64 v40; // r8
  __int64 v41; // rax
  ULONG_PTR v42; // [rsp+30h] [rbp-88h]
  _DWORD v43[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD *v44; // [rsp+40h] [rbp-78h]
  _DWORD v45[2]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v46; // [rsp+50h] [rbp-68h]
  _DWORD v47[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD *v48; // [rsp+60h] [rbp-58h]
  int v49; // [rsp+C0h] [rbp+8h] BYREF
  int v50; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int64 v52; // [rsp+D8h] [rbp+20h] BYREF

  if ( (KiBugCheckActive & 3) == 0 )
  {
    v0 = qword_140C23AA0;
    v42 = qword_140C23AA0;
    if ( !qword_140C23AA0 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v1 = *(_DWORD *)(qword_140C23AA0 + 184);
    if ( v1 == 8 )
    {
      v2 = (unsigned __int64)XpressHashFunction >> 12;
      for ( i = (unsigned __int64)" the database offset 0x%lx size 0x%lx (0x%lx)" >> 12; v2 < i; v2 += v7 )
      {
        v49 = 0;
        v51 = 0LL;
        PhysicalAddress = MiGetPhysicalAddress(v2 << 12, (__int64 *)&v51, &v49);
        v5 = v51;
        v6 = v2 + 1;
        v7 = 1LL;
        if ( !PhysicalAddress )
          v5 = 0LL;
        v8 = v5 >> 12;
        if ( v6 < i )
        {
          do
          {
            v50 = 0;
            v52 = 0LL;
            v9 = MiGetPhysicalAddress((v2 << 12) + (v7 << 12), (__int64 *)&v52, &v50);
            v10 = v52;
            if ( !v9 )
              v10 = 0LL;
            if ( v8 - v2 + v6 != v10 >> 12 )
              break;
            ++v7;
            ++v6;
          }
          while ( v6 < i );
          v0 = v42;
        }
        if ( *(_BYTE *)(v0 + 28) )
        {
          IoAddTriageDumpDataBlock(v0 & 0xFFFFF000, (PVOID)(((v0 & 0xFFF) + 4551) & 0xFFFFF000));
          v12 = (unsigned int)IopNumTriageDumpDataBlocks;
          v43[0] = IopNumTriageDumpDataBlocks;
          v43[1] = 256;
          v13 = (((unsigned __int64)&PopHiberInfo & 0xFFF) + 4311) >> 12;
          v14 = (unsigned __int64)&PopHiberInfo & 0xFFFFFFFFFFFFF000uLL;
          v44 = IopTriageDumpDataBlocks;
          if ( v13 )
          {
            while ( v14 >= 0x10000 && MmIsAddressValidEx(v14) )
            {
              v14 += 4096LL;
              if ( !--v13 )
                goto LABEL_23;
            }
          }
          else
          {
LABEL_23:
            m = &PopHiberInfo;
            v15 = &PopSleepCheckpointStatus;
            v16 = 0;
            v17 = v43;
            do
            {
              v18 = 0;
              for ( j = *((_QWORD *)v17 + 1); v18 < *v17; j += 16LL )
              {
                v20 = *(_QWORD *)(j + 8);
                if ( (unsigned __int64)m < v20 && (unsigned __int64)v15 > *(_QWORD *)j )
                {
                  if ( (unsigned __int64)m < *(_QWORD *)j )
                  {
                    if ( (unsigned __int64)v15 <= v20 )
                      v15 = *(int **)j;
                  }
                  else
                  {
                    if ( (unsigned __int64)v15 <= v20 )
                      goto LABEL_36;
                    m = *(ULONG **)(j + 8);
                  }
                }
                ++v18;
              }
              ++v16;
              v17 += 4;
            }
            while ( !v16 );
            if ( (unsigned int)v12 < 0x100 )
            {
              v21 = 2 * v12;
              LODWORD(v12) = v12 + 1;
              IopTriageDumpDataBlocks[v21] = m;
              IopTriageDumpDataBlocks[v21 + 1] = v15;
            }
          }
LABEL_36:
          IopNumTriageDumpDataBlocks = v12;
          if ( IopTriageDumpDataArray )
            KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopHiberInfo, (PVOID)0xD8, (SIZE_T)m);
          v22 = (unsigned int)IopNumTriageDumpDataBlocks;
          v45[0] = IopNumTriageDumpDataBlocks;
          v45[1] = 256;
          v46 = IopTriageDumpDataBlocks;
          v23 = (((unsigned __int64)&PopAction & 0xFFF) + 4551) >> 12;
          v24 = (unsigned __int64)&PopAction & 0xFFFFFFFFFFFFF000uLL;
          if ( v23 )
          {
            while ( v24 >= 0x10000 && MmIsAddressValidEx(v24) )
            {
              v24 += 4096LL;
              if ( !--v23 )
                goto LABEL_42;
            }
          }
          else
          {
LABEL_42:
            m = &PopAction;
            v25 = &PopShutdownPowerOffPolicy;
            v26 = 0;
            v27 = v45;
            do
            {
              v28 = 0;
              for ( k = *((_QWORD *)v27 + 1); v28 < *v27; k += 16LL )
              {
                v30 = *(_QWORD *)(k + 8);
                if ( (unsigned __int64)m < v30 && (unsigned __int64)v25 > *(_QWORD *)k )
                {
                  if ( (unsigned __int64)m < *(_QWORD *)k )
                  {
                    if ( (unsigned __int64)v25 <= v30 )
                      v25 = *(char **)k;
                  }
                  else
                  {
                    if ( (unsigned __int64)v25 <= v30 )
                      goto LABEL_55;
                    m = *(ULONG **)(k + 8);
                  }
                }
                ++v28;
              }
              ++v26;
              v27 += 4;
            }
            while ( !v26 );
            if ( (unsigned int)v22 < 0x100 )
            {
              v31 = 2 * v22;
              LODWORD(v22) = v22 + 1;
              IopTriageDumpDataBlocks[v31] = m;
              IopTriageDumpDataBlocks[v31 + 1] = v25;
            }
          }
LABEL_55:
          IopNumTriageDumpDataBlocks = v22;
          if ( IopTriageDumpDataArray )
            KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopAction, (PVOID)0x1C8, (SIZE_T)m);
          if ( *(_QWORD *)&qword_140C23A98 )
            IoAddTriageDumpDataBlock(qword_140C23A98, (PVOID)0x1D8);
          if ( qword_140C23AA0 )
            IoAddTriageDumpDataBlock(qword_140C23AA0, (PVOID)0x1C8);
          v32 = (unsigned int)IopNumTriageDumpDataBlocks;
          v47[0] = IopNumTriageDumpDataBlocks;
          v47[1] = 256;
          v48 = IopTriageDumpDataBlocks;
          v33 = (((unsigned __int64)&PopCB & 0xFFF) + 4623) >> 12;
          v34 = (unsigned __int64)&PopCB & 0xFFFFFFFFFFFFF000uLL;
          if ( v33 )
          {
            while ( v34 >= 0x10000 && MmIsAddressValidEx(v34) )
            {
              v34 += 4096LL;
              if ( !--v33 )
                goto LABEL_65;
            }
          }
          else
          {
LABEL_65:
            v35 = &PopCB;
            v36 = &unk_140C23E50;
            v37 = 0;
            v38 = v47;
            do
            {
              v39 = 0;
              for ( m = (ULONG *)*((_QWORD *)v38 + 1); v39 < *v38; m += 4 )
              {
                v40 = *((_QWORD *)m + 1);
                if ( (unsigned __int64)v35 < v40 && (unsigned __int64)v36 > *(_QWORD *)m )
                {
                  if ( (unsigned __int64)v35 < *(_QWORD *)m )
                  {
                    if ( (unsigned __int64)v36 <= v40 )
                      v36 = *(void **)m;
                  }
                  else
                  {
                    if ( (unsigned __int64)v36 <= v40 )
                      goto LABEL_78;
                    v35 = (ULONG *)*((_QWORD *)m + 1);
                  }
                }
                ++v39;
              }
              ++v37;
              v38 += 4;
            }
            while ( !v37 );
            if ( (unsigned int)v32 < 0x100 )
            {
              v41 = 2 * v32;
              LODWORD(v32) = v32 + 1;
              IopTriageDumpDataBlocks[v41] = v35;
              IopTriageDumpDataBlocks[v41 + 1] = v36;
            }
          }
LABEL_78:
          IopNumTriageDumpDataBlocks = v32;
          if ( IopTriageDumpDataArray )
            KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopCB, (PVOID)0x210, (SIZE_T)m);
          KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, v0, 0LL);
        }
        PopSetBootPhaseRange(v0, v8, v7);
      }
    }
    else if ( v1 != 9 )
    {
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v1, 0LL);
    }
  }
  PoSetHiberRange(0LL, 0x10000u, XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
