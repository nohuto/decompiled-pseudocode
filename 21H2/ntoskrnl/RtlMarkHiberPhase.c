/*
 * XREFs of RtlMarkHiberPhase @ 0x14038D4F0
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140A4F19C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x14027B6A4 (MiGetPhysicalAddress.c)
 *     MmIsAddressValidEx @ 0x14028FBF0 (MmIsAddressValidEx.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     KeAddTriageDumpDataBlock @ 0x1403D7DF0 (KeAddTriageDumpDataBlock.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PopSetBootPhaseRange @ 0x140A4F990 (PopSetBootPhaseRange.c)
 */

void RtlMarkHiberPhase()
{
  ULONG_PTR v0; // r13
  int v1; // eax
  unsigned __int64 v2; // rsi
  unsigned __int64 i; // rbp
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  SIZE_T *v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned int v14; // edx
  char *v15; // rcx
  ULONG *j; // r8
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  unsigned int v22; // edx
  char *v23; // rcx
  ULONG *k; // r8
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned int v30; // edx
  char *v31; // rcx
  ULONG *m; // r8
  unsigned __int64 v33; // r10
  __int64 v34; // rax
  unsigned int v35; // [rsp+30h] [rbp-78h]
  unsigned int v36; // [rsp+40h] [rbp-68h]
  unsigned int v37; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v40; // [rsp+C0h] [rbp+18h]
  ULONG_PTR v41; // [rsp+C8h] [rbp+20h]

  if ( (KiBugCheckActive & 3) == 0 )
  {
    v0 = qword_140C22800;
    v41 = qword_140C22800;
    if ( !qword_140C22800 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v1 = *(_DWORD *)(qword_140C22800 + 184);
    if ( v1 == 8 )
    {
      v2 = (unsigned __int64)&XpressHashFunction >> 12;
      for ( i = (unsigned __int64)&byte_1400108CF >> 12; v2 < i; v2 += v7 )
      {
        v38 = 0;
        v39 = 0LL;
        v40 = v2 << 12;
        if ( (unsigned int)MiGetPhysicalAddress(v2 << 12, (__int64 *)&v39, &v38) )
          v4 = v39;
        else
          v4 = 0LL;
        v5 = v4 >> 12;
        v6 = v2 + 1;
        v7 = 1LL;
        if ( v2 + 1 < i )
        {
          v8 = v40;
          do
          {
            v38 = 0;
            v39 = 0LL;
            if ( (unsigned int)MiGetPhysicalAddress(v8 + (v7 << 12), (__int64 *)&v39, &v38) )
              v9 = v39;
            else
              v9 = 0LL;
            if ( v5 - v2 + v6 != v9 >> 12 )
              break;
            ++v7;
            ++v6;
          }
          while ( v6 < i );
          v0 = v41;
        }
        if ( *(_BYTE *)(v0 + 28) )
        {
          IoAddTriageDumpDataBlock(v0 & 0xFFFFF000, (PVOID)(((v0 & 0xFFF) + 4551) & 0xFFFFF000));
          v11 = (unsigned int)IopNumTriageDumpDataBlocks;
          v35 = IopNumTriageDumpDataBlocks;
          v12 = (((unsigned __int64)&PopHiberInfo & 0xFFF) + 4311) >> 12;
          v13 = (unsigned __int64)&PopHiberInfo & 0xFFFFFFFFFFFFF000uLL;
          if ( v12 )
          {
            while ( v13 >= 0x10000 && MmIsAddressValidEx(v13) )
            {
              v13 += 4096LL;
              if ( !--v12 )
                goto LABEL_23;
            }
          }
          else
          {
LABEL_23:
            v14 = 0;
            v15 = (char *)IopTriageDumpDataBlocks;
            v10 = &PopShutdownPowerOffPolicy;
            for ( j = &PopHiberInfo; v14 < v35; v15 += 16 )
            {
              v17 = *((_QWORD *)v15 + 1);
              if ( (unsigned __int64)j < v17 && (unsigned __int64)v10 > *(_QWORD *)v15 )
              {
                if ( (unsigned __int64)j < *(_QWORD *)v15 )
                {
                  if ( (unsigned __int64)v10 <= v17 )
                    v10 = *(SIZE_T **)v15;
                }
                else
                {
                  if ( (unsigned __int64)v10 <= v17 )
                    goto LABEL_28;
                  j = (ULONG *)*((_QWORD *)v15 + 1);
                }
              }
              ++v14;
            }
            if ( (unsigned int)v11 < 0x100 )
            {
              v18 = 2 * v11;
              LODWORD(v11) = v11 + 1;
              IopTriageDumpDataBlocks[v18] = j;
              IopTriageDumpDataBlocks[v18 + 1] = v10;
            }
          }
LABEL_28:
          IopNumTriageDumpDataBlocks = v11;
          if ( IopTriageDumpDataArray )
            KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopHiberInfo, (PVOID)0xD8, (SIZE_T)v10);
          v19 = (unsigned int)IopNumTriageDumpDataBlocks;
          v36 = IopNumTriageDumpDataBlocks;
          v20 = (((unsigned __int64)&PopAction & 0xFFF) + 4551) >> 12;
          v21 = (unsigned __int64)&PopAction & 0xFFFFFFFFFFFFF000uLL;
          if ( v20 )
          {
            while ( v21 >= 0x10000 && MmIsAddressValidEx(v21) )
            {
              v21 += 4096LL;
              if ( !--v20 )
                goto LABEL_34;
            }
          }
          else
          {
LABEL_34:
            v22 = 0;
            v23 = (char *)IopTriageDumpDataBlocks;
            v10 = &Size;
            for ( k = &PopAction; v22 < v36; v23 += 16 )
            {
              v25 = *((_QWORD *)v23 + 1);
              if ( (unsigned __int64)k < v25 && (unsigned __int64)v10 > *(_QWORD *)v23 )
              {
                if ( (unsigned __int64)k < *(_QWORD *)v23 )
                {
                  if ( (unsigned __int64)v10 <= v25 )
                    v10 = *(SIZE_T **)v23;
                }
                else
                {
                  if ( (unsigned __int64)v10 <= v25 )
                    goto LABEL_39;
                  k = (ULONG *)*((_QWORD *)v23 + 1);
                }
              }
              ++v22;
            }
            if ( (unsigned int)v19 < 0x100 )
            {
              v26 = 2 * v19;
              LODWORD(v19) = v19 + 1;
              IopTriageDumpDataBlocks[v26] = k;
              IopTriageDumpDataBlocks[v26 + 1] = v10;
            }
          }
LABEL_39:
          IopNumTriageDumpDataBlocks = v19;
          if ( IopTriageDumpDataArray )
            KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopAction, (PVOID)0x1C8, (SIZE_T)v10);
          if ( *(_QWORD *)&qword_140C227F8 )
            IoAddTriageDumpDataBlock(qword_140C227F8, (PVOID)0x1D8);
          if ( qword_140C22800 )
            IoAddTriageDumpDataBlock(qword_140C22800, (PVOID)0x1C8);
          v27 = (unsigned int)IopNumTriageDumpDataBlocks;
          v37 = IopNumTriageDumpDataBlocks;
          v28 = (((unsigned __int64)&PopCB & 0xFFF) + 4631) >> 12;
          v29 = (unsigned __int64)&PopCB & 0xFFFFFFFFFFFFF000uLL;
          if ( v28 )
          {
            while ( v29 >= 0x10000 && MmIsAddressValidEx(v29) )
            {
              v29 += 4096LL;
              if ( !--v28 )
                goto LABEL_45;
            }
          }
          else
          {
LABEL_45:
            v30 = 0;
            v31 = (char *)IopTriageDumpDataBlocks;
            v10 = &qword_140C22BB8;
            for ( m = &PopCB; v30 < v37; v31 += 16 )
            {
              v33 = *((_QWORD *)v31 + 1);
              if ( (unsigned __int64)m < v33 && (unsigned __int64)v10 > *(_QWORD *)v31 )
              {
                if ( (unsigned __int64)m < *(_QWORD *)v31 )
                {
                  if ( (unsigned __int64)v10 <= v33 )
                    v10 = *(SIZE_T **)v31;
                }
                else
                {
                  if ( (unsigned __int64)v10 <= v33 )
                    goto LABEL_50;
                  m = (ULONG *)*((_QWORD *)v31 + 1);
                }
              }
              ++v30;
            }
            if ( (unsigned int)v27 < 0x100 )
            {
              v34 = 2 * v27;
              LODWORD(v27) = v27 + 1;
              IopTriageDumpDataBlocks[v34] = m;
              IopTriageDumpDataBlocks[v34 + 1] = v10;
            }
          }
LABEL_50:
          IopNumTriageDumpDataBlocks = v27;
          if ( IopTriageDumpDataArray )
            KeAddTriageDumpDataBlock(IopTriageDumpDataArray, (ULONG)&PopCB, (PVOID)0x218, (SIZE_T)v10);
          KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, v0, 0LL);
        }
        PopSetBootPhaseRange(v0, v5, v7);
      }
    }
    else if ( v1 != 9 )
    {
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, *(unsigned int *)(qword_140C22800 + 184), 0LL);
    }
  }
  PoSetHiberRange(0LL, 0x10000u, XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
