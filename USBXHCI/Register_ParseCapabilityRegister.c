__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int16 v4; // ax
  unsigned int v5; // eax
  int v6; // edx
  unsigned __int8 v7; // bl
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  int v15; // eax
  int v16; // edx
  int v17; // edx
  unsigned int v18; // r10d
  char v19; // al
  int v20; // r10d
  int v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // edx
  unsigned int v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // edx
  unsigned int v32; // eax
  int v33; // edx
  unsigned int v34; // r8d
  int v35; // edx
  int v36; // edx
  unsigned int v37; // ecx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r10
  unsigned int *FirstExtendedCapability; // rax
  __int64 v43; // rcx
  unsigned int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v49; // rcx
  __int64 Ulong; // rbx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // r8
  _QWORD *v56; // rcx
  int v57; // r9d
  int v58; // r9d
  int v59; // r9d
  char v60; // [rsp+28h] [rbp-70h]
  char v61; // [rsp+28h] [rbp-70h]
  char v62; // [rsp+28h] [rbp-70h]
  char v63; // [rsp+30h] [rbp-68h]
  char v64; // [rsp+30h] [rbp-68h]
  __int128 v65; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 328) == -1LL )
  {
    v4 = *(_WORD *)(v3 + 248);
    if ( v4 == 7023 )
    {
      Ulong = (unsigned int)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v51) = Ulong;
        v52 = (unsigned __int64)(unsigned int)Ulong >> 16;
        v53 = 21;
LABEL_55:
        v64 = v52;
        LOBYTE(v52) = 4;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v52,
          6,
          v53,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          v51,
          v64);
      }
    }
    else
    {
      if ( v4 != 4172 && _stricmp((const char *)(v3 + 304), "QCOM") )
        goto LABEL_5;
      Ulong = (unsigned __int16)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49440LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v52) = Ulong & 0xFFF;
        v53 = 22;
        v51 = (unsigned __int64)(unsigned int)Ulong >> 12;
        goto LABEL_55;
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) = Ulong;
    Etw_ControllerFirmareVersionUpdate(v49, *(_QWORD *)(a1 + 8));
  }
