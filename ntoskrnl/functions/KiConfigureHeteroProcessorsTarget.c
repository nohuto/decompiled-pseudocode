volatile signed __int32 *__fastcall KiConfigureHeteroProcessorsTarget(
        __int64 a1,
        _DWORD *a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  unsigned __int8 PerformanceClassRawValue; // r14
  __int64 v5; // rdi
  signed __int32 v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r12d
  unsigned int v10; // r9d
  __int64 v11; // r15
  unsigned int v12; // r13d
  _BYTE *v13; // r10
  struct _KPRCB *CurrentPrcb; // rbx
  _KHETRO_HWFEEDBACK_TYPE *HwFeedbackClassList; // rcx
  unsigned __int8 EfficiencyClassRawValue; // si
  __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // rcx
  __int16 v22; // ax
  __int64 v23; // r11
  int v24; // r9d
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 *v27; // r10
  __int64 v28; // r9
  unsigned int v29; // r11d
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // r13
  int v36; // r11d
  unsigned __int16 i; // r10
  __int16 v38; // r10
  __int64 v39; // rbx
  __int64 v40; // rdx
  unsigned int v41; // r12d
  _DWORD *v42; // r11
  __int64 v43; // rdi
  __int64 v44; // r14
  int *v45; // r8
  int v46; // eax
  __int64 v47; // rsi
  int v48; // r9d
  __int64 v49; // r15
  __int64 v50; // rcx
  _WORD *v51; // rbx
  _WORD *v52; // rdx
  _WORD *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r14
  __int64 v57; // r10
  __int64 v58; // r15
  __int64 v59; // r11
  __int64 v60; // rcx
  __int64 v61; // r11
  __int64 v62; // r15
  __int64 v63; // r10
  __int64 v64; // rsi
  __int64 v65; // rbx
  __int64 v66; // r14
  __int64 v67; // rax
  int v68; // r8d
  __int64 v69; // rcx
  __int64 v70; // rax
  signed __int32 v71; // eax
  unsigned int v72; // ebx
  volatile signed __int32 *result; // rax
  unsigned int v74; // [rsp+20h] [rbp-40h]
  int v75; // [rsp+24h] [rbp-3Ch]
  unsigned int v76; // [rsp+28h] [rbp-38h]
  int v77; // [rsp+28h] [rbp-38h]
  int v78; // [rsp+2Ch] [rbp-34h] BYREF
  int v79; // [rsp+30h] [rbp-30h] BYREF
  __int64 v80; // [rsp+38h] [rbp-28h] BYREF
  int *v81; // [rsp+40h] [rbp-20h]
  __int64 v82; // [rsp+48h] [rbp-18h] BYREF
  int v83; // [rsp+50h] [rbp-10h]
  int v84; // [rsp+54h] [rbp-Ch]
  _DWORD *v85; // [rsp+A8h] [rbp+48h]
  volatile signed __int32 *v86; // [rsp+B0h] [rbp+50h]

  v86 = a3;
  v85 = a2;
  PerformanceClassRawValue = 0;
  v5 = a4;
  v80 = 0LL;
  v84 = 0;
  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v8 = *(_DWORD *)a4 & 0x80000000;
    v78 = 0;
    if ( v8 != v7 )
    {
      do
        KeYieldProcessorEx(&v78);
      while ( (*(_DWORD *)v5 & 0x80000000) != v7 );
      a2 = v85;
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v7;
  }
  v9 = KeNumberProcessors_0;
  LOBYTE(v10) = 0;
  v11 = *(_QWORD *)a2;
  v76 = KeNumberProcessors_0;
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  v74 = v12;
  if ( v12 )
  {
    v13 = &unk_140D1D3A4;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      HwFeedbackClassList = CurrentPrcb->PowerState.HwFeedbackClassList;
      if ( HwFeedbackClassList )
      {
        PerformanceClassRawValue = HwFeedbackClassList->HwFeedbackClass[(unsigned __int8)v10].PerformanceClassRawValue;
        EfficiencyClassRawValue = HwFeedbackClassList->HwFeedbackClass[(unsigned __int8)v10].EfficiencyClassRawValue;
      }
      else
      {
        EfficiencyClassRawValue = 0;
      }
      LOBYTE(a3) = *v13;
      LOBYTE(HwFeedbackClassList) = PerformanceClassRawValue;
      LOBYTE(a2) = *(v13 - 8);
      v17 = KiComputeHgsScore(HwFeedbackClassList, a2, a3);
      LOBYTE(v19) = v18;
      *(_WORD *)((char *)CurrentPrcb + v20 - 16) = v17;
      LOBYTE(v21) = EfficiencyClassRawValue;
      v22 = KiComputeHgsScore(v21, v19, v18);
      *(_WORD *)((char *)&CurrentPrcb->MxCsr + v23) = v22;
      v10 = v24 + 1;
      v13 = (_BYTE *)(v25 + 1);
      PerformanceClassRawValue = 0;
    }
    while ( v10 < v12 );
    v5 = a4;
  }
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_99;
  v26 = 0LL;
  if ( v9 )
  {
    v27 = KiProcessorBlock;
    v28 = 0LL;
    do
    {
      v29 = 0;
      v30 = *v27;
      *(_BYTE *)(*v27 + 34056) = *(_BYTE *)(v28 + *(_QWORD *)(v11 + 8));
      if ( v12 )
      {
        do
        {
          v31 = *(unsigned __int8 *)(v30 + 208);
          v32 = v12 * (_DWORD)v26 + v29;
          *(_BYTE *)(v30 + 34058) = *(_BYTE *)(v11 + 4 * v32 + 24);
          v33 = 32 * v31;
          v34 = 32 * v31;
          *(_BYTE *)(v30 + 34057) = *(_BYTE *)(v11 + 4 * v32 + 25);
          if ( *(_BYTE *)(v11 + 4 * v32 + 25) )
            *(_QWORD *)((char *)&unk_140D20578 + v34) = *(_QWORD *)((_BYTE *)&unk_140D20578 + v33) & ~*(_QWORD *)(v30 + 200);
          else
            *(_QWORD *)((char *)&unk_140D20578 + v34) = *(_QWORD *)(v30 + 200) | *(_QWORD *)((char *)&unk_140D20578 + v33);
          ++v29;
        }
        while ( v29 < v12 );
        v9 = v76;
      }
      v26 = (unsigned int)(v26 + 1);
      ++v28;
      ++v27;
    }
    while ( (unsigned int)v26 < v9 );
    v5 = a4;
  }
  v35 = 0LL;
  v36 = 0;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; i = v38 + 1 )
  {
    v84 = 0;
    v82 = KeNodeBlock[i];
    v83 = *(_DWORD *)(v82 + 16);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v82, &v80) )
    {
      if ( !v35 )
        v35 = v80;
    }
  }
  KeHeteroSystem = 0;
  v39 = 0LL;
  KeHeteroSystemVirtual = 0;
  KeHeteroSystemQos = 0;
  if ( !v35 || v36 != 1 )
    goto LABEL_99;
  if ( v85[3] )
  {
    KeHeteroSystem = 1;
    KeHeteroSystemVirtual = 1;
    KeHeteroSystemQos = 1;
    goto LABEL_99;
  }
  if ( v85[4] )
  {
    KeHeteroSystemQos = v85[2];
    KeHeteroSystem = 1;
  }
  else
  {
    v39 = *(_QWORD *)(v35 + 128);
  }
  v41 = 0;
  if ( !KeIsMultiCoreClassesEnabled(1LL, v26) )
  {
    if ( !v74 )
      goto LABEL_98;
    v40 = (__int64)(v85 + 138);
    v55 = v39;
    v56 = v39;
    v57 = v39;
    v58 = v39;
    v59 = v39;
    while ( 1 )
    {
      if ( v85[4] )
      {
        v60 = *(unsigned __int16 *)(v35 + 136);
        if ( (unsigned __int16)v60 >= *(_WORD *)(v40 - 528) )
          v61 = 0LL;
        else
          v61 = *(_QWORD *)(v40 + 8 * v60 - 520);
        if ( (unsigned __int16)v60 >= *(_WORD *)(v40 - 264) )
          v62 = 0LL;
        else
          v62 = *(_QWORD *)(v40 + 8 * v60 - 256);
        if ( (unsigned __int16)v60 >= *(_WORD *)v40 )
          v63 = 0LL;
        else
          v63 = *(_QWORD *)(v40 + 8 * v60 + 8);
        if ( (unsigned __int16)v60 >= *(_WORD *)(v40 + 264) )
          v64 = 0LL;
        else
          v64 = *(_QWORD *)(v40 + 8 * v60 + 272);
        if ( (unsigned __int16)v60 >= *(_WORD *)(v40 + 528) )
          v65 = 0LL;
        else
          v65 = *(_QWORD *)(v40 + 8 * v60 + 536);
        if ( (unsigned __int16)v60 >= *(_WORD *)(v40 + 792) )
          v66 = 0LL;
        else
          v66 = *(_QWORD *)(v40 + 8 * v60 + 800);
        v67 = *(_QWORD *)(v35 + 128);
        v59 = v67 & v61;
        v58 = v67 & v62;
        v57 = v67 & v63;
        v55 = v67 & v64;
        v39 = v67 & v65;
        v56 = v67 & v66;
      }
      v68 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v69 = 3LL * (v41 + v68 * *(unsigned __int8 *)(v35 + 185));
          v70 = *(_QWORD *)(v35 + 192);
          if ( v68 == 1 )
          {
            *(_QWORD *)(v70 + 24LL * (v41 + *(unsigned __int8 *)(v35 + 185)) + 16) = v59;
            goto LABEL_92;
          }
          if ( v68 != 2 )
            break;
          *(_QWORD *)(v70 + 24LL * (v41 + 2 * *(unsigned __int8 *)(v35 + 185)) + 16) = v56;
LABEL_92:
          *(_QWORD *)(v70 + 8 * v69 + 8) = v59;
          *(_QWORD *)(v70 + 8 * v69) = v58;
LABEL_93:
          ++v68;
        }
        if ( v68 == 3 )
        {
          *(_QWORD *)(v70 + 24LL * (v41 + 3 * *(unsigned __int8 *)(v35 + 185))) = v55;
          *(_QWORD *)(v70 + 8 * v69 + 8) = v57;
          *(_QWORD *)(v70 + 8 * v69 + 16) = v57;
          goto LABEL_93;
        }
        if ( v68 == 4 )
          break;
        if ( (unsigned int)++v68 >= 5 )
          goto LABEL_96;
      }
      *(_QWORD *)(v70 + 24LL * (v41 + 4 * *(unsigned __int8 *)(v35 + 185))) = v55;
      *(_QWORD *)(v70 + 8 * v69 + 8) = v57;
      *(_QWORD *)(v70 + 8 * v69 + 16) = v39;
