/*
 * XREFs of ScsiToNVMe @ 0x1C0004650
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0004360 (NVMeHwBuildIo.c)
 * Callees:
 *     NVMeSplitIoCommand @ 0x1C00011E4 (NVMeSplitIoCommand.c)
 *     ScsiUnmapRequest @ 0x1C0002F48 (ScsiUnmapRequest.c)
 *     GetSrbScsiData @ 0x1C00031F8 (GetSrbScsiData.c)
 *     ScsiModeSenseRequest @ 0x1C000335C (ScsiModeSenseRequest.c)
 *     ScsiReadCapacityRequest @ 0x1C00037CC (ScsiReadCapacityRequest.c)
 *     MdlToPrp @ 0x1C0004D00 (MdlToPrp.c)
 *     ScsiSyncCacheRequest @ 0x1C000513C (ScsiSyncCacheRequest.c)
 *     ScsiInquiryRequest @ 0x1C00056F8 (ScsiInquiryRequest.c)
 *     ScsiReportLunsCommand @ 0x1C0006474 (ScsiReportLunsCommand.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C000DC80 (ScsiSecurityProtocolInRequest.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001CFA8 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001D238 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C001F3CC (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001F6BC (NVMeWriteBufferFirmwareDownload.c)
 *     ScsiLogSenseRequest @ 0x1C00206FC (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0020788 (ScsiModeSelectRequest.c)
 *     ScsiPersistentReserveIn @ 0x1C002091C (ScsiPersistentReserveIn.c)
 *     ScsiPersistentReserveOut @ 0x1C0020A04 (ScsiPersistentReserveOut.c)
 *     ScsiSanitizeRequest @ 0x1C0020C04 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0020E6C (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0020F78 (ScsiStartStopUnitRequest.c)
 *     SglToPrp @ 0x1C00213A4 (SglToPrp.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r10
  unsigned int started; // esi
  char v6; // r11
  __int64 v9; // r8
  unsigned __int8 *v10; // r12
  char v11; // al
  unsigned int v12; // ecx
  unsigned int *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rdi
  _DWORD *v20; // rdx
  unsigned __int8 v21; // cl
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned int v24; // r11d
  int v25; // eax
  __int64 v26; // r15
  __int64 v27; // r9
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  __int64 v30; // rax
  __int16 v31; // ax
  __int64 v32; // rax
  _DWORD *v33; // r13
  unsigned __int8 v34; // r15
  int v35; // ecx
  unsigned int v36; // r9d
  unsigned int v37; // r8d
  unsigned int v38; // r8d
  unsigned __int8 v39; // al
  unsigned __int64 v40; // r10
  __int64 v41; // r9
  unsigned __int64 v42; // r10
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  unsigned int v46; // r8d
  unsigned int v47; // eax
  bool v48; // di
  unsigned int v49; // eax
  int v51; // r8d
  unsigned __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // r8
  __int64 v55; // rdx
  unsigned __int8 *v56; // rax
  unsigned __int8 *v57; // rax
  unsigned __int8 v58; // cl
  char v59; // al
  int v60; // eax
  _BYTE *SrbScsiData; // rax
  char v62; // al
  unsigned int v63; // r8d
  unsigned __int8 v64; // dl
  __int64 v65; // rcx
  _DWORD *v66; // rcx
  _DWORD *v67; // rdx
  int v68; // r8d
  unsigned int v69; // ecx
  int v70; // ecx
  unsigned int v71; // eax
  unsigned __int8 v72; // cl
  unsigned __int8 v73; // al
  unsigned __int8 v74; // cl
  unsigned __int8 v75; // al
  unsigned __int8 v76; // cl
  unsigned __int64 v77; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v78; // [rsp+38h] [rbp-31h]
  unsigned int v79; // [rsp+3Ch] [rbp-2Dh]
  __int16 v80; // [rsp+40h] [rbp-29h]
  int v81; // [rsp+44h] [rbp-25h] BYREF
  _DWORD v82[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v83; // [rsp+50h] [rbp-19h]
  int v84; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v85[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v86; // [rsp+80h] [rbp+17h]

  v4 = *(_BYTE *)(a2 + 2);
  started = 0;
  v6 = 0;
  v79 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( v4 != 40 )
  {
    v79 = 0;
    if ( !v4 )
    {
      v9 = *(unsigned __int8 *)(a2 + 10);
      v79 = v9;
      if ( (_BYTE)v9 )
        v10 = (unsigned __int8 *)(a2 + 72);
      goto LABEL_104;
    }
LABEL_11:
    v11 = v4;
    if ( v6 )
      goto LABEL_12;
    goto LABEL_105;
  }
  v11 = 40;
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v12 = *(_DWORD *)(a2 + 56);
    if ( v12 )
    {
      v13 = (unsigned int *)(a2 + 120);
      a4 = v12;
      do
      {
        v14 = *v13;
        if ( (unsigned int)v14 >= 0x80 && (unsigned int)v14 <= *(_DWORD *)(a2 + 16) )
        {
          v15 = *(_DWORD *)(a2 + v14);
          v16 = a2 + v14;
          if ( v15 == 64 )
          {
            v9 = *(unsigned __int8 *)(v16 + 10);
            v6 = 1;
            v79 = v9;
            if ( (_BYTE)v9 )
              v10 = (unsigned __int8 *)(v16 + 24);
          }
          else
          {
            v51 = v15 - 65;
            if ( v51 )
            {
              if ( v51 == 1 )
              {
                v56 = (unsigned __int8 *)(v16 + 32);
                v79 = *(_DWORD *)(v16 + 12);
                v9 = v79;
                v6 = 1;
                if ( !v79 )
                  v56 = v10;
                v10 = v56;
              }
              else
              {
                v9 = v79;
              }
            }
            else
            {
              v9 = *(unsigned __int8 *)(v16 + 10);
              v57 = (unsigned __int8 *)(v16 + 24);
              v79 = *(unsigned __int8 *)(v16 + 10);
              v6 = 1;
              if ( !(_BYTE)v9 )
                v57 = v10;
              v10 = v57;
            }
          }
        }
        ++v13;
        --a4;
      }
      while ( a4 );
      goto LABEL_11;
    }
  }
LABEL_105:
  v9 = 0LL;
  v79 = 0;
LABEL_12:
  if ( v11 != 40 )
  {
LABEL_104:
    v17 = *(unsigned __int8 *)(a2 + 7);
    goto LABEL_14;
  }
  v17 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
LABEL_14:
  if ( (unsigned int)v9 < 6 || !v10 )
  {
    LOBYTE(a4) = 32;
LABEL_92:
    LOBYTE(v9) = 5;
    LOBYTE(v17) = 8;
    NVMeSetSenseData(a2, v17, v9, a4);
    return 3238002695LL;
  }
  v18 = *v10;
  if ( (_BYTE)v18 != 0xA0 )
  {
    v17 = *(_QWORD *)(a1 + 8LL * (unsigned __int8)v17 + 1752);
    if ( !v17 || !*(_DWORD *)(v17 + 52) )
    {
      LOBYTE(a4) = 37;
      goto LABEL_92;
    }
  }
  if ( v18 != 40 && v18 != 42 )
  {
    v52 = 0x1C0000000uLL;
    switch ( *v10 )
    {
      case 0u:
      case 0x2Fu:
      case 0x8Fu:
        *(_BYTE *)(a2 + 3) = 1;
        v48 = 0;
        goto LABEL_62;
      case 0x12u:
        started = ScsiInquiryRequest(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0x15u:
      case 0x55u:
        started = ScsiModeSelectRequest(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0x1Au:
      case 0x5Au:
        started = ScsiModeSenseRequest(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0x1Bu:
        started = ScsiStartStopUnitRequest(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0x25u:
      case 0x9Eu:
        started = ScsiReadCapacityRequest(a1, a2, v10, (unsigned int)v9);
        v48 = 0;
        goto LABEL_62;
      case 0x35u:
        started = ScsiSyncCacheRequest(a1, a2);
        v48 = 0;
        goto LABEL_62;
      case 0x3Bu:
        v59 = v10[1] & 0x1F;
        if ( v59 == 14 )
        {
          v60 = NVMeWriteBufferFirmwareDownload(a1, a2, v10);
        }
        else if ( v59 == 15 )
        {
          v60 = NVMeWriteBufferFirmwareActivate(a1, a2, v10);
        }
        else
        {
          LOBYTE(a4) = 36;
          LOBYTE(v9) = 5;
          LOBYTE(v52) = 6;
          NVMeSetSenseData(a2, v52, v9, a4);
          v60 = -1056964602;
        }
        started = v60;
        v48 = 0;
        goto LABEL_62;
      case 0x42u:
        started = ScsiUnmapRequest(a1, a2);
        v48 = 0;
        goto LABEL_62;
      case 0x48u:
        started = ScsiSanitizeRequest(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0x4Du:
        started = ScsiLogSenseRequest(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0x5Eu:
        started = ScsiPersistentReserveIn(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0x5Fu:
        started = ScsiPersistentReserveOut(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0x88u:
      case 0x8Au:
        goto LABEL_20;
      case 0x9Bu:
        if ( (v10[1] & 0x1F) != 0x1C )
          goto LABEL_120;
        v58 = v10[14];
        if ( !v58 )
        {
          started = NVMeGetDeviceTelemetryHeader(a1, a2);
          goto LABEL_121;
        }
        if ( (unsigned __int8)(v58 - 16) > 0xDFu )
          goto LABEL_120;
        if ( v58 == *(_BYTE *)(a1 + 4124) )
        {
          LOBYTE(a4) = 1;
LABEL_118:
          started = NVMeGetDeviceTelemetryData(a1, a2, v10, a4);
          goto LABEL_121;
        }
        if ( v58 == *(_BYTE *)(a1 + 4125) )
        {
          a4 = 0LL;
          goto LABEL_118;
        }
LABEL_120:
        *(_BYTE *)(a2 + 3) = 6;
        started = -1056964601;
LABEL_121:
        v48 = 0;
        break;
      case 0xA0u:
        started = ScsiReportLunsCommand(a1, a2);
        v48 = 0;
        goto LABEL_62;
      case 0xA2u:
        started = ScsiSecurityProtocolInRequest(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      case 0xB5u:
        started = ScsiSecurityProtocolOutRequest(a1, a2, v10);
        v48 = 0;
        goto LABEL_62;
      default:
        LOBYTE(a4) = 32;
        LOBYTE(v9) = 5;
        LOBYTE(v52) = 6;
        NVMeSetSenseData(a2, v52, v9, a4);
        v48 = 0;
        started = -1056964601;
        goto LABEL_62;
    }
    goto LABEL_62;
  }
LABEL_20:
  if ( v4 == 40 )
    v19 = *(_QWORD *)(a2 + 104);
  else
    v19 = *(_QWORD *)(a2 + 56);
  if ( (v19 & 0xFFF) != 0 )
    v19 = v19 - (v19 & 0xFFF) + 4096;
  if ( v4 == 40 )
  {
    v20 = (_DWORD *)(a2 + 60);
    v21 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v21 = *(_BYTE *)(a2 + 7);
    v20 = (_DWORD *)(a2 + 16);
  }
  v22 = v21;
  v23 = *(_QWORD *)(a1 + 8LL * v21 + 1752);
  v24 = *(_DWORD *)(v23 + 52);
  v78 = v24;
  if ( !v24
    || !*(_QWORD *)(v23 + 56)
    || ((v80 = *(_WORD *)(v23 + 92), v4 != 40) ? (v25 = *(_DWORD *)(a2 + 12)) : (v25 = *(_DWORD *)(a2 + 24)),
        (v25 & 0xC0) == 0 || !*v20 || ((v24 - 1) & *v20) != 0) )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v9) = 5;
    LOBYTE(v20) = 6;
    NVMeSetSenseData(a2, v20, v9, a4);
    started = -1056964602;
    goto LABEL_61;
  }
  *(_BYTE *)(v19 + 4253) = *(_BYTE *)(v19 + 4253) & 0xFC | 2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v26 = *(_QWORD *)(a2 + 104);
  else
    v26 = *(_QWORD *)(a2 + 56);
  if ( (v26 & 0xFFF) != 0 )
    v26 = v26 - (v26 & 0xFFF) + 4096;
  if ( (*(_BYTE *)(v26 + 4253) & 1) != 0 )
  {
    v31 = *(_WORD *)(a1 + 352);
    goto LABEL_48;
  }
  if ( *(_BYTE *)(a1 + 20) )
  {
    v31 = *(_WORD *)(*(_QWORD *)(a1 + 792) + 40LL);
    goto LABEL_48;
  }
  LODWORD(v77) = 0;
  v83 = 0LL;
  v84 = 0;
  v82[1] = 20;
  v82[0] = 2;
  StorPortExtendedFunction(15LL, a1, a2, v82);
  LOWORD(v81) = v83;
  if ( (_WORD)v84 == 0xFFFF && BYTE2(v84) == 0xFF )
    StorPortExtendedFunction(17LL, a1, &v84, v27);
  StorPortExtendedFunction(56LL, a1, &v84, &v77);
  v28 = *(unsigned __int16 *)(a1 + 234);
  v29 = v77;
  if ( (unsigned int)v77 >= v28 )
  {
    v29 = (unsigned int)v77 % v28;
    LODWORD(v77) = (unsigned int)v77 % v28;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 264) + 48LL * v29 + 40) )
  {
    v54 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 24LL * (unsigned __int16)v81 + 16);
    v55 = *(_QWORD *)(*(_QWORD *)(v54 + 192)
                    + 8LL
                    * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v54 + 184), 1u)
                     % *(_DWORD *)(v54 + 180)));
    *(_QWORD *)(*(_QWORD *)(a1 + 264) + 48LL * v29 + 40) = v55;
    ++*(_WORD *)(v55 + 52);
    v29 = v77;
  }
  if ( *(_BYTE *)(a1 + 3832) )
  {
    SrbScsiData = (_BYTE *)GetSrbScsiData(a2, &v81, 0LL, 0LL, 0LL);
    if ( *SrbScsiData != 40
      && *SrbScsiData != 42
      && (unsigned __int8)*SrbScsiData != 136
      && (unsigned __int8)*SrbScsiData != 138 )
    {
      v30 = (unsigned int)v77;
      goto LABEL_46;
    }
    v62 = *(_BYTE *)(a2 + 2);
    if ( v62 == 40 && (v63 = *(_DWORD *)(a2 + 56)) != 0 )
    {
      v64 = 0;
      while ( 1 )
      {
        v65 = *(unsigned int *)(a2 + 4LL * v64 + 120);
        if ( (unsigned int)v65 >= 0x80 && (unsigned int)v65 < *(_DWORD *)(a2 + 16) )
        {
          v66 = (_DWORD *)(a2 + v65);
          if ( *v66 == 128 )
            break;
        }
        if ( ++v64 >= v63 )
        {
          v66 = 0LL;
          break;
        }
      }
    }
    else
    {
      v66 = 0LL;
      if ( v62 != 40 )
      {
        v67 = (_DWORD *)(a2 + 16);
        goto LABEL_153;
      }
    }
    v67 = (_DWORD *)(a2 + 60);
LABEL_153:
    v68 = *(_DWORD *)(a1 + 3844);
    if ( (v68 & 0x80u) != 0 || *v67 <= *(_DWORD *)(a1 + 3840) && v66 && (v66[2] & 2) == 0 )
    {
      if ( (v68 & 0x40) != 0 )
        v69 = *(unsigned __int16 *)(a1 + 306);
      else
        v69 = *(unsigned __int16 *)(a1 + 308);
      v31 = *(_WORD *)(136LL * (unsigned __int16)((unsigned int)v77 % v69) + *(_QWORD *)(a1 + 792) + 40);
    }
    else
    {
      v31 = *(_WORD *)(136LL
                     * (unsigned __int16)(*(_WORD *)(a1 + 308)
                                        + (unsigned int)v77
                                        % (unsigned __int16)(*(_WORD *)(a1 + 306) - *(_WORD *)(a1 + 308)))
                     + *(_QWORD *)(a1 + 792)
                     + 40);
    }
    goto LABEL_47;
  }
  v30 = v29;
LABEL_46:
  v31 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 48 * v30 + 40) + 40LL);
LABEL_47:
  v24 = v78;
LABEL_48:
  *(_WORD *)(v26 + 4244) = v31;
  if ( (unsigned int)v22 < *(_DWORD *)(a1 + 224) && (v32 = *(_QWORD *)(a1 + 8 * v22 + 1752)) != 0 )
    LODWORD(v77) = *(_DWORD *)(v32 + 16);
  else
    LODWORD(v77) = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v33 = (_DWORD *)(a2 + 60);
    v34 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v34 = *(_BYTE *)(a2 + 7);
    v33 = (_DWORD *)(a2 + 16);
  }
  v35 = *v10;
  if ( v35 == 40 )
    goto LABEL_54;
  v53 = v35 - 42;
  if ( !v53 )
  {
LABEL_75:
    *(_BYTE *)(v19 + 4096) = 1;
    if ( (*(_BYTE *)(a1 + 3808) & 3) == 3 && *(_BYTE *)(a1 + 3809) == v34 && *(_WORD *)(a1 + 3812) )
    {
      v86 = 0LL;
      memset(v85, 0, sizeof(v85));
      LOWORD(v85[0]) = 1;
      if ( (unsigned int)StorPortExtendedFunction(28LL, a1, a2, v85)
        || (WORD4(v85[0]) & 0x100) == 0
        || (unsigned int)(HIDWORD(v85[0]) - 1) > 0xFFFE
        || HIDWORD(v85[0]) > *(unsigned __int16 *)(a1 + 3812) )
      {
        v24 = v78;
      }
      else
      {
        v24 = v78;
        if ( WORD6(v85[0]) )
        {
          v71 = *(_DWORD *)(v19 + 4144) & 0xFF1FFFFF;
          *(_WORD *)(v19 + 4150) = WORD6(v85[0]);
          *(_DWORD *)(v19 + 4144) = v71 | 0x100000;
        }
      }
    }
    goto LABEL_55;
  }
  v70 = v53 - 94;
  if ( v70 )
  {
    if ( v70 != 2 )
      goto LABEL_55;
    goto LABEL_75;
  }
LABEL_54:
  *(_BYTE *)(v19 + 4096) = 2;
LABEL_55:
  *(_DWORD *)(v19 + 4096) &= 0xFFFFFCFF;
  *(_DWORD *)(v19 + 4100) = v77;
  *(_QWORD *)(v19 + 4112) = 0LL;
  v36 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v34 + 1752) + 52LL);
  v37 = *v33 + v36 - 1;
  if ( v36 == 512 )
    v38 = v37 >> 9;
  else
    v38 = v37 / v36;
  v77 = 0LL;
  if ( v79 == 16 )
  {
    v72 = v10[2];
    BYTE4(v77) = v10[5];
    BYTE3(v77) = v10[6];
    v73 = v10[7];
    HIBYTE(v77) = v72;
    v74 = v10[3];
    BYTE2(v77) = v73;
    v75 = v10[8];
    BYTE6(v77) = v74;
    v76 = v10[4];
    BYTE1(v77) = v75;
    v39 = v10[9];
    BYTE5(v77) = v76;
  }
  else
  {
    BYTE3(v77) = v10[2];
    BYTE2(v77) = v10[3];
    BYTE1(v77) = v10[4];
    v39 = v10[5];
    HIDWORD(v77) = 0;
  }
  LOBYTE(v77) = v39;
  v40 = v77;
  v41 = (unsigned int)v77;
  *(_WORD *)(v19 + 4144) = v38 - 1;
  *(_DWORD *)(v19 + 4144) &= 0xC3FFFFFF;
  v42 = HIDWORD(v40);
  v43 = *(_DWORD *)(v19 + 4144) & 0x3FFFFFFF;
  *(_DWORD *)(v19 + 4140) = v42;
  *(_DWORD *)(v19 + 4136) = v41;
  v44 = v10[1] & 8;
  *(_BYTE *)(v19 + 4148) = 0;
  v45 = v43 | (v44 << 27);
  *(_QWORD *)(v19 + 4152) = 0LL;
  *(_DWORD *)(v19 + 4144) = v45;
  v46 = *(_DWORD *)(a1 + 60);
  if ( v46 >= v24 && !(v46 % v24) )
  {
    LOWORD(v47) = v80;
    goto LABEL_79;
  }
  LOWORD(v47) = v80;
  if ( v80 )
  {
LABEL_79:
    if ( (_WORD)v47 )
      v47 = (unsigned __int16)v47;
    else
      v47 = v46 / v24;
    v48 = (__int64)(v41 | (v42 << 32)) / v47 != (__int64)((v41 | (v42 << 32))
                                                        - 1
                                                        + (unsigned int)(unsigned __int16)v45
                                                        + 1)
                                              / v47;
    goto LABEL_62;
  }
LABEL_61:
  v48 = 0;
LABEL_62:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
      v49 = MdlToPrp(a1, a2);
    else
      v49 = SglToPrp(a1, a2);
    started = v49;
    if ( v49 )
    {
      ++*(_DWORD *)(a1 + 3872);
      *(_BYTE *)(a2 + 3) = 4;
    }
    else if ( v48 )
    {
      NVMeSplitIoCommand(a1, a2);
    }
  }
  return started;
}