LABEL_5:
  v5 = XilRegister_ReadUlong(a1, *(unsigned int **)(a1 + 24));
  v7 = v5;
  v8 = HIBYTE(v5);
  v9 = HIWORD(v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (unsigned __int8)v5;
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_DDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v10,
      6,
      23,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      SHIBYTE(v5),
      SBYTE2(v5),
      v5);
  }
  v11 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v11 + 320) = v8;
  *(_BYTE *)(v11 + 321) = v9;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_BYTE *)(v12 + 320);
  if ( v13 )
  {
    if ( *(_BYTE *)(v12 + 321) >= 0x10u || v13 > 1u )
      *(_BYTE *)(v12 + 319) = 1;
  }
  else
  {
    v65 = 0x1000uLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), v6, 6, 24, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
    }
    v54 = *(_QWORD *)(a1 + 8);
    v55 = 2LL;
    v56 = (_QWORD *)(v54 + 336);
    do
    {
      *v56 |= *(_QWORD *)((char *)v56 + (_QWORD)&v65 - v54 - 336);
      ++v56;
      --v55;
    }
    while ( v55 );
  }
  v14 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v14 + v7;
  v15 = XilRegister_ReadUlong(a1, (unsigned int *)(v14 + 4));
  *(_DWORD *)(a1 + 84) = v15;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(unsigned __int8 *)(a1 + 87);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v17,
      6,
      25,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v15,
      SBYTE1(v15),
      *(_BYTE *)(a1 + 87));
  }
  v18 = *(_DWORD *)(a1 + 84);
  v19 = v18;
  if ( !(_BYTE)v18 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v57 = 26;
    goto LABEL_66;
  }
  v20 = (v18 >> 8) & 0x7FF;
  if ( (unsigned int)(v20 - 1) > 0x3FF )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v57 = 27;
    v61 = v20;
    goto LABEL_92;
  }
  if ( !*(_BYTE *)(a1 + 87) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v57 = 28;
    v61 = 0;
LABEL_92:
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v16,
      6,
      v57,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v61);
    return (unsigned int)-1073741811;
  }
  v21 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  *(_DWORD *)(a1 + 88) = v21;
  v22 = 1 << ((unsigned __int8)v21 >> 4);
  *(_DWORD *)(a1 + 92) = v22;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v22,
      6,
      29,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v21 & 0xF,
      1 << ((unsigned __int8)v21 >> 4));
  }
  v23 = *(_DWORD *)(a1 + 88);
  v24 = (v23 >> 27) | *(_WORD *)(a1 + 90) & 0x3E0;
  *(_DWORD *)(a1 + 96) = v24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v63 = v24;
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v24,
      6,
      30,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      (v23 & 0x4000000) != 0,
      v63);
  }
  v25 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL));
  *(_DWORD *)(a1 + 100) = v25;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = *(unsigned __int16 *)(a1 + 102);
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v27,
      6,
      31,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v25,
      *(_WORD *)(a1 + 102));
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 100) > 0xAu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v58 = 32;
LABEL_71:
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v26,
      6,
      v58,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_WORD *)(a1 + 102) > 0x7FFu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v58 = 33;
    goto LABEL_71;
  }
  v28 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
  *(_DWORD *)(a1 + 104) = v28;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = (v28 >> 2) & 1;
    LOBYTE(v29) = 4;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v29,
      6,
      34,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v28 & 1,
      (v28 & 2) != 0,
      (v28 & 4) != 0,
      (v28 & 8) != 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = (*(_DWORD *)(a1 + 104) >> 6) & 1;
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v30,
        6,
        35,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        (*(_DWORD *)(a1 + 104) & 0x10) != 0,
        (*(_DWORD *)(a1 + 104) & 0x20) != 0,
        (*(_DWORD *)(a1 + 104) & 0x40) != 0,
        (*(_DWORD *)(a1 + 104) & 0x80) != 0);
      v16 = *(_DWORD *)(a1 + 104);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = (unsigned __int16)v16 >> 12;
        v60 = v31;
        LOBYTE(v31) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v31,
          6,
          36,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          v60,
          *(_WORD *)(a1 + 106));
      }
    }
  }
  *(_DWORD *)(a1 + 108) = 0;
  if ( v7 >= 0x20u )
  {
    v32 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 28LL));
    *(_DWORD *)(a1 + 108) = v32;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = (v32 >> 1) & 1;
      LOBYTE(v33) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v33,
        6,
        37,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        v32 & 1,
        (v32 & 2) != 0,
        (v32 & 4) != 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = *(_DWORD *)(a1 + 108);
        v35 = (v34 >> 5) & 1;
        LOBYTE(v35) = 4;
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v35,
          6,
          38,
          (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
          (v34 & 8) != 0,
          (v34 & 0x10) != 0,
          (v34 & 0x20) != 0);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v36 = *(_DWORD *)(a1 + 108) >> 9;
          LOBYTE(v36) = 4;
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v36,
            6,
            39,
            (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
            (*(_DWORD *)(a1 + 108) & 0x40) != 0,
            BYTE1(*(_DWORD *)(a1 + 108)) & 1,
            *(_DWORD *)(a1 + 108) >> 9);
        }
      }
    }
  }
  v37 = *(_DWORD *)(a1 + 104);
  if ( (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)(a1 + 104)) >> 4) > 7u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v16,
        6,
        40,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 104)) >> 4);
    }
    v37 = *(_DWORD *)(a1 + 104) & 0xFFFF0FFF | 0x7000;
    *(_DWORD *)(a1 + 104) = v37;
  }
  v38 = (unsigned __int16)v37 >> 12;
  if ( !v38 || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x40000LL) != 0 )
    v39 = 0;
  else
    v39 = (2 << v38) - 1;
  *(_DWORD *)(a1 + 116) = v39;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v16,
      6,
      41,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v39);
  }
  v40 = *(unsigned __int16 *)(a1 + 106);
  if ( !(_WORD)v40 || 4 * v40 >= (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v19 = *(_WORD *)(a1 + 106);
    v57 = 42;
LABEL_66:
    v61 = v19;
    goto LABEL_92;
  }
  v41 = 4 * v40 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v41;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v16,
      6,
      43,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v41);
  }
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  FirstExtendedCapability = Register_FindFirstExtendedCapability(a1, 0xAu);
  v43 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = FirstExtendedCapability;
  if ( Controller_IsSecureDevice(v43) && !*(_BYTE *)(a1 + 136) )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    goto LABEL_46;
  }
  v44 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL));
  if ( !v44 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v59 = 44;
LABEL_82:
      v62 = 0;
LABEL_83:
      LOBYTE(v44) = 2;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v44,
        6,
        v59,
        (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
        v62);
    }
    return (unsigned int)-1073741811;
  }
  v45 = *(_QWORD *)(a1 + 24) + v44;
  *(_QWORD *)(a1 + 48) = v45;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v44,
      6,
      45,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v45,
      v44);
LABEL_46:
  v44 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL));
  if ( !v44 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v59 = 46;
    goto LABEL_82;
  }
  v46 = *(_QWORD *)(a1 + 24) + v44;
  *(_QWORD *)(a1 + 40) = v46;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v44,
      6,
      47,
      (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
      v46,
      v44);
  v47 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL));
  if ( v47 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v59 = 48;
    v62 = v47;
    goto LABEL_83;
  }
  return v1;
}
