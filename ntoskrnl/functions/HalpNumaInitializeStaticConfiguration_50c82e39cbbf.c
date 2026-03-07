void *__fastcall HalpNumaInitializeStaticConfiguration(__int64 a1)
{
  __int64 v1; // r14
  void *result; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // esi
  unsigned int v10; // ebx
  char v11; // r15
  int v12; // r12d
  __int64 v13; // r10
  unsigned __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int8 *v17; // r10
  __int64 v18; // r11
  int v19; // r8d
  __int64 v20; // r11
  __int64 v21; // r9
  unsigned int v22; // ecx
  int v23; // r11d
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r9d
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 v35; // rdx
  unsigned int v36; // r8d
  __int64 v37; // r11
  unsigned int v38; // r10d
  unsigned int v39; // ecx
  __int64 Table; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // r10d
  unsigned int v46; // r11d
  unsigned int v47; // ebx
  int v48; // ebx
  unsigned int v49; // edi
  __int16 v50; // ax
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // r9
  __int64 v54; // rax
  unsigned int *v55; // rdi
  unsigned int *v56; // r14
  int v57; // ebx
  unsigned int v58; // r11d
  _QWORD *v59; // rsi
  unsigned int v60; // r10d
  unsigned int v61; // edx
  unsigned int v62; // r10d
  unsigned int v63; // r8d
  unsigned int v64; // edx
  __int16 v65; // ax
  __int64 v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rbx
  unsigned int v70; // edi
  unsigned int i; // esi
  int v72; // r15d
  int AvailableProximityId; // eax
  __int64 v74; // r11
  int v75; // r12d
  __int64 v76; // rcx
  unsigned int v77; // r10d
  int v78; // r9d
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r10
  bool v82; // zf
  unsigned int v83; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v84; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v85[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int8 v87; // [rsp+A8h] [rbp+50h]
  unsigned int v88; // [rsp+B8h] [rbp+60h] BYREF

  HalpNumaInitializationComplete = 1;
  v88 = 0;
  v85[0] = 0;
  v83 = 0;
  v84 = 0;
  v1 = a1;
  HalpAcpiMpst = HalpAcpiGetTable(a1, 1414746189, 0, 0);
  HalpAcpiSrat = HalpAcpiGetTable(v1, 1413567059, 0, 0);
  HalpAcpiMsct = HalpAcpiGetTable(v1, 1413698381, 0, 0);
  if ( !HalpAcpiSrat )
    return (void *)HalpInitializeConfigurationFromMadt(v1);
  v87 = *(_BYTE *)(HalpAcpiSrat + 8);
  result = (void *)HalpGetNumaProcMemoryCount(v85, &v84, &v83, &v88);
  if ( (_BYTE)result )
  {
    v3 = v83;
    v4 = v84;
    result = (void *)HalpAllocateNumaConfigData(v85[0], v84, v83, v88);
    if ( HalpNumaConfig )
    {
      if ( !v3
        || (result = (void *)HalpMmAllocateMemoryInternal(24 * v3, 1u), (HalpNumaSratMemoryRanges = result) != 0LL) )
      {
        v6 = 0;
        if ( v4 )
        {
          if ( v4 >= 4 )
          {
            v5 = HalpNumaConfig;
            if ( *(_QWORD *)HalpNumaConfig > (unsigned __int64)HalpNumaConfig
              || *(_QWORD *)HalpNumaConfig + 4 * (unsigned __int64)(v4 - 1) < HalpNumaConfig )
            {
              v7 = v4 & 0xFFFFFFFC;
              do
                v6 += 4;
              while ( v6 < v7 );
              memset(*(void **)HalpNumaConfig, -1, 16 * ((unsigned __int64)v7 >> 2));
            }
          }
          if ( v6 < v4 )
          {
            v5 = 4LL * v6;
            v8 = v4 - v6;
            do
            {
              *(_DWORD *)(v5 + *(_QWORD *)HalpNumaConfig) = -1;
              v5 += 4LL;
              --v8;
            }
            while ( v8 );
          }
        }
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = HalpAcpiSrat + 48;
        v14 = HalpAcpiSrat + *(unsigned int *)(HalpAcpiSrat + 4);
        if ( HalpAcpiSrat + 50 <= v14 )
        {
          v15 = HalpNumaConfig;
          while ( 1 )
          {
            v16 = *(unsigned __int8 *)(v13 + 1);
            if ( (unsigned __int8)v16 < 2u || v13 + v16 > v14 )
            {
LABEL_58:
              v1 = a1;
              goto LABEL_59;
            }
            LOBYTE(v5) = v87 >= 3u;
            if ( (unsigned __int8)HalpVerifySratEntryLengthAndFlag(v13, v5) )
              break;
            v13 = v18;
LABEL_57:
            if ( v13 + 2 > v14 )
              goto LABEL_58;
          }
          if ( *(_BYTE *)(HalpAcpiSrat + 8) == 1 )
          {
            v19 = v17[2];
          }
          else if ( *v17 )
          {
            if ( *v17 == 2 )
              v19 = *((_DWORD *)v17 + 1);
            else
              v19 = *(_DWORD *)(v17 + 2);
          }
          else
          {
            v19 = v17[2] + ((v17[9] + ((v17[10] + (v17[11] << 8)) << 8)) << 8);
          }
          v20 = HalpNumaConfig;
          v21 = 0LL;
          v22 = *(_DWORD *)(HalpNumaConfig + 56);
          if ( v22 )
          {
            do
            {
              if ( v19 == *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v21) )
                break;
              v21 = (unsigned int)(v21 + 1);
            }
            while ( (unsigned int)v21 < v22 );
          }
          if ( (_DWORD)v21 == v22 )
          {
            *(_DWORD *)(*(_QWORD *)(v15 + 24) + 4 * v21) = v19;
            *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 32) + 4 * v21) = v19;
            ++*(_DWORD *)(v20 + 56);
          }
          v5 = *v17;
          switch ( *v17 )
          {
            case 0u:
              goto LABEL_39;
            case 1u:
              v24 = *((_QWORD *)v17 + 1) >> 12;
              v25 = *((_QWORD *)v17 + 2) >> 12;
              v26 = v25 + v24 - 1;
              if ( v24 < HalpMinNumaPage )
                HalpMinNumaPage = *((_QWORD *)v17 + 1) >> 12;
              if ( v26 > HalpMaxNumaPage )
                HalpMaxNumaPage = v25 + v24 - 1;
              HalpNumaPageCount += v25;
              v27 = 2LL * v10;
              v5 = v10++;
              *((_QWORD *)HalpNumaMemoryRanges + v27) = v24;
              *((_DWORD *)HalpNumaMemoryRanges + 2 * v27 + 2) = v19;
              v28 = 3 * v5;
              v29 = HalpNumaSratMemoryRanges;
              *((_QWORD *)HalpNumaSratMemoryRanges + v28 + 1) = v24;
              v29[v28 + 2] = v26;
              LODWORD(v29[v28]) = v19;
              break;
            case 2u:
LABEL_39:
              if ( (_BYTE)v5 )
              {
                v23 = *((_DWORD *)v17 + 2);
              }
              else
              {
                v23 = v17[3];
                if ( v23 == 255 )
                  v23 = -1;
              }
              v5 = HalpNumaConfig;
              v30 = v9++;
              *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4 * v30) = v23;
              *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v30) = v19;
              ++*(_DWORD *)(*(_QWORD *)(v5 + 40) + 4 * v21);
              if ( v87 >= 3u )
              {
                if ( *v17 )
                  v31 = *((_DWORD *)v17 + 4);
                else
                  v31 = *((_DWORD *)v17 + 3);
                if ( v11 )
                {
                  if ( v12 != v31 )
                    HalpMaximumClockDomainCount = 2;
                }
                else
                {
                  v11 = 1;
                  v12 = v31;
                }
              }
              break;
          }
          v13 = (__int64)&v17[v17[1]];
          goto LABEL_57;
        }
