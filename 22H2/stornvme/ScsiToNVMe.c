/*
 * XREFs of ScsiToNVMe @ 0x1C0004A30
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0004930 (NVMeHwBuildIo.c)
 * Callees:
 *     ScsiUnmapRequest @ 0x1C0002794 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C000294C (ScsiModeSenseRequest.c)
 *     GetSrbScsiData @ 0x1C0004498 (GetSrbScsiData.c)
 *     ScsiReadCapacityRequest @ 0x1C0004828 (ScsiReadCapacityRequest.c)
 *     MdlToPrp @ 0x1C0005410 (MdlToPrp.c)
 *     ScsiSyncCacheRequest @ 0x1C0005848 (ScsiSyncCacheRequest.c)
 *     ScsiInquiryRequest @ 0x1C0005E04 (ScsiInquiryRequest.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001476C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001495C (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSplitIoCommand @ 0x1C001546C (NVMeSplitIoCommand.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0015964 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C0015C4C (NVMeWriteBufferFirmwareDownload.c)
 *     ScsiLogSenseRequest @ 0x1C0016B1C (ScsiLogSenseRequest.c)
 *     ScsiModeSelectRequest @ 0x1C0016BA8 (ScsiModeSelectRequest.c)
 *     ScsiReportLunsCommand @ 0x1C0016D78 (ScsiReportLunsCommand.c)
 *     ScsiSanitizeRequest @ 0x1C0016E54 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C0016FEC (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00170F4 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00171FC (ScsiStartStopUnitRequest.c)
 *     SglToPrp @ 0x1C001755C (SglToPrp.c)
 *     NVMeSetSenseData @ 0x1C001BFEC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiToNVMe(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  char v4; // r11
  unsigned int started; // edi
  __int64 v6; // rbx
  unsigned int v8; // r15d
  unsigned __int8 *v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rax
  bool v16; // r12
  unsigned __int8 v17; // cl
  _DWORD *v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r12
  __int16 v25; // ax
  __int64 v26; // r9
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  __int64 v29; // r8
  unsigned __int32 v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  _BYTE *SrbScsiData; // rax
  char v34; // r9
  unsigned int v35; // r8d
  unsigned __int8 v36; // dl
  __int64 v37; // rcx
  _DWORD *v38; // rcx
  __int64 v39; // r8
  int v40; // edx
  unsigned int v41; // ecx
  __int64 v42; // rax
  unsigned __int8 v43; // cl
  __int64 v44; // r12
  unsigned int v45; // eax
  _DWORD *v46; // rax
  unsigned int v47; // r8d
  unsigned int v48; // r9d
  unsigned __int8 v49; // al
  unsigned int v50; // r11d
  int v51; // eax
  int v52; // ecx
  int v53; // ecx
  unsigned int v54; // r9d
  unsigned int v55; // eax
  unsigned __int8 v56; // al
  char v57; // al
  unsigned int v58; // eax
  unsigned int v60; // [rsp+30h] [rbp-59h]
  __int64 v61; // [rsp+30h] [rbp-59h]
  unsigned int v62; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v63; // [rsp+3Ch] [rbp-4Dh]
  __int16 v64; // [rsp+40h] [rbp-49h]
  unsigned int v65; // [rsp+44h] [rbp-45h]
  __int64 v66; // [rsp+48h] [rbp-41h]
  char v67; // [rsp+50h] [rbp-39h]
  int v68; // [rsp+54h] [rbp-35h] BYREF
  unsigned int v69; // [rsp+58h] [rbp-31h]
  int v70; // [rsp+5Ch] [rbp-2Dh]
  __int64 v71; // [rsp+60h] [rbp-29h]
  _DWORD v72[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v73; // [rsp+70h] [rbp-19h]
  int v74; // [rsp+78h] [rbp-11h] BYREF
  _OWORD v75[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v76; // [rsp+A0h] [rbp+17h]

  v4 = *(_BYTE *)(a2 + 2);
  started = 0;
  LOBYTE(a4) = 0;
  v63 = 0;
  v6 = a2;
  v8 = 0;
  v9 = 0LL;
  if ( v4 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v10 = *(_DWORD *)(a2 + 56);
      if ( v10 )
      {
        a3 = (unsigned int *)(a2 + 120);
        v11 = v10;
        do
        {
          v12 = *a3;
          if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 <= *(_DWORD *)(v6 + 16) )
          {
            v13 = v6 + v12;
            a2 = (unsigned int)(*(_DWORD *)(v6 + v12) - 64);
            if ( *(_DWORD *)(v6 + v12) == 64 )
            {
              v8 = *(unsigned __int8 *)(v13 + 10);
              LOBYTE(a4) = 1;
              v63 = v8;
              if ( (_BYTE)v8 )
                v9 = (unsigned __int8 *)(v13 + 24);
            }
            else
            {
              a2 = (unsigned int)(*(_DWORD *)(v6 + v12) - 65);
              if ( *(_DWORD *)(v6 + v12) == 65 )
              {
                v8 = *(unsigned __int8 *)(v13 + 10);
                v15 = (unsigned __int8 *)(v13 + 24);
                v63 = v8;
                LOBYTE(a4) = 1;
                if ( !(_BYTE)v8 )
                  v15 = v9;
                v9 = v15;
              }
              else if ( *(_DWORD *)(v6 + v12) == 66 )
              {
                v14 = (unsigned __int8 *)(v13 + 32);
                v63 = *(_DWORD *)(v13 + 12);
                v8 = v63;
                a4 = 1LL;
                if ( !v63 )
                  v14 = v9;
                v9 = v14;
              }
            }
          }
          ++a3;
          --v11;
        }
        while ( v11 );
        if ( (_BYTE)a4 )
          goto LABEL_21;
      }
    }
  }
  else if ( !v4 )
  {
    v8 = *(unsigned __int8 *)(a2 + 10);
    v63 = v8;
    if ( (_BYTE)v8 )
      v9 = (unsigned __int8 *)(a2 + 72);
    goto LABEL_21;
  }
  v8 = 0;
  v63 = 0;
LABEL_21:
  v16 = 0;
  v67 = 0;
  if ( v4 == 40 )
    v17 = *(_BYTE *)(*(unsigned int *)(v6 + 52) + v6 + 10);
  else
    v17 = *(_BYTE *)(v6 + 7);
  v70 = v17;
  if ( v8 < 6 || !v9 )
  {
    LOBYTE(a4) = 32;
    goto LABEL_165;
  }
  if ( *v9 != 0xA0 )
  {
    a2 = *(_QWORD *)(a1 + 8LL * v17 + 1736);
    if ( !a2 || !*(_DWORD *)(a2 + 52) )
    {
      LOBYTE(a4) = 37;
LABEL_165:
      LOBYTE(a3) = 5;
      LOBYTE(a2) = 8;
      NVMeSetSenseData(v6, a2, a3, a4);
      return 3238002695LL;
    }
  }
  v18 = (_DWORD *)0x1C0000000LL;
  switch ( *v9 )
  {
    case 0u:
    case 0x2Fu:
    case 0x8Fu:
      *(_BYTE *)(v6 + 3) = 1;
      goto LABEL_153;
    case 0x12u:
      started = ScsiInquiryRequest(a1, v6, v9);
      goto LABEL_153;
    case 0x15u:
    case 0x55u:
      started = ScsiModeSelectRequest(a1, v6, v9);
      goto LABEL_153;
    case 0x1Au:
    case 0x5Au:
      started = ScsiModeSenseRequest(a1, v6, v9);
      goto LABEL_153;
    case 0x1Bu:
      started = ScsiStartStopUnitRequest(a1, v6, v9);
      goto LABEL_153;
    case 0x25u:
    case 0x9Eu:
      started = ScsiReadCapacityRequest(a1, v6, v9, v8);
      goto LABEL_153;
    case 0x28u:
    case 0x2Au:
    case 0x88u:
    case 0x8Au:
      if ( v4 == 40 )
        v19 = *(_QWORD *)(v6 + 104);
      else
        v19 = *(_QWORD *)(v6 + 56);
      if ( (v19 & 0xFFF) != 0 )
        v19 = v19 - (v19 & 0xFFF) + 4096;
      if ( v4 == 40 )
      {
        v20 = 60LL;
        v60 = *(unsigned __int8 *)(*(unsigned int *)(v6 + 52) + v6 + 10);
        v21 = *(unsigned __int8 *)(*(unsigned int *)(v6 + 52) + v6 + 10);
        v65 = v60;
      }
      else
      {
        v60 = *(unsigned __int8 *)(v6 + 7);
        v21 = *(unsigned __int8 *)(v6 + 7);
        v65 = v60;
        v20 = 16LL;
      }
      a4 = a1 + 8 * (v21 + 217);
      v22 = *(_QWORD *)a4;
      v18 = (_DWORD *)(v6 + v20);
      v71 = v6 + v20;
      v66 = a4;
      a3 = (unsigned int *)*(unsigned int *)(v22 + 52);
      v69 = (unsigned int)a3;
      if ( !(_DWORD)a3 || !*(_QWORD *)(v22 + 56) )
        goto LABEL_53;
      v64 = *(_WORD *)(v22 + 92);
      v23 = v4 == 40 ? *(_DWORD *)(v6 + 24) : *(_DWORD *)(v6 + 12);
      if ( (v23 & 0xC0) == 0 || !*v18 || (((_DWORD)a3 - 1) & *v18) != 0 )
        goto LABEL_53;
      *(_BYTE *)(v19 + 4253) = *(_BYTE *)(v19 + 4253) & 0xFC | 2;
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v24 = *(_QWORD *)(v6 + 104);
      else
        v24 = *(_QWORD *)(v6 + 56);
      if ( (v24 & 0xFFF) != 0 )
        v24 = v24 - (v24 & 0xFFF) + 4096;
      if ( (*(_BYTE *)(v24 + 4253) & 1) != 0 )
      {
        v25 = *(_WORD *)(a1 + 336);
        goto LABEL_100;
      }
      if ( *(_BYTE *)(a1 + 16) )
      {
        v25 = *(_WORD *)(*(_QWORD *)(a1 + 776) + 40LL);
        goto LABEL_100;
      }
      v62 = 0;
      v73 = 0LL;
      v74 = 0;
      v72[1] = 20;
      v72[0] = 2;
      StorPortExtendedFunction(15LL, a1, v6, v72);
      LOWORD(v68) = v73;
      if ( (_WORD)v74 == 0xFFFF && BYTE2(v74) == 0xFF )
        StorPortExtendedFunction(17LL, a1, &v74, v26);
      StorPortExtendedFunction(56LL, a1, &v74, &v62);
      v27 = *(unsigned __int16 *)(a1 + 218);
      v28 = v62;
      if ( v62 >= v27 )
      {
        v28 = v62 % v27;
        v62 %= v27;
      }
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 248) + 48LL * v28 + 40) )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 24LL * (unsigned __int16)v68 + 16);
        v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 184), 1u);
        v8 = v63;
        v31 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 8LL * (v30 % *(_DWORD *)(v29 + 180)));
        *(_QWORD *)(*(_QWORD *)(a1 + 248) + 48LL * v28 + 40) = v31;
        ++*(_WORD *)(v31 + 52);
        v28 = v62;
        v60 = v65;
      }
      if ( !*(_BYTE *)(a1 + 3816) )
      {
        v32 = v28;
LABEL_74:
        v25 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 48 * v32 + 40) + 40LL);
        goto LABEL_99;
      }
      SrbScsiData = (_BYTE *)GetSrbScsiData(v6, &v68, 0LL, 0LL, 0LL);
      if ( *SrbScsiData != 40
        && *SrbScsiData != 42
        && (unsigned __int8)*SrbScsiData != 136
        && (unsigned __int8)*SrbScsiData != 138 )
      {
        v32 = v62;
        goto LABEL_74;
      }
      v34 = *(_BYTE *)(v6 + 2);
      if ( v34 == 40 )
      {
        v35 = *(_DWORD *)(v6 + 56);
        if ( v35 )
        {
          v36 = 0;
          do
          {
            v37 = *(unsigned int *)(v6 + 4LL * v36 + 120);
            if ( (unsigned int)v37 >= 0x80 && (unsigned int)v37 < *(_DWORD *)(v6 + 16) )
            {
              v38 = (_DWORD *)(v6 + v37);
              if ( *v38 == 128 )
                goto LABEL_88;
            }
          }
          while ( ++v36 < v35 );
        }
      }
      v38 = 0LL;
      if ( v34 == 40 )
      {
LABEL_88:
        v39 = 60LL;
        goto LABEL_90;
      }
      v39 = 16LL;
LABEL_90:
      v40 = *(_DWORD *)(a1 + 3828);
      if ( (v40 & 0x80u) != 0 || *(_DWORD *)(v6 + v39) <= *(_DWORD *)(a1 + 3824) && v38 && (v38[2] & 2) == 0 )
      {
        if ( (v40 & 0x40) != 0 )
          v41 = *(unsigned __int16 *)(a1 + 290);
        else
          v41 = *(unsigned __int16 *)(a1 + 292);
        v25 = *(_WORD *)(136LL * (unsigned __int16)(v62 % v41) + *(_QWORD *)(a1 + 776) + 40);
      }
      else
      {
        v25 = *(_WORD *)(136LL
                       * (unsigned __int16)(*(_WORD *)(a1 + 292)
                                          + v62 % (unsigned __int16)(*(_WORD *)(a1 + 290) - *(_WORD *)(a1 + 292)))
                       + *(_QWORD *)(a1 + 776)
                       + 40);
      }
LABEL_99:
      a4 = v66;
LABEL_100:
      *(_WORD *)(v24 + 4244) = v25;
      if ( v60 < *(_DWORD *)(a1 + 208) && *(_QWORD *)a4 )
        v65 = *(_DWORD *)(*(_QWORD *)a4 + 16LL);
      else
        v65 = 0;
      if ( *(_BYTE *)(v6 + 2) == 40 )
      {
        v42 = *(unsigned int *)(v6 + 52);
        v66 = v6 + 60;
        v43 = *(_BYTE *)(v42 + v6 + 10);
      }
      else
      {
        v43 = *(_BYTE *)(v6 + 7);
        v66 = v6 + 16;
      }
      v44 = v43;
      switch ( *v9 )
      {
        case 0x28u:
          goto LABEL_120;
        case 0x2Au:
          goto LABEL_111;
        case 0x88u:
LABEL_120:
          *(_BYTE *)(v19 + 4096) = 2;
          break;
        case 0x8Au:
LABEL_111:
          *(_BYTE *)(v19 + 4096) = 1;
          if ( (*(_BYTE *)(a1 + 3792) & 3) == 3 && *(unsigned __int8 *)(a1 + 3793) == v43 )
          {
            if ( *(_WORD *)(a1 + 3796) )
            {
              v76 = 0LL;
              memset(v75, 0, sizeof(v75));
              LOWORD(v75[0]) = 1;
              if ( !(unsigned int)StorPortExtendedFunction(28LL, a1, v6, v75)
                && (WORD4(v75[0]) & 0x100) != 0
                && (unsigned int)(HIDWORD(v75[0]) - 1) <= 0xFFFE
                && HIDWORD(v75[0]) <= *(unsigned __int16 *)(a1 + 3796)
                && WORD6(v75[0]) )
              {
                v45 = *(_DWORD *)(v19 + 4144) & 0xFF1FFFFF;
                *(_WORD *)(v19 + 4150) = WORD6(v75[0]);
                *(_DWORD *)(v19 + 4144) = v45 | 0x100000;
              }
            }
          }
          break;
      }
      *(_DWORD *)(v19 + 4096) &= 0xFFFFFCFF;
      *(_DWORD *)(v19 + 4100) = v65;
      v46 = (_DWORD *)v66;
      *(_QWORD *)(v19 + 4112) = 0LL;
      v47 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v44 + 1736) + 52LL);
      v48 = (v47 + *v46 - 1) / v47;
      if ( v8 == 16 )
      {
        HIBYTE(v61) = v9[2];
        BYTE3(v61) = v9[6];
        BYTE6(v61) = v9[3];
        BYTE2(v61) = v9[7];
        BYTE5(v61) = v9[4];
        BYTE1(v61) = v9[8];
        v49 = v9[9];
        BYTE4(v61) = v9[5];
      }
      else
      {
        BYTE3(v61) = v9[2];
        BYTE2(v61) = v9[3];
        BYTE1(v61) = v9[4];
        v49 = v9[5];
        HIDWORD(v61) = 0;
      }
      v50 = v69;
      *(_WORD *)(v19 + 4144) = v48 - 1;
      *(_DWORD *)(v19 + 4144) &= 0xC3FFFFFF;
      LOBYTE(v61) = v49;
      v51 = *(_DWORD *)(v19 + 4144) & 0x3FFFFFFF;
      *(_QWORD *)(v19 + 4136) = v61;
      v52 = v9[1] & 8;
      *(_BYTE *)(v19 + 4148) = 0;
      v53 = v51 | (v52 << 27);
      *(_QWORD *)(v19 + 4152) = 0LL;
      *(_DWORD *)(v19 + 4144) = v53;
      v54 = *(_DWORD *)(a1 + 52);
      if ( v54 < v50 || v54 % v50 )
      {
        LOWORD(v55) = v64;
        if ( !v64 )
        {
          v16 = 0;
          goto LABEL_153;
        }
      }
      else
      {
        LOWORD(v55) = v64;
      }
      v66 = v61;
      if ( (_WORD)v55 )
        v55 = (unsigned __int16)v55;
      else
        v55 = v54 / v50;
      v16 = v66 / v55 != (v66 + (unsigned int)(unsigned __int16)v53 + 1 - 1LL) / v55;
LABEL_153:
      if ( !*(_BYTE *)(v6 + 3) )
      {
        if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
          v58 = MdlToPrp(a1, v6);
        else
          v58 = SglToPrp(a1, v6);
        if ( v58 )
          ++*(_DWORD *)(a1 + 3856);
        started = v58;
        if ( v58 )
        {
          *(_BYTE *)(v6 + 3) = 4;
        }
        else if ( v16 )
        {
          NVMeSplitIoCommand(a1, v6);
          return started;
        }
      }
      return started;
    case 0x35u:
      started = ScsiSyncCacheRequest(a1, v6, a3);
      goto LABEL_153;
    case 0x3Bu:
      v57 = v9[1] & 0x1F;
      if ( v57 == 14 )
      {
        started = NVMeWriteBufferFirmwareDownload(a1, v6, v9);
      }
      else if ( v57 == 15 )
      {
        started = NVMeWriteBufferFirmwareActivate(a1, v6, v9);
      }
      else
      {
LABEL_53:
        LOBYTE(a4) = 36;
        LOBYTE(a3) = 5;
        LOBYTE(v18) = 6;
        NVMeSetSenseData(v6, v18, a3, a4);
        started = -1056964602;
      }
      goto LABEL_153;
    case 0x42u:
      started = ScsiUnmapRequest(a1, v6);
      goto LABEL_153;
    case 0x48u:
      started = ScsiSanitizeRequest(a1, v6, v9);
      goto LABEL_153;
    case 0x4Du:
      started = ScsiLogSenseRequest(a1, v6, v9);
      goto LABEL_153;
    case 0x9Bu:
      if ( (v9[1] & 0x1F) != 0x1C )
        goto LABEL_146;
      v56 = v9[14];
      if ( v56 )
      {
        if ( (unsigned __int8)(v56 - 16) > 0xDFu )
        {
LABEL_146:
          *(_BYTE *)(v6 + 3) = 6;
          goto LABEL_152;
        }
        started = NVMeGetDeviceTelemetryData(a1, v6, v9);
      }
      else
      {
        started = NVMeGetDeviceTelemetryHeader(a1, v6, a3);
      }
      goto LABEL_153;
    case 0xA0u:
      started = ScsiReportLunsCommand(a1, v6, a3);
      goto LABEL_153;
    case 0xA2u:
      started = ScsiSecurityProtocolInRequest(a1, v6, v9);
      goto LABEL_153;
    case 0xB5u:
      started = ScsiSecurityProtocolOutRequest(a1, v6, v9);
      goto LABEL_153;
    default:
      LOBYTE(a4) = 32;
      LOBYTE(a3) = 5;
      LOBYTE(v18) = 6;
      NVMeSetSenseData(v6, v18, a3, a4);
LABEL_152:
      started = -1056964601;
      goto LABEL_153;
  }
}
