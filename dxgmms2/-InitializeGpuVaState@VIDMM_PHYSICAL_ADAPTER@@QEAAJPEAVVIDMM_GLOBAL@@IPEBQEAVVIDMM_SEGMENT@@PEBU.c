__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *const *a4,
        const struct DXGADAPTER_GPUMMUCAPS *a5,
        const struct DXGK_PHYSICALADAPTERINFO *a6,
        unsigned int a7)
{
  unsigned int v7; // ebx
  char v8; // al
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r15d
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // r11d
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // r8d
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // r10d
  __int64 v31; // r11
  unsigned int v32; // ebp
  char *v33; // rdx
  __int64 v34; // r12
  __int64 v35; // r8
  __int64 v36; // rdx
  int v37; // edx
  __int64 v38; // rax
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // [rsp+80h] [rbp+8h]

  v7 = 0;
  v8 = *((_BYTE *)this + 444) | 0x80;
  *((_BYTE *)this + 444) = v8;
  if ( (v8 & 8) != 0 )
  {
    *((_QWORD *)this + 56) = a5;
    v12 = *((_DWORD *)a2 + 10232);
    v13 = *((_DWORD *)a5 + 2);
    if ( v12 )
    {
      if ( v13 != v12 )
      {
        WdLogSingleEntry1(1LL, 692LL);
        goto LABEL_43;
      }
    }
    else
    {
      *((_DWORD *)a2 + 10232) = v13;
      if ( (unsigned int)(v13 - 13) > 0x32 )
      {
        WdLogSingleEntry1(1LL, 683LL);
        goto LABEL_43;
      }
    }
  }
  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  *((_BYTE *)this + 444) ^= (*((_BYTE *)this + 444) ^ (16
                                                     * *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL)
                                                                            + 2808LL)
                                                                + 344LL * a3
                                                                + 48))) & 0x10;
  if ( (*(_DWORD *)a5 & 0x80u) != 0 )
  {
    v41 = *((_DWORD *)a5 + 3);
    if ( !v41 || (v41 & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(1LL, 713LL);
      goto LABEL_43;
    }
  }
  v14 = *((_DWORD *)a5 + 9);
  v15 = *((_DWORD *)a2 + 10232) - 12;
  *((_DWORD *)this + 10) = v14;
  if ( !v14 )
  {
    WdLogSingleEntry1(1LL, 723LL);
    goto LABEL_43;
  }
  *((_DWORD *)this + 10) = (v14 + 4095) & 0xFFFFF000;
  v16 = *((_DWORD *)a5 + 7);
  *((_DWORD *)this + 12) = v16;
  v17 = *((_DWORD *)a5 + 12);
  *((_DWORD *)this + 16) = v17;
  v18 = *((_DWORD *)a5 + 8);
  *((_DWORD *)this + 14) = v18;
  v19 = *((_DWORD *)a5 + 13);
  *((_DWORD *)this + 18) = v19;
  if ( v16 > a7 )
  {
    WdLogSingleEntry1(1LL, 735LL);
    goto LABEL_43;
  }
  if ( v17 > a7 )
  {
    WdLogSingleEntry1(1LL, 740LL);
    goto LABEL_43;
  }
  if ( v18 > a7 )
  {
    WdLogSingleEntry1(1LL, 745LL);
    goto LABEL_43;
  }
  if ( v19 > a7 )
  {
    WdLogSingleEntry1(1LL, 750LL);
    goto LABEL_43;
  }
  if ( *((_DWORD *)a2 + 8) >= 0x10002u && (*(_DWORD *)a5 & 0x1000) != 0 && *((_DWORD *)a5 + 1) )
  {
    WdLogSingleEntry1(1LL, 759LL);
    goto LABEL_43;
  }
  v20 = *((_DWORD *)a5 + 6);
  *((_DWORD *)this + 19) = v20;
  *((_DWORD *)this + 22) = (unsigned int)(1 << v20) >> 4;
  *((_DWORD *)this + 21) = 1 << v20;
  *((_DWORD *)this + 20) = (1 << v20) - 1;
  v21 = *((_DWORD *)a5 + 1);
  v43 = v21;
  *((_DWORD *)this + 108) = v21;
  if ( v20 && v20 < v15 )
  {
    if ( v21 && (unsigned int)(v21 - 1) > 1 )
    {
      WdLogSingleEntry1(1LL, 780LL);
      goto LABEL_43;
    }
    *((_DWORD *)this + 11) = v16;
    v22 = v16;
    if ( v16 && (*((_DWORD *)a4[v16 - 1] + 20) & 1) != 0 )
    {
      *((_DWORD *)this + 11) = 0;
      v22 = 0;
    }
    *((_DWORD *)this + 15) = v17;
    v23 = v17;
    if ( v17 && (*((_DWORD *)a4[v17 - 1] + 20) & 1) != 0 )
    {
      *((_DWORD *)this + 15) = 0;
      v23 = 0;
    }
    *((_DWORD *)this + 13) = v18;
    if ( v18 )
    {
      v24 = v18;
      if ( (*((_BYTE *)a4[v18 - 1] + 80) & 1) != 0 )
        v24 = 0;
      *((_DWORD *)this + 13) = v24;
    }
    *((_DWORD *)this + 17) = v19;
    if ( v19 )
    {
      v25 = v19;
      if ( (*((_BYTE *)a4[v19 - 1] + 80) & 1) != 0 )
        v25 = 0;
      *((_DWORD *)this + 17) = v25;
    }
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 436LL) & 0x200) == 0
      && (v22 && (*((_DWORD *)a4[v22 - 1] + 20) & 0x1001) != 0 || v23 && (*((_DWORD *)a4[v23 - 1] + 20) & 0x1001) != 0)
      && !v43 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v26 = *((_DWORD *)a5 + 4) - 1;
    *((_DWORD *)this + 109) = v26;
    *((_QWORD *)this + 15) = 0LL;
    v27 = *((unsigned int *)this + 19);
    *((_DWORD *)this + 25) = v27;
    v28 = *((_DWORD *)this + 21);
    *((_QWORD *)this + 16) = 0LL;
    *((_DWORD *)this + 24) = v28;
    *((_QWORD *)this + 17) = 1LL;
    v29 = (unsigned int)(v28 - 1);
    *((_QWORD *)this + 14) = v29;
    *((_DWORD *)this + 26) = *((_DWORD *)this + 10);
    if ( v26 == 1 )
    {
      v42 = *((_DWORD *)a2 + 10232) - v27;
      *((_QWORD *)this + 22) = v29;
      *((_DWORD *)this + 37) = v42;
      *((_QWORD *)this + 21) = v27;
      *((_QWORD *)this + 23) = 1LL << v27;
      *((_QWORD *)this + 20) = ~v29;
      *((_DWORD *)this + 36) = 0;
      *((_DWORD *)this + 38) = 0;
    }
    else
    {
      v30 = 1;
      if ( v26 )
      {
        while ( 1 )
        {
          v31 = v30;
          v32 = *((_DWORD *)a5 + 5 * v30 + 6);
          if ( !v32 || v32 > v15 - (unsigned int)v27 )
            break;
          LODWORD(v27) = v32 + v27;
          v33 = (char *)this + 48 * v30 + 48;
          v34 = 6LL * v30;
          *((_DWORD *)this + 2 * v34 + 25) = v32;
          v35 = *((_QWORD *)v33 + 3) + *((unsigned int *)v33 + 1);
          *((_QWORD *)this + v34 + 15) = v35;
          v36 = *((_QWORD *)v33 + 2) | *((_QWORD *)v33 + 4);
          *((_QWORD *)this + v34 + 16) = v36;
          *((_QWORD *)this + v34 + 14) = ~v36 & ((1LL << v27) - 1);
          *((_DWORD *)this + 12 * v30 + 24) = 1LL << v32;
          v37 = *((_DWORD *)a5 + 5 * v30 + 9);
          *((_DWORD *)this + 2 * v34 + 26) = v37;
          *((_QWORD *)this + v34 + 17) = 1LL << v35;
          if ( !v37 )
          {
            WdLogSingleEntry1(1LL, 878LL);
            goto LABEL_43;
          }
          ++v30;
          *((_DWORD *)this + 12 * v31 + 26) = (v37 + 4095) & 0xFFFFF000;
          if ( v30 > *((_DWORD *)this + 109) )
            goto LABEL_38;
        }
        WdLogSingleEntry1(1LL, 863LL);
        goto LABEL_43;
      }
LABEL_38:
      if ( (_DWORD)v27 != v15 )
      {
        WdLogSingleEntry1(1LL, 885LL);
        goto LABEL_43;
      }
    }
    do
    {
      v38 = v7++;
      *((_DWORD *)this + 12 * v38 + 27) = *((_DWORD *)a5 + 5 * v38 + 10);
    }
    while ( v7 <= *((_DWORD *)this + 109) );
    return 0LL;
  }
  WdLogSingleEntry1(1LL, 772LL);
LABEL_43:
  DxgkLogInternalTriageEvent(v40, 0x40000LL);
  return 3221225485LL;
}
