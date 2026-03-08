/*
 * XREFs of KeConfigureHeteroProcessors @ 0x14096F978
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x14037F6F0 (KiConfigureCpuSetSchedulingInformation.c)
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x14038F750 (KeQueryActiveProcessorAffinity2.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiComputeHgsScore @ 0x140574B60 (KiComputeHgsScore.c)
 *     KiConfigureHeteroMultiCoreProcessors @ 0x140970054 (KiConfigureHeteroMultiCoreProcessors.c)
 */

__int64 __fastcall KeConfigureHeteroProcessors(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r12
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  unsigned int v13; // r15d
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int8 v18; // r11
  unsigned __int8 v19; // r10
  unsigned __int8 v20; // bp
  unsigned __int8 v21; // r9
  unsigned __int8 v22; // r14
  unsigned int v23; // esi
  unsigned __int8 *v24; // r15
  __int64 *v25; // r12
  unsigned __int8 v26; // dl
  __int64 v27; // r11
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  unsigned __int8 v30; // al
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // al
  unsigned __int8 v33; // dl
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // cl
  unsigned __int8 v36; // dl
  unsigned __int8 v37; // cl
  unsigned __int8 *v38; // rsi
  unsigned __int16 v39; // ax
  char v40; // r8
  unsigned __int8 v41; // r9
  __int64 v42; // rbp
  __int16 v43; // ax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r10
  char v47; // r11
  __int64 v48; // r14
  __int64 v49; // rsi
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r9
  int v54; // esi
  unsigned __int16 *v55; // r14
  __int64 v56; // r15
  unsigned __int16 *v57; // rbp
  unsigned __int8 v58; // al
  unsigned __int16 *v59; // rcx
  int v60; // eax
  unsigned int v61; // edi
  char v63; // [rsp+20h] [rbp-98h]
  unsigned int v64; // [rsp+24h] [rbp-94h]
  unsigned __int16 v65; // [rsp+28h] [rbp-90h]
  unsigned __int8 v66; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v67; // [rsp+30h] [rbp-88h]
  unsigned int v68; // [rsp+34h] [rbp-84h]
  __int64 v69; // [rsp+38h] [rbp-80h]
  int v70; // [rsp+40h] [rbp-78h]
  unsigned __int8 *v71; // [rsp+48h] [rbp-70h]
  __int64 v72; // [rsp+50h] [rbp-68h]
  __int64 v73; // [rsp+50h] [rbp-68h]
  int v74; // [rsp+58h] [rbp-60h]
  __int64 v75; // [rsp+60h] [rbp-58h]
  unsigned __int16 *v76; // [rsp+68h] [rbp-50h]
  unsigned __int8 v77; // [rsp+C0h] [rbp+8h]
  unsigned __int8 v80; // [rsp+D8h] [rbp+20h]

  v3 = KiHeteroConfig;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = 0;
  v7 = KiDefaultHeteroCpuPolicy;
  v8 = KeHeteroSystem;
  v9 = *(unsigned int *)(KiHeteroConfig + 20);
  *(_QWORD *)KiHeteroConfig = a1;
  *(_DWORD *)(v3 + 8) = a2;
  v75 = v3;
  v74 = v7;
  v70 = v8;
  v68 = v5;
  *(_QWORD *)(v3 + 12) = 0LL;
  memset((void *)(v3 + 24), 0, 12672 * v9);
  v65 = 0;
  v12 = 0;
  v63 = 0;
  v13 = 0;
  v64 = 0;
  if ( v5 )
  {
    v69 = 0LL;
    v14 = v3 + 292;
    v71 = (unsigned __int8 *)&unk_140D1D3A4;
    v72 = v3 + 292;
    while ( 1 )
    {
      v67 = KeNumberProcessors_0;
      if ( KeIsMultiCoreClassesEnabled(v11, v10) )
      {
        v15 = 7LL;
        v16 = v14 + 1320;
        do
        {
          v17 = 2LL;
          do
          {
            *(_QWORD *)(v16 - 4) = 2097153LL;
            memset((void *)(v16 + 4), 0, 0x100uLL);
            *(_QWORD *)(v16 + 3692) = 2097153LL;
            memset((void *)(v16 + 3700), 0, 0x100uLL);
            *(_QWORD *)(v16 + 7388) = 2097153LL;
            memset((void *)(v16 + 7396), 0, 0x100uLL);
            v16 += 264LL;
            --v17;
          }
          while ( v17 );
          --v15;
        }
        while ( v15 );
        v3 = v75;
        v13 = v64;
      }
      else
      {
        *(_QWORD *)(v14 - 268) = 2097153LL;
        memset((void *)(v14 - 260), 0, 0x100uLL);
        *(_QWORD *)(v14 - 4) = 2097153LL;
        memset((void *)(v14 + 4), 0, 0x100uLL);
        *(_QWORD *)(v14 + 260) = 2097153LL;
        memset((void *)(v14 + 268), 0, 0x100uLL);
        *(_QWORD *)(v14 + 524) = 2097153LL;
        memset((void *)(v14 + 532), 0, 0x100uLL);
        *(_QWORD *)(v14 + 788) = 2097153LL;
        memset((void *)(v14 + 796), 0, 0x100uLL);
        *(_QWORD *)(v14 + 1052) = 2097153LL;
        memset((void *)(v14 + 1060), 0, 0x100uLL);
      }
      v18 = 0;
      v77 = 0;
      v19 = 0;
      v66 = 0;
      v20 = 0;
      v80 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      if ( v67 )
      {
        v24 = *(unsigned __int8 **)(a1 + 8);
        v25 = KiProcessorBlock;
        do
        {
          v26 = v18;
          v27 = *(_QWORD *)(*v25 + 34128);
          v28 = *(_BYTE *)(a1 + 4LL * (v64 + v68 * v23) + 25);
          if ( v28 <= v26 )
            v28 = v26;
          v66 = v28;
          v29 = v80;
          if ( *(_BYTE *)(a1 + 4LL * (v64 + v68 * v23) + 24) > v80 )
            v29 = *(_BYTE *)(a1 + 4LL * (v64 + v68 * v23) + 24);
          v80 = v29;
          v30 = v77;
          if ( *v24 > v77 )
            v30 = *v24;
          v77 = v30;
          if ( v27 )
          {
            v31 = v64;
            v32 = *(_BYTE *)(v27 + 4LL * (unsigned __int8)v64 + 6);
            v33 = v32;
            if ( v32 && (!v19 || v19 > v32) )
            {
              v19 = *(_BYTE *)(v27 + 4LL * (unsigned __int8)v64 + 6);
              v33 = v19;
            }
          }
          else
          {
            v33 = 0;
            v31 = v64;
          }
          v34 = v20;
          if ( v33 > v20 )
            v34 = v33;
          v20 = v34;
          if ( v27 )
          {
            v35 = *(_BYTE *)(v27 + 4LL * v31 + 7);
            v36 = v35;
            if ( v35 && (!v21 || v21 > v35) )
            {
              v21 = *(_BYTE *)(v27 + 4LL * v31 + 7);
              v36 = v21;
            }
          }
          else
          {
            v36 = 0;
          }
          v18 = v66;
          v37 = v22;
          if ( v36 > v22 )
            v37 = v36;
          ++v23;
          ++v24;
          ++v25;
          v22 = v37;
        }
        while ( v23 < v67 );
        v14 = v72;
        v3 = v75;
        v13 = v64;
      }
      v38 = v71;
      *(v71 - 8) = v19;
      *v71 = v21;
      v39 = KiComputeHgsScore(v20, v19);
      v42 = v69;
      *(_WORD *)((char *)&unk_140D1D3BC + v69 - 16) = v39;
      if ( v39 > v65 )
      {
        v65 = v39;
        v63 = v40;
      }
      v43 = KiComputeHgsScore(v22, v41);
      *(_WORD *)(v46 + v69) = v43;
      if ( v47 || v80 )
        break;
      if ( KeIsMultiCoreClassesEnabled(v45, v44) )
      {
        v48 = 7LL;
        v49 = v14 + 8708;
        do
        {
          v50 = 2LL;
          do
          {
            KeQueryActiveProcessorAffinity2(v49 - 7392);
            KeQueryActiveProcessorAffinity2(v49);
            KeQueryActiveProcessorAffinity2(v49 - 3696);
            v49 += 264LL;
            --v50;
          }
          while ( v50 );
          --v48;
        }
        while ( v48 );
        v13 = v64;
        v42 = v69;
        v38 = v71;
      }
      else
      {
        KeQueryActiveProcessorAffinity2(v14 - 268);
        KeQueryActiveProcessorAffinity2(v14 - 4);
        KeQueryActiveProcessorAffinity2(v14 + 260);
        KeQueryActiveProcessorAffinity2(v14 + 524);
        KeQueryActiveProcessorAffinity2(v14 + 788);
        KeQueryActiveProcessorAffinity2(v14 + 1052);
      }
      *(_DWORD *)(v3 + 12) = a2;
      *(_DWORD *)(v3 + 16) = v77 != 0;
LABEL_74:
      KeIsMultiCoreClassesEnabled(v52, v51);
      v14 += 12672LL;
      v72 = v14;
      ++v13;
      v71 = v38 + 1;
      v64 = v13;
      v69 = v42 + 2;
      if ( v13 >= v68 )
      {
        v12 = v63;
        v8 = v70;
        v7 = v74;
        goto LABEL_76;
      }
    }
    *(_DWORD *)(v3 + 16) = 1;
    if ( KeIsMultiCoreClassesEnabled(v45, v44) )
    {
      LOBYTE(v53) = v77 != 0;
      KiConfigureHeteroMultiCoreProcessors(v14 - 268, a1, v13, v53);
LABEL_72:
      v13 = v64;
      if ( v77 )
        KiEfficiencyClassSystem = 1;
      goto LABEL_74;
    }
    v54 = 0;
    if ( !v67 )
    {
      v38 = v71;
      goto LABEL_72;
    }
    v55 = (unsigned __int16 *)(v14 - 268);
    while ( 1 )
    {
      v73 = *(_QWORD *)(a1 + 16);
      v56 = v64 + v68 * v54;
      if ( *(_BYTE *)(a1 + 4 * v56 + 25) >= *(_BYTE *)(v73 + v42 + 1) )
      {
        v55 = (unsigned __int16 *)(v14 - 268);
        KeAddProcessorAffinityEx((unsigned __int16 *)(v14 - 268), v54);
        if ( *(_BYTE *)(a1 + 4 * v56 + 25) == v66 )
          KeAddProcessorAffinityEx(v55 + 132, v54);
      }
      v57 = v55;
      v76 = v55 + 660;
      if ( *(_BYTE *)(a1 + 4 * v56 + 27) )
        v76 = v55 + 660;
      else
        KeAddProcessorAffinityEx(v55 + 660, v54);
      if ( *(_BYTE *)(a1 + 4 * v56 + 26) )
        v55 = (unsigned __int16 *)(v14 - 268);
      else
        KeAddProcessorAffinityEx(v55 + 528, v54);
      v52 = v69;
      if ( v77 )
      {
        if ( *(_BYTE *)(a1 + 4 * v56 + 24) < *(_BYTE *)(v69 + v73) )
          goto LABEL_69;
        KeAddProcessorAffinityEx(v57 + 264, v54);
        if ( *(_BYTE *)(a1 + 4 * v56 + 24) != v80 )
          goto LABEL_69;
        v59 = v57 + 396;
      }
      else
      {
        v58 = *(_BYTE *)(v69 + v73 + 1);
        if ( v58 && *(_BYTE *)(a1 + 4 * v56 + 25) >= v58 )
          goto LABEL_69;
        KeAddProcessorAffinityEx(v57 + 264, v54);
        KeAddProcessorAffinityEx(v57 + 396, v54);
        KeAddProcessorAffinityEx(v57 + 528, v54);
        v59 = v76;
      }
      KeAddProcessorAffinityEx(v59, v54);
LABEL_69:
      v42 = v69;
      if ( ++v54 >= v67 )
      {
        v3 = v75;
        v38 = v71;
        goto LABEL_72;
      }
    }
  }
LABEL_76:
  byte_140D1D3CC = v12;
  KeGenericCallDpcEx((__int64)KiConfigureHeteroProcessorsTarget, v3);
  v60 = KeHeteroSystem;
  v61 = 0;
  *a3 = KeHeteroSystem;
  KiDefaultHeteroCpuPolicy = v60 != 0 ? KiDesiredHeteroCpuPolicy : 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
      KiConfigureCpuSetSchedulingInformation(KiProcessorBlock[v61++]);
    while ( v61 < (unsigned int)KeNumberProcessors_0 );
    v8 = v70;
  }
  if ( v7 != KiDefaultHeteroCpuPolicy || v8 != KeHeteroSystem )
    return 1;
  return v6;
}
