/*
 * XREFs of Register_ParseCapabilityRegister @ 0x1C006FA80
 * Callers:
 *     Register_PrepareHardware @ 0x1C006CD24 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsSecureDevice @ 0x1C0009764 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000E080 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013CB0 (WPP_RECORDER_SF_ddd.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0013E50 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0018F9C (Register_FindFirstExtendedCapability.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0047F70 (Etw_ControllerFirmareVersionUpdate.c)
 */

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
  unsigned int v15; // edx
  unsigned int v16; // r10d
  int v17; // edx
  int v18; // r10d
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // r8d
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
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r10
  unsigned int *FirstExtendedCapability; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  __int64 v48; // rcx
  __int64 Ulong; // rbx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  int v52; // r9d
  _QWORD *v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  int v56; // r9d
  char v57; // [rsp+28h] [rbp-70h]
  char v58; // [rsp+28h] [rbp-70h]
  char v59; // [rsp+28h] [rbp-70h]
  char v60; // [rsp+28h] [rbp-70h]
  char v61; // [rsp+30h] [rbp-68h]
  __int128 v62; // [rsp+50h] [rbp-48h] BYREF

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
        LOBYTE(v50) = Ulong;
        v51 = (unsigned __int64)(unsigned int)Ulong >> 16;
        v52 = 21;
LABEL_55:
        v61 = v51;
        LOBYTE(v51) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v51,
          6,
          v52,
          (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
          v50,
          v61);
      }
    }
    else
    {
      if ( v4 != 4172 && _stricmp((const char *)(v3 + 304), "QCOM") )
        goto LABEL_5;
      Ulong = (unsigned __int16)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49440LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v51) = Ulong & 0xFFF;
        v52 = 22;
        v50 = (unsigned __int64)(unsigned int)Ulong >> 12;
        goto LABEL_55;
      }
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) = Ulong;
    Etw_ControllerFirmareVersionUpdate(v48, *(_QWORD *)(a1 + 8));
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
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v10,
      6,
      23,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
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
    v62 = 0x1000uLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v12 + 72), v6, 6, 24, (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids);
      v12 = *(_QWORD *)(a1 + 8);
    }
    v53 = (_QWORD *)(v12 + 336);
    v54 = 2LL;
    do
    {
      *v53 |= *(_QWORD *)((char *)v53 + (_QWORD)&v62 - v12 - 336);
      ++v53;
      --v54;
    }
    while ( v54 );
  }
  v14 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v14 + v7;
  v16 = XilRegister_ReadUlong(a1, (unsigned int *)(v14 + 4));
  *(_DWORD *)(a1 + 84) = v16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = *(unsigned __int8 *)(a1 + 87);
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v17,
      6,
      25,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v16,
      SBYTE1(v16),
      *(_BYTE *)(a1 + 87));
    v16 = *(_DWORD *)(a1 + 84);
  }
  if ( !(_BYTE)v16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v55 = 26;
    goto LABEL_65;
  }
  v18 = (v16 >> 8) & 0x7FF;
  if ( (unsigned int)(v18 - 1) > 0x3FF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = 27;
      v60 = v18;
      goto LABEL_90;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_BYTE *)(a1 + 87) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v55 = 28;
LABEL_65:
    v60 = 0;
LABEL_90:
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v15,
      6,
      v55,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v60);
    return (unsigned int)-1073741811;
  }
  v19 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  *(_DWORD *)(a1 + 88) = v19;
  v20 = v19;
  v21 = 1 << ((unsigned __int8)v19 >> 4);
  *(_DWORD *)(a1 + 92) = v21;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v22 = v20 & 0xF;
    v57 = v22;
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v22,
      6,
      29,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v57,
      v21);
    v20 = *(_DWORD *)(a1 + 88);
  }
  v23 = (v20 >> 27) | *(_WORD *)(a1 + 90) & 0x3E0;
  *(_DWORD *)(a1 + 96) = v23;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = (v20 >> 26) & 1;
    v58 = v24;
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v24,
      6,
      30,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v58,
      v23);
  }
  v25 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL));
  *(_DWORD *)(a1 + 100) = v25;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = *(unsigned __int16 *)(a1 + 102);
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v27,
      6,
      31,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v25,
      *(_WORD *)(a1 + 102));
    v25 = *(_DWORD *)(a1 + 100);
  }
  if ( (unsigned __int8)v25 > 0xAu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v56 = 32;
LABEL_70:
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v26,
      6,
      v56,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_WORD *)(a1 + 102) > 0x7FFu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v56 = 33;
    goto LABEL_70;
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
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
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
        (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
        (*(_DWORD *)(a1 + 104) & 0x10) != 0,
        (*(_DWORD *)(a1 + 104) & 0x20) != 0,
        (*(_DWORD *)(a1 + 104) & 0x40) != 0,
        (*(_DWORD *)(a1 + 104) & 0x80) != 0);
      v15 = *(_DWORD *)(a1 + 104);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = (unsigned __int16)v15 >> 12;
        v59 = v31;
        LOBYTE(v31) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          v31,
          6,
          36,
          (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
          v59,
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
        (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
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
          (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
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
            (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
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
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v15,
        6,
        40,
        (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
        (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 104)) >> 4);
      v37 = *(_DWORD *)(a1 + 104);
    }
    v37 = v37 & 0xFFFF0FFF | 0x7000;
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
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v15,
      6,
      41,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v39);
  }
  if ( !*(_WORD *)(a1 + 106) || (v40 = 4LL * *(unsigned __int16 *)(a1 + 106), v40 >= *(unsigned int *)(a1 + 20)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v60 = *(_WORD *)(a1 + 106);
      v55 = 42;
      goto LABEL_90;
    }
    return (unsigned int)-1073741811;
  }
  v41 = v40 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v41;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v15,
      6,
      43,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v41);
  }
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  FirstExtendedCapability = Register_FindFirstExtendedCapability(a1, 0xAu);
  v43 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = FirstExtendedCapability;
  if ( !Controller_IsSecureDevice(v43) || *(_BYTE *)(a1 + 136) )
  {
    v15 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL));
    if ( !v15 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v55 = 44;
      goto LABEL_81;
    }
    v44 = *(_QWORD *)(a1 + 24) + v15;
    *(_QWORD *)(a1 + 48) = v44;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v15,
        6,
        45,
        (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
        v44,
        v15);
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v15 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL));
  if ( !v15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v55 = 46;
LABEL_81:
    v60 = 0;
    goto LABEL_90;
  }
  v45 = *(_QWORD *)(a1 + 24) + v15;
  *(_QWORD *)(a1 + 40) = v45;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v15,
      6,
      47,
      (__int64)&WPP_1c1335c0938732c3a8bc02d386676659_Traceguids,
      v45,
      v15);
  v46 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL));
  if ( v46 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v55 = 48;
      v60 = v46;
      goto LABEL_90;
    }
    return (unsigned int)-1073741811;
  }
  return v1;
}