LABEL_59:
        HalpNumaMemoryRangeCount = v10;
        LODWORD(HalpNumaSratMemoryRangeCount) = v10;
        *(_DWORD *)(HalpNumaConfig + 60) = v9;
        qsort(HalpNumaMemoryRanges, v10, 0x10uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
        qsort(
          HalpNumaSratMemoryRanges,
          (unsigned int)HalpNumaSratMemoryRangeCount,
          0x18uLL,
          (int (__cdecl *)(const void *, const void *))HalpCompareNumaMemoryRanges);
        v32 = 0;
        if ( v10 > 1 )
        {
          v33 = 0LL;
          v34 = v10 - 1;
          v35 = 16LL;
          do
          {
            if ( *(_DWORD *)((char *)HalpNumaMemoryRanges + v33 + 8) != *(_DWORD *)((char *)HalpNumaMemoryRanges
                                                                                  + v35
                                                                                  + 8) )
            {
              v33 = 16LL * (unsigned int)++v32;
              *(_OWORD *)((char *)HalpNumaMemoryRanges + v33) = *(_OWORD *)((char *)HalpNumaMemoryRanges + v35);
            }
            v35 += 16LL;
            --v34;
          }
          while ( v34 );
        }
        v36 = 0;
        HalpNumaMemoryRangeCount = v32 + 1;
        HalpNumaMaxMemoryRangeCount = v32 + 1;
        *((_QWORD *)HalpNumaMemoryRanges + 2 * (unsigned int)(v32 + 1)) = -1LL;
        *((_DWORD *)HalpNumaMemoryRanges + 4 * (unsigned int)(v32 + 1) + 2) = 0;
        *(_QWORD *)HalpNumaMemoryRanges = 0LL;
        if ( v32 != -1 )
        {
          v37 = HalpNumaConfig;
          do
          {
            v38 = *(_DWORD *)(v37 + 56);
            v39 = 0;
            if ( v38 )
            {
              while ( *((_DWORD *)HalpNumaMemoryRanges + 4 * v36 + 2) != *(_DWORD *)(*(_QWORD *)(v37 + 24) + 4LL * v39) )
              {
                if ( ++v39 >= v38 )
                  goto LABEL_71;
              }
              *((_DWORD *)HalpNumaMemoryRanges + 4 * v36 + 2) = v39;
            }
LABEL_71:
            ++v36;
          }
          while ( v36 < v32 + 1 );
        }
        if ( HalpAcpiMsct )
          HalpUpdateConfigurationFromMsct(
            HalpNumaConfig + 56,
            *(_DWORD *)(HalpNumaConfig + 64),
            HalpNumaConfig + 60,
            *(_DWORD *)(HalpNumaConfig + 68),
            (__int64)&HalpMaximumClockDomainCount,
            *(_QWORD *)(HalpNumaConfig + 24),
            *(_QWORD *)(HalpNumaConfig + 40),
            *(_QWORD *)(HalpNumaConfig + 16));
        Table = HalpAcpiGetTable(v1, 1414089811, 0, 0);
        v44 = Table;
        if ( !Table )
          goto LABEL_84;
        v45 = *(_DWORD *)(Table + 36);
        v42 = v45 * v45 + 44;
        if ( (unsigned int)v42 > *(_DWORD *)(Table + 4) )
          goto LABEL_85;
        v43 = HalpNumaConfig;
        v46 = 0;
        v41 = *(unsigned int *)(HalpNumaConfig + 56);
        if ( (_DWORD)v41 )
        {
          while ( 1 )
          {
            v42 = v46;
            v47 = *(_DWORD *)(*(_QWORD *)(v43 + 24) + 4LL * v46);
            if ( v47 >= v45 )
              break;
            v48 = v45 * v47;
            v49 = 0;
            if ( (_DWORD)v41 )
            {
              do
              {
                v42 = v49;
                v41 = *(unsigned int *)(*(_QWORD *)(v43 + 24) + 4LL * v49);
                if ( (unsigned int)v41 >= v45 )
                  goto LABEL_85;
                v50 = *(unsigned __int8 *)((unsigned int)(v41 + v48) + v44 + 44);
                if ( (unsigned __int8)v50 < 0xAu )
                  goto LABEL_85;
                v51 = v49 + *(_DWORD *)(v43 + 64) * v46;
                ++v49;
                *(_WORD *)(*(_QWORD *)(v43 + 48) + 2 * v51) = v50 << 7;
              }
              while ( v49 < *(_DWORD *)(v43 + 56) );
            }
            v41 = 1280LL;
            v52 = *(_QWORD *)(v43 + 48);
            v42 = v46 * (*(_DWORD *)(v43 + 64) + 1);
            if ( *(_WORD *)(v52 + 2 * v42) != 1280 )
              break;
            *(_WORD *)(v52 + 2 * v42) = 0;
            ++v46;
            v41 = *(unsigned int *)(v43 + 56);
            if ( v46 >= (unsigned int)v41 )
              goto LABEL_84;
          }
        }
        else
        {
LABEL_84:
          HalpAcpiSlit = v44;
        }
LABEL_85:
        v53 = *(_QWORD *)(*(_QWORD *)(v1 + 240) + 296LL);
        if ( !HalpAcpiSlit )
        {
          if ( !v53
            || (v41 = HalpNumaConfig,
                v54 = *(unsigned int *)v53,
                v55 = (unsigned int *)(HalpNumaConfig + 56),
                v43 = *(unsigned int *)(HalpNumaConfig + 56),
                (_DWORD)v54 != (_DWORD)v43) )
          {
LABEL_106:
            v41 = HalpNumaConfig;
            v43 = 0LL;
            v67 = *(_DWORD *)(HalpNumaConfig + 56);
            if ( v67 )
            {
              do
              {
                v53 = 0LL;
                if ( v67 )
                {
                  do
                  {
                    v68 = (unsigned int)(v53 + *(_DWORD *)(v41 + 64) * v43);
                    v53 = (unsigned int)(v53 + 1);
                    *(_WORD *)(*(_QWORD *)(v41 + 48) + 2 * v68) = 1;
                  }
                  while ( (unsigned int)v53 < *(_DWORD *)(v41 + 56) );
                }
                v42 = (unsigned int)(v43 * (*(_DWORD *)(v41 + 64) + 1));
                v43 = (unsigned int)(v43 + 1);
                *(_WORD *)(*(_QWORD *)(v41 + 48) + 2 * v42) = 0;
                v67 = *(_DWORD *)(v41 + 56);
              }
              while ( (unsigned int)v43 < v67 );
            }
            goto LABEL_110;
          }
          v56 = (unsigned int *)(v53 + 4 * v54);
          v57 = 0;
          v58 = 0;
          if ( (_DWORD)v43 )
          {
            v59 = (_QWORD *)(HalpNumaConfig + 24);
            do
            {
              v60 = *(_DWORD *)v53;
              v61 = 0;
              if ( *(_DWORD *)v53 )
              {
                v42 = *(unsigned int *)(*v59 + 4LL * v58);
                while ( *(_DWORD *)(v53 + 4LL * v61 + 4) != (_DWORD)v42 )
                {
                  if ( ++v61 >= v60 )
                    goto LABEL_96;
                }
                v57 = v61 * v60;
              }
LABEL_96:
              if ( v61 == v60 )
                goto LABEL_106;
              v62 = 0;
              if ( (_DWORD)v43 )
              {
                do
                {
                  v63 = *(_DWORD *)v53;
                  v64 = 0;
                  if ( *(_DWORD *)v53 )
                  {
                    v42 = *(unsigned int *)(*v59 + 4LL * v62);
                    do
                    {
                      if ( *(_DWORD *)(v53 + 4LL * v64 + 4) == (_DWORD)v42 )
                        break;
                      ++v64;
                    }
                    while ( v64 < v63 );
                  }
                  if ( v64 == v63 )
                    goto LABEL_106;
                  v65 = *((_WORD *)v56 + v57 + v64 + 2);
                  v42 = *(_QWORD *)(HalpNumaConfig + 48);
                  v66 = v62 + *(_DWORD *)(HalpNumaConfig + 64) * v58;
                  ++v62;
                  *(_WORD *)(v42 + 2 * v66) = v65;
                }
                while ( v62 < *v55 );
              }
              v41 = HalpNumaConfig;
              v42 = v58 * (*(_DWORD *)(HalpNumaConfig + 64) + 1);
              ++v58;
              *(_WORD *)(*(_QWORD *)(HalpNumaConfig + 48) + 2 * v42) = 0;
              v43 = *v55;
            }
            while ( v58 < (unsigned int)v43 );
          }
        }
LABEL_110:
        if ( HalpSplitLargeNumaNodes )
        {
          v69 = HalpNumaConfig;
          HalpNumaSortProcessors(
            *(unsigned int *)(HalpNumaConfig + 60),
            *(_QWORD *)(HalpNumaConfig + 16),
            *(_QWORD *)HalpNumaConfig,
            v53);
          v70 = *(_DWORD *)(v69 + 56);
          for ( i = 0; i < v70; ++i )
          {
            v72 = HalpMaximumGroupSize;
            if ( *(_DWORD *)(*(_QWORD *)(v69 + 40) + 4LL * i) > (unsigned int)HalpMaximumGroupSize )
            {
              AvailableProximityId = HalpGetAvailableProximityId();
              v74 = HalpNumaConfig;
              *(_DWORD *)(v69 + 56) = v70 + 1;
              v75 = AvailableProximityId;
              v76 = *(_QWORD *)(v69 + 40);
              v77 = 0;
              v78 = *(_DWORD *)(v76 + 4LL * i);
              *(_DWORD *)(v76 + 4LL * i) = v72;
              v53 = (unsigned int)(v78 - v72);
              *(_DWORD *)(*(_QWORD *)(v69 + 40) + 4LL * v70) = v53;
              *(_DWORD *)(*(_QWORD *)(v74 + 24) + 4LL * v70) = AvailableProximityId;
              for ( *(_DWORD *)(*(_QWORD *)(v74 + 32) + 4LL * v70) = *(_DWORD *)(*(_QWORD *)(v74 + 32) + 4LL * i);
                    v77 < v70;
                    *(_WORD *)(v43 + 2 * v80) = *(_WORD *)(v43 + 2 * v79) )
              {
                *(_WORD *)(*(_QWORD *)(v74 + 48) + 2LL * (v70 + *(_DWORD *)(v74 + 64) * v77)) = *(_WORD *)(*(_QWORD *)(v74 + 48) + 2LL * (*(_DWORD *)(v74 + 64) * v77 + i));
                v43 = *(_QWORD *)(v74 + 48);
                v79 = v77 + i * *(_DWORD *)(v74 + 64);
                v80 = v77 + v70 * *(_DWORD *)(v74 + 64);
                ++v77;
              }
              v42 = v70 * (*(_DWORD *)(HalpNumaConfig + 64) + 1);
              *(_WORD *)(*(_QWORD *)(HalpNumaConfig + 48) + 2 * v42) = 0;
              v41 = (unsigned int)(*(_DWORD *)(v69 + 60) - 1);
              if ( *(_DWORD *)(v69 + 60) != 1 )
              {
                do
                {
                  if ( !(_DWORD)v53 )
                    break;
                  v81 = *(_QWORD *)(v69 + 16);
                  v42 = *(unsigned int *)(*(_QWORD *)(v74 + 24) + 4LL * i);
                  if ( *(_DWORD *)(v81 + 4 * v41) == (_DWORD)v42 )
                  {
                    v53 = (unsigned int)(v53 - 1);
                    *(_DWORD *)(v81 + 4 * v41) = v75;
                  }
                  v82 = (_DWORD)v41 == 1;
                  v41 = (unsigned int)(v41 - 1);
                }
                while ( !v82 );
              }
            }
            v70 = *(_DWORD *)(v69 + 56);
          }
        }
        if ( HalpMaximumClockDomainCount != 1 )
          HalpTimerPlatformSourceForced = 1;
        return (void *)HalpChannelInitializeStaticConfiguration(v42, v41, v43, v53);
      }
    }
  }
  return result;
}
