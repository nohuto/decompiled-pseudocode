/*
 * XREFs of HalpChannelInitializeStaticConfiguration @ 0x140B63680
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140B63268 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140B633D4 (HalpInitializeConfigurationFromMadt.c)
 * Callees:
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     HalpValidateMpns @ 0x140932D74 (HalpValidateMpns.c)
 *     HalpSelectFeasibleLowPowerState @ 0x140B8F7F8 (HalpSelectFeasibleLowPowerState.c)
 */

void HalpChannelInitializeStaticConfiguration()
{
  unsigned __int16 v0; // r14
  unsigned __int16 *v1; // rbx
  unsigned __int64 v2; // r15
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebp
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int16 i; // si
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int16 *v19; // r12
  __int16 v20; // si
  unsigned int v21; // edi
  __int64 v22; // rbx
  __int64 v23; // r10
  char v24; // cl
  char v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int16 v26; // [rsp+78h] [rbp+10h]
  unsigned __int64 v27; // [rsp+80h] [rbp+18h]
  unsigned __int64 v28; // [rsp+88h] [rbp+20h]

  v27 = 0LL;
  v25 = 0;
  v28 = 0LL;
  if ( HalpChannelMemoryRangeCount )
  {
    if ( *(_BYTE *)(HalpAcpiMpst + 8) == 1 )
    {
      v0 = *(_WORD *)(HalpAcpiMpst + 40);
      v1 = (unsigned __int16 *)(HalpAcpiMpst + 44);
      v2 = -1LL;
      v3 = HalpAcpiMpst + *(unsigned int *)(HalpAcpiMpst + 4);
      v26 = v0;
      v4 = 0;
      v5 = 0LL;
      v6 = 0LL;
      for ( i = 0; i < v0; v1 = (unsigned __int16 *)((char *)v1 + *((unsigned int *)v1 + 1)) )
      {
        if ( (*(_BYTE *)v1 & 1) != 0 )
        {
          if ( (*(_BYTE *)v1 & 4) != 0 )
            goto LABEL_45;
          v8 = *((unsigned int *)v1 + 6);
          if ( (_DWORD)v8 )
          {
            if ( (unsigned __int64)&v1[v8 + 16] > v3 )
              goto LABEL_45;
            qsort(
              v1 + 16,
              (unsigned int)v8,
              2uLL,
              (int (__cdecl *)(const void *, const void *))HalpMpsValueAscendingSort);
            v27 = *((_QWORD *)v1 + 1);
            v9 = v27 >> 12;
            v10 = v27 >> 12;
            if ( v27 >> 12 >= v2 )
              v10 = v2;
            v2 = v10;
            v28 = *((_QWORD *)v1 + 2);
            v11 = v9 + (v28 >> 12) - 1;
            v12 = v11;
            if ( v11 <= v5 )
              v12 = v5;
            v6 += v28 >> 12;
            v13 = 0;
            v5 = v12;
            v14 = 0;
            if ( HalpNumaMemoryRanges )
            {
              if ( v9 >= *(_QWORD *)HalpNumaMemoryRanges && v9 >= *((_QWORD *)HalpNumaMemoryRanges + 2) )
              {
                v15 = 1;
                do
                {
                  ++v15;
                  ++v14;
                }
                while ( v9 >= *((_QWORD *)HalpNumaMemoryRanges + 2 * v15) );
                v0 = v26;
                v13 = 0;
              }
              v14 = *((_DWORD *)HalpNumaMemoryRanges + 4 * v14 + 2);
              if ( v11 >= *(_QWORD *)HalpNumaMemoryRanges && v11 >= *((_QWORD *)HalpNumaMemoryRanges + 2) )
              {
                v16 = 1;
                do
                {
                  ++v16;
                  ++v13;
                }
                while ( v11 >= *((_QWORD *)HalpNumaMemoryRanges + 2 * v16) );
                v0 = v26;
              }
              if ( *((_DWORD *)HalpNumaMemoryRanges + 4 * v13 + 2) != v14 )
                goto LABEL_45;
            }
            v17 = 2LL * v4;
            *((_QWORD *)HalpChannelMemoryRanges + v17) = v1;
            *((_WORD *)HalpChannelMemoryRanges + 4 * v17 + 4) = v1[1];
            ++v4;
            *((_WORD *)HalpChannelMemoryRanges + 4 * v17 + 5) = v14;
          }
        }
        ++i;
      }
      if ( (!HalpNumaMemoryRanges || v2 == HalpMinNumaPage && v5 == HalpMaxNumaPage && v6 == HalpNumaPageCount)
        && (unsigned __int64)(v1 + 1) <= v3 )
      {
        v18 = *v1;
        v19 = v1 + 2;
        if ( (unsigned __int64)&v1[14 * v18 + 2] <= v3 )
        {
          qsort(HalpChannelMemoryRanges, v4, 0x10uLL, HalpChannelMpnIdSort);
          if ( (unsigned int)HalpValidateMpns() )
          {
            qsort(HalpChannelMemoryRanges, v4, 0x10uLL, HalpChannelAssignmentSort);
            v20 = 0;
            v21 = 0;
            if ( !v4 )
            {
LABEL_44:
              qsort(HalpChannelMemoryRanges, v4, 0x10uLL, HalpChannelAscendingSort);
              *((_QWORD *)HalpChannelMemoryRanges + 2 * v21) = -1LL;
              *(_QWORD *)HalpChannelMemoryRanges = 0LL;
              return;
            }
            v22 = 0LL;
            while ( 1 )
            {
              v23 = *(_QWORD *)((char *)HalpChannelMemoryRanges + v22);
              v27 = *(_QWORD *)(v23 + 8);
              *(_QWORD *)((char *)HalpChannelMemoryRanges + v22) = v27 >> 12;
              if ( v21
                && *(_WORD *)((char *)HalpChannelMemoryRanges + v22 + 10) == *((_WORD *)HalpChannelMemoryRanges
                                                                             + 8 * v21
                                                                             - 3) )
              {
                if ( *(_WORD *)((char *)HalpChannelMemoryRanges + v22 + 8) != *((_WORD *)HalpChannelMemoryRanges
                                                                              + 8 * v21
                                                                              - 4) )
                  ++v20;
              }
              else
              {
                v20 = 0;
              }
              *(_WORD *)((char *)HalpChannelMemoryRanges + v22 + 12) = v20;
              if ( (unsigned int)HalpSelectFeasibleLowPowerState(v23, &v25, (unsigned __int16)v18, v19) != 1 )
                break;
              v24 = v25;
              if ( v25 )
              {
                *((_BYTE *)HalpChannelMemoryRanges + v22 + 14) = 1;
                *((_BYTE *)HalpChannelMemoryRanges + v22 + 15) = v24;
              }
              ++v21;
              v22 += 16LL;
              if ( v21 >= v4 )
                goto LABEL_44;
            }
          }
        }
      }
    }
LABEL_45:
    HalpChannelMemoryRangeCount = 0;
    HalpChannelMemoryRanges = 0LL;
  }
}
