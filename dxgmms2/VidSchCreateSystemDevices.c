__int64 __fastcall VidSchCreateSystemDevices(__int64 a1)
{
  __int64 *v1; // r15
  int v3; // edi
  struct _VIDSCH_DEVICE **v4; // r12
  int SoftwareOnlyNodeForDriverEngine; // eax
  __int64 v6; // rcx
  __int64 ContextInternal; // rax
  unsigned int i; // edi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // r14
  int v21; // ecx
  struct _VIDSCH_DEVICE *v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h]
  int v32; // [rsp+68h] [rbp-8h]

  v1 = (__int64 *)(a1 + 240);
  v31 = 0LL;
  v30 = 0LL;
  LODWORD(v30) = 1;
  v3 = VidSchiCreateDeviceInternal(a1, &v30, 0LL, (__int64 *)(a1 + 240));
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(1LL, *(_QWORD *)(a1 + 16));
    v25 = *(_QWORD *)(a1 + 16);
LABEL_25:
    DxgkLogInternalTriageEvent(v25, 0x40000LL);
    return (unsigned int)v3;
  }
  v4 = (struct _VIDSCH_DEVICE **)(a1 + 256);
  v30 = 0LL;
  LODWORD(v30) = 17;
  v31 = 0LL;
  v3 = VidSchiCreateDeviceInternal(a1, &v30, 0LL, (__int64 *)(a1 + 256));
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(1LL, *(_QWORD *)(a1 + 16));
    goto LABEL_25;
  }
  *((_QWORD *)&v30 + 1) = 0x700000000LL;
  v31 = 0LL;
  LODWORD(v30) = 268;
  v32 = 2 * *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 152);
  SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(a1, 0);
  v6 = *v1;
  DWORD1(v30) = SoftwareOnlyNodeForDriverEngine;
  ContextInternal = VidSchiCreateContextInternal(v6, (int *)&v30, 0LL);
  *(_QWORD *)(a1 + 248) = ContextInternal;
  if ( !ContextInternal )
  {
    WdLogSingleEntry2(1LL, *(_QWORD *)(a1 + 16), 1121LL);
    goto LABEL_34;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 84); ++i )
  {
    v9 = *(_QWORD *)(a1 + 632);
    v10 = *(_DWORD *)(a1 + 704);
    v11 = v9 + 8LL * i;
    if ( i >= v10 )
      v11 = *(_QWORD *)(a1 + 632);
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 12LL) & 2) == 0 )
    {
      v12 = 8LL * i;
      if ( i < v10 )
        v9 += v12;
      if ( (*(_DWORD *)(*(_QWORD *)v9 + 12LL) & 0x40) == 0 )
      {
        v31 = 0LL;
        v32 = 0;
        HIDWORD(v30) = 7;
        LODWORD(v30) = 20;
        DWORD1(v30) = i;
        v13 = VidSchiSchedulerNodeToDriverEngine(a1, i);
        v14 = *v1;
        DWORD2(v30) = v13;
        v15 = VidSchiCreateContextInternal(v14, (int *)&v30, 0LL);
        v16 = v12 + *(_QWORD *)(a1 + 632);
        if ( i >= *(_DWORD *)(a1 + 704) )
          v16 = *(_QWORD *)(a1 + 632);
        *(_QWORD *)(*(_QWORD *)v16 + 32LL) = v15;
        v17 = v12 + *(_QWORD *)(a1 + 632);
        if ( i >= *(_DWORD *)(a1 + 704) )
          v17 = *(_QWORD *)(a1 + 632);
        if ( !*(_QWORD *)(*(_QWORD *)v17 + 32LL) )
        {
          WdLogSingleEntry3(1LL, i, *(_QWORD *)(a1 + 16), 1156LL);
          goto LABEL_34;
        }
      }
    }
    RtlSetBitEx(a1 + 488, i);
  }
  v18 = 0;
  if ( !*(_DWORD *)(a1 + 76) )
    return 0LL;
  while ( 1 )
  {
    v19 = *(_QWORD *)(a1 + 16);
    v31 = 0LL;
    v20 = *(_QWORD *)(v19 + 2808) + 344LL * v18;
    LODWORD(v19) = *(unsigned __int8 *)(v18 + a1 + 88);
    v32 = 0;
    v21 = v19 + *(unsigned __int16 *)(v20 + 2);
    LODWORD(v30) = 29;
    DWORD1(v30) = v21;
    v22 = *v4;
    *((_QWORD *)&v30 + 1) = v18 | 0x700000000LL;
    if ( *(_BYTE *)(a1 + 55) )
    {
      LODWORD(v30) = 2077;
      *(_QWORD *)(*(_QWORD *)(a1 + 272) + 8LL * v18) = VidSchiCreateHwContextInternal(
                                                         v22,
                                                         (struct _VIDSCH_CONTEXT_DATA *)&v30,
                                                         0LL);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 272) + 8LL * v18) )
      {
        WdLogSingleEntry3(1LL, v18, *(_QWORD *)(a1 + 16), 1205LL);
        goto LABEL_34;
      }
      goto LABEL_21;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * v18) = VidSchiCreateContextInternal((__int64)v22, (int *)&v30, 0LL);
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * v18);
    if ( !v23 )
      break;
    *(_BYTE *)(v23 + 641) = 1;
    if ( (*(_BYTE *)(v20 + 16) & 0xC) == 0xC )
    {
      v27 = *(_DWORD *)(v20 + 20) + *(unsigned __int8 *)(v18 + a1 + 88);
      v28 = (__int64)*v4;
      LODWORD(v30) = v30 | 0x200;
      DWORD1(v30) = v27;
      *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8LL * v18) = VidSchiCreateContextInternal(v28, (int *)&v30, 0LL);
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8LL * v18);
      if ( !v29 )
      {
        WdLogSingleEntry3(1LL, v18, *(_QWORD *)(a1 + 16), 1240LL);
        goto LABEL_34;
      }
      *(_BYTE *)(v29 + 641) = 1;
    }
LABEL_21:
    if ( ++v18 >= *(_DWORD *)(a1 + 76) )
      return 0LL;
  }
  WdLogSingleEntry3(1LL, v18, *(_QWORD *)(a1 + 16), 1220LL);
LABEL_34:
  DxgkLogInternalTriageEvent(v26, 0x40000LL);
  return (unsigned int)-1073741823;
}
