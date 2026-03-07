__int64 __fastcall ACPIFanFSTCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  const char *v6; // rdi
  char v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  const char *v12; // rdi
  char v13; // dl
  const char *v14; // rcx
  __int64 v15; // rax
  unsigned __int16 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  char v19; // dl
  int v20; // ecx
  __int64 v21; // rax
  const char *v22; // rdi
  const char *v23; // r8
  const char *v24; // rdx
  char v25; // dl
  const char *v26; // r8
  const char *v27; // rcx
  __int64 v28; // rax
  char v29; // r8
  const char *v30; // r10
  const char *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  char v34; // r8
  int v35; // edx
  __int64 v36; // rax
  const char *v37; // r8
  char v38; // dl
  const char *v39; // rcx
  __int64 v40; // rax
  char v41; // dl
  const char *v42; // rcx
  __int64 v43; // rax
  __int128 v44; // [rsp+50h] [rbp-30h] BYREF
  __int128 v45; // [rsp+60h] [rbp-20h]
  __int64 v46; // [rsp+70h] [rbp-10h]
  int v47; // [rsp+C8h] [rbp+48h]
  unsigned int v49; // [rsp+D8h] [rbp+58h]

  v47 = 0x40000000;
  v46 = 0LL;
  v49 = (unsigned int)a2 >> 31;
  v5 = a3;
  v44 = 0LL;
  v45 = 0LL;
  if ( a2 < 0 )
  {
    v6 = (const char *)&unk_1C00622D0;
    v7 = 0;
    v8 = (const char *)&unk_1C00622D0;
    if ( a4 )
    {
      v9 = *(_QWORD *)(a4 + 8);
      v7 = a4;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(a4 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x10u,
      0xFu,
      (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
      a2,
      v7,
      v6,
      v8);
LABEL_8:
    v5 = a3;
LABEL_9:
    v10 = 0x40000000;
    goto LABEL_10;
  }
  if ( *(_WORD *)(a3 + 2) != 4 )
  {
    v12 = (const char *)&unk_1C00622D0;
    v13 = 0;
    v14 = (const char *)&unk_1C00622D0;
    if ( a4 )
    {
      v15 = *(_QWORD *)(a4 + 8);
      v13 = a4;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a4 + 608);
        if ( (v15 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v16 = 16;
    goto LABEL_20;
  }
  if ( **(_DWORD **)(a3 + 32) < 3u )
  {
    v12 = (const char *)&unk_1C00622D0;
    v13 = 0;
    v14 = (const char *)&unk_1C00622D0;
    if ( a4 )
    {
      v17 = *(_QWORD *)(a4 + 8);
      v13 = a4;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a4 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v16 = 17;
LABEL_20:
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x10u,
      v16,
      (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
      v13,
      v12,
      v14);
    goto LABEL_8;
  }
  v18 = AMLIEvalPkgDataElement(a3, 1LL, &v44);
  v19 = v18;
  if ( v18 < 0 )
  {
    v22 = (const char *)&unk_1C00622D0;
    v29 = 0;
    v30 = (const char *)&unk_1C00622D0;
    v31 = (const char *)&unk_1C00622D0;
    if ( a4 )
    {
      v32 = *(_QWORD *)(a4 + 8);
      v29 = a4;
      if ( (v32 & 0x200000000000LL) != 0 )
      {
        v30 = *(const char **)(a4 + 608);
        if ( (v32 & 0x400000000000LL) != 0 )
          v31 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x14u,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        v19,
        v29,
        v30,
        v31);
  }
  else
  {
    if ( WORD1(v44) == 1 )
    {
      v20 = v45;
      if ( (_DWORD)v45 == *(_DWORD *)(a4 + 296) )
      {
        LOBYTE(v20) = *(_DWORD *)(a4 + 296);
      }
      else
      {
        *(_DWORD *)(a4 + 296) = v45;
        v47 = 1073741826;
        *(_BYTE *)(a4 + 300) = v20 != 0;
      }
      v21 = *(_QWORD *)(a4 + 8);
      v22 = (const char *)&unk_1C00622D0;
      v23 = (const char *)&unk_1C00622D0;
      v24 = (const char *)&unk_1C00622D0;
      if ( (v21 & 0x200000000000LL) != 0 )
      {
        v23 = *(const char **)(a4 + 608);
        if ( (v21 & 0x400000000000LL) != 0 )
          v24 = *(const char **)(a4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_ddqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0x10u,
          0x12u,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          v20,
          *(_BYTE *)(a4 + 300),
          a4,
          v23,
          v24);
    }
    else
    {
      v22 = (const char *)&unk_1C00622D0;
      v25 = 0;
      v26 = (const char *)&unk_1C00622D0;
      v27 = (const char *)&unk_1C00622D0;
      if ( a4 )
      {
        v28 = *(_QWORD *)(a4 + 8);
        v25 = a4;
        if ( (v28 & 0x200000000000LL) != 0 )
        {
          v26 = *(const char **)(a4 + 608);
          if ( (v28 & 0x400000000000LL) != 0 )
            v27 = *(const char **)(a4 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x13u,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          v25,
          v26,
          v27);
    }
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(&v44, 1LL);
  }
  v44 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v33 = AMLIEvalPkgDataElement(a3, 2LL, &v44);
  v34 = v33;
  if ( v33 < 0 )
  {
    v41 = 0;
    v42 = (const char *)&unk_1C00622D0;
    if ( a4 )
    {
      v43 = *(_QWORD *)(a4 + 8);
      v41 = a4;
      if ( (v43 & 0x200000000000LL) != 0 )
      {
        v22 = *(const char **)(a4 + 608);
        if ( (v43 & 0x400000000000LL) != 0 )
          v42 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x10u,
        0x17u,
        (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
        v34,
        v41,
        v22,
        v42);
  }
  else
  {
    if ( WORD1(v44) == 1 )
    {
      v35 = *(_DWORD *)(a4 + 304);
      if ( (_DWORD)v45 != v35 )
      {
        v47 |= 2u;
        LOBYTE(v35) = v45;
        *(_DWORD *)(a4 + 304) = v45;
      }
      v36 = *(_QWORD *)(a4 + 8);
      v37 = (const char *)&unk_1C00622D0;
      if ( (v36 & 0x200000000000LL) != 0 )
      {
        v22 = *(const char **)(a4 + 608);
        if ( (v36 & 0x400000000000LL) != 0 )
          v37 = *(const char **)(a4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0x10u,
          0x15u,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          v35,
          a4,
          v22,
          v37);
    }
    else
    {
      v38 = 0;
      v39 = (const char *)&unk_1C00622D0;
      if ( a4 )
      {
        v40 = *(_QWORD *)(a4 + 8);
        v38 = a4;
        if ( (v40 & 0x200000000000LL) != 0 )
        {
          v22 = *(const char **)(a4 + 608);
          if ( (v40 & 0x400000000000LL) != 0 )
            v39 = *(const char **)(a4 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x16u,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          v38,
          v22,
          v39);
    }
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(&v44, 1LL);
  }
  v10 = v47;
  if ( (v47 & 2) != 0 )
  {
    AcpiDiagTraceFanStatusChange(a4);
  }
  else if ( (*(_BYTE *)(a4 + 320) & 0xF) == 0xF )
  {
    ACPISetDeviceWorker(a4, 1024LL);
  }
  v5 = a3;
LABEL_10:
  if ( !(_BYTE)v49 )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(v5, 1LL);
  }
  return ACPIFanLoop(a4, v10, 0LL);
}