LABEL_96:
      ++v41;
      v40 += 12672LL;
      if ( v41 >= v74 )
      {
LABEL_97:
        v5 = a4;
        goto LABEL_98;
      }
    }
  }
  if ( v74 )
  {
    v42 = v85 + 6;
    v43 = v39;
    v44 = v39;
    do
    {
      v45 = KiDynamicHeteroCpuPolicy;
      v46 = 0;
      v77 = 0;
      v47 = 34LL;
      do
      {
        v48 = 2 * v46;
        v81 = v45;
        v75 = 2 * v46;
        v49 = 0LL;
        do
        {
          if ( v85[4] )
          {
            v50 = *(unsigned __int16 *)(v35 + 136);
            v51 = &v42[66 * v47 - 1848 + 66 * v49];
            if ( (unsigned __int16)v50 >= *v51 )
              v39 = 0LL;
            else
              v39 = *(_QWORD *)&v51[4 * v50 + 4];
            v52 = &v42[66 * v47 + 66 * v49];
            if ( (unsigned __int16)v50 >= *v52 )
              v43 = 0LL;
            else
              v43 = *(_QWORD *)&v52[4 * v50 + 4];
            v53 = &v42[66 * v47 - 924 + 66 * v49];
            if ( (unsigned __int16)v50 >= *v53 )
              v44 = 0LL;
            else
              v44 = *(_QWORD *)&v53[4 * v50 + 4];
          }
          v40 = *(_QWORD *)(v35 + 192) + 24LL * (v41 + v48 * *(unsigned __int8 *)(v35 + 185));
          if ( *v45 && (*v45 == 1 || *v45 == 3) )
            v54 = v44;
          else
            v54 = v39;
          *(_QWORD *)v40 = v43;
          v48 = v75 + 1;
          *(_QWORD *)(v40 + 8) = v44;
          ++v49;
          *(_QWORD *)(v40 + 16) = v54;
          v45 = v81 + 1;
          ++v75;
          ++v81;
        }
        while ( v49 < 2 );
        v47 += 2LL;
        v46 = v77 + 1;
        v77 = v46;
      }
      while ( v46 < 7 );
      ++v41;
      v42 += 3168;
    }
    while ( v41 < v74 );
    goto LABEL_97;
  }
LABEL_98:
  KiTraceLogHeteroRundown(&dword_140C02F60, v40);
LABEL_99:
  v71 = _InterlockedDecrement((volatile signed __int32 *)v5);
  v72 = ~v71 & 0x80000000;
  if ( (v71 & 0x7FFFFFFF) != 0 )
  {
    v79 = 0;
    while ( (*(_DWORD *)v5 & 0x80000000) != v72 )
      KeYieldProcessorEx(&v79);
  }
  else
  {
    *(_DWORD *)v5 = *(_DWORD *)(v5 + 4) | v72;
  }
  result = v86;
  _InterlockedDecrement(v86);
  return result;
}
