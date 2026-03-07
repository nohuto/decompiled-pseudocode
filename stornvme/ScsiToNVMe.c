__int64 __fastcall ScsiToNVMe(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r10
  unsigned int started; // esi
  char v6; // r11
  unsigned __int64 v7; // rbx
  unsigned int v9; // r12d
  unsigned __int8 *v10; // r14
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // r15
  unsigned __int8 v15; // cl
  __int64 v16; // rcx
  __int64 v17; // rdi
  int *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r13d
  int v22; // eax
  int v23; // ecx
  unsigned __int8 v24; // r15
  int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  unsigned int v28; // r8d
  unsigned __int8 v29; // al
  int v30; // ecx
  unsigned int v31; // r8d
  unsigned __int64 v32; // r11
  bool v33; // zf
  int v34; // r8d
  unsigned int v35; // ecx
  unsigned __int16 v37; // ax
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // r9
  __int128 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // eax
  int v45; // ecx
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rax
  unsigned __int8 v48; // cl
  char v49; // al
  int v50; // eax
  int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // [rsp+30h] [rbp-88h]
  int v54; // [rsp+30h] [rbp-88h]
  unsigned __int64 v55; // [rsp+30h] [rbp-88h]
  unsigned __int16 v56; // [rsp+38h] [rbp-80h]
  __int64 *v57; // [rsp+40h] [rbp-78h]
  _DWORD *v58; // [rsp+40h] [rbp-78h]
  _OWORD v59[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v60; // [rsp+68h] [rbp-50h]

  v4 = *(_BYTE *)(a2 + 2);
  started = 0;
  v6 = 0;
  v7 = a2;
  v9 = 0;
  v10 = 0LL;
  if ( v4 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v11 = *(_DWORD *)(a2 + 56);
      if ( v11 )
      {
        a2 += 120LL;
        a4 = v11;
        do
        {
          v12 = *(unsigned int *)a2;
          if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 <= *(_DWORD *)(v7 + 16) )
          {
            a3 = *(unsigned int *)(v7 + v12);
            v13 = v7 + v12;
            if ( (_DWORD)a3 == 64 )
            {
              v9 = *(unsigned __int8 *)(v13 + 10);
              v6 = 1;
              if ( (_BYTE)v9 )
                v10 = (unsigned __int8 *)(v13 + 24);
            }
            else
            {
              a3 = (unsigned int)(a3 - 65);
              if ( (_DWORD)a3 )
              {
                if ( (_DWORD)a3 == 1 )
                {
                  v9 = *(_DWORD *)(v13 + 12);
                  v46 = (unsigned __int8 *)(v13 + 32);
                  v6 = 1;
                  if ( !v9 )
                    v46 = v10;
                  v10 = v46;
                }
              }
              else
              {
                v9 = *(unsigned __int8 *)(v13 + 10);
                v47 = (unsigned __int8 *)(v13 + 24);
                v6 = 1;
                if ( !(_BYTE)v9 )
                  v47 = v10;
                v10 = v47;
              }
            }
          }
          a2 += 4LL;
          --a4;
        }
        while ( a4 );
        if ( v6 )
          goto LABEL_12;
      }
    }
LABEL_77:
    v9 = 0;
    goto LABEL_12;
  }
  if ( v4 )
    goto LABEL_77;
  v9 = *(unsigned __int8 *)(a2 + 10);
  if ( (_BYTE)v9 )
  {
    v10 = (unsigned __int8 *)(a2 + 72);
    v14 = 0;
    goto LABEL_86;
  }
LABEL_12:
  v14 = 0;
  if ( v4 != 40 )
  {
LABEL_86:
    v15 = *(_BYTE *)(v7 + 7);
    goto LABEL_14;
  }
  v15 = *(_BYTE *)(*(unsigned int *)(v7 + 52) + v7 + 10);
LABEL_14:
  if ( v9 < 6 || !v10 )
  {
    LOBYTE(a4) = 32;
    goto LABEL_145;
  }
  a2 = *v10;
  if ( (unsigned __int8)(a2 + 96) > 0x15u || (a3 = 2097157LL, !_bittest((const int *)&a3, a2 + 96)) )
  {
    v16 = *(_QWORD *)(a1 + 8LL * v15 + 1952);
    if ( !v16 || !*(_DWORD *)(v16 + 52) )
    {
      LOBYTE(a4) = 37;
LABEL_145:
      LOBYTE(a3) = 5;
      LOBYTE(a2) = 8;
      NVMeSetSenseData(v7, a2, a3, a4);
      return 3238002695LL;
    }
  }
  if ( (_DWORD)a2 != 40 && (_DWORD)a2 != 42 )
  {
    a2 = 0x1C0000000uLL;
    switch ( *v10 )
    {
      case 0u:
      case 0x2Fu:
      case 0x8Fu:
        *(_BYTE *)(v7 + 3) = 1;
        goto LABEL_58;
      case 0x12u:
        started = ScsiInquiryRequest(a1, v7, v10);
        goto LABEL_58;
      case 0x15u:
      case 0x55u:
        started = ScsiModeSelectRequest(a1, v7, v10);
        goto LABEL_58;
      case 0x1Au:
      case 0x5Au:
        started = ScsiModeSenseRequest(a1, v7, v10);
        goto LABEL_58;
      case 0x1Bu:
        started = ScsiStartStopUnitRequest(a1, v7, v10);
        goto LABEL_58;
      case 0x25u:
      case 0x9Eu:
        started = ScsiReadCapacityRequest(a1, v7, v10, v9);
        goto LABEL_58;
      case 0x35u:
        started = ScsiSyncCacheRequest(a1, v7);
        goto LABEL_58;
      case 0x3Bu:
        v49 = v10[1] & 0x1F;
        if ( v49 == 14 )
        {
          v50 = NVMeWriteBufferFirmwareDownload(a1, v7, v10);
        }
        else if ( v49 == 15 )
        {
          v50 = NVMeWriteBufferFirmwareActivate(a1, v7, v10);
        }
        else
        {
          LOBYTE(a4) = 36;
          LOBYTE(a3) = 5;
          LOBYTE(a2) = 6;
          NVMeSetSenseData(v7, a2, a3, a4);
          v50 = -1056964602;
        }
        started = v50;
        goto LABEL_58;
      case 0x42u:
        started = ScsiUnmapRequest(a1, v7, v10);
        goto LABEL_58;
      case 0x48u:
        started = ScsiSanitizeRequest(a1, v7, v10);
        goto LABEL_58;
      case 0x4Du:
        started = ScsiLogSenseRequest(a1, v7, v10);
        goto LABEL_58;
      case 0x5Eu:
        started = ScsiPersistentReserveIn(a1, v7, v10);
        goto LABEL_58;
      case 0x5Fu:
        started = ScsiPersistentReserveOut(a1, v7, v10);
        goto LABEL_58;
      case 0x88u:
      case 0x8Au:
        goto LABEL_21;
      case 0x9Bu:
        if ( (v10[1] & 0x1F) != 0x1C )
          goto LABEL_110;
        v48 = v10[14];
        if ( !v48 )
        {
          started = NVMeGetDeviceTelemetryHeader(a1, v7);
          goto LABEL_58;
        }
        if ( (unsigned __int8)(v48 - 16) > 0xDFu )
          goto LABEL_110;
        if ( v48 == *(_BYTE *)(a1 + 4324) )
        {
          LOBYTE(a4) = 1;
LABEL_109:
          started = NVMeGetDeviceTelemetryData(a1, v7, v10, a4);
          goto LABEL_58;
        }
        if ( v48 == *(_BYTE *)(a1 + 4325) )
        {
          a4 = 0LL;
          goto LABEL_109;
        }
LABEL_110:
        *(_BYTE *)(v7 + 3) = 6;
        started = -1056964601;
        break;
      case 0xA0u:
        started = ScsiReportLunsCommand(a1, v7);
        goto LABEL_58;
      case 0xA2u:
        started = ScsiSecurityProtocolInRequest(a1, v7, v10);
        goto LABEL_58;
      case 0xB5u:
        started = ScsiSecurityProtocolOutRequest(a1, v7, v10);
        goto LABEL_58;
      default:
        LOBYTE(a4) = 32;
        LOBYTE(a3) = 5;
        LOBYTE(a2) = 6;
        NVMeSetSenseData(v7, a2, a3, a4);
        started = -1056964601;
        goto LABEL_58;
    }
    goto LABEL_58;
  }
LABEL_21:
  if ( v4 == 40 )
    v17 = *(_QWORD *)(v7 + 104);
  else
    v17 = *(_QWORD *)(v7 + 56);
  if ( (v17 & 0xFFF) != 0 )
    v17 = v17 - (v17 & 0xFFF) + 4096;
  if ( v4 == 40 )
  {
    v18 = (int *)(v7 + 60);
    v19 = *(unsigned __int8 *)(*(unsigned int *)(v7 + 52) + v7 + 10);
  }
  else
  {
    v19 = *(unsigned __int8 *)(v7 + 7);
    v18 = (int *)(v7 + 16);
  }
  v53 = v19;
  v57 = (__int64 *)(a1 + 8 * v19 + 1952);
  v20 = *v57;
  v21 = *(_DWORD *)(*v57 + 52);
  if ( !v21
    || !*(_QWORD *)(v20 + 56)
    || ((v56 = *(_WORD *)(v20 + 92), v4 != 40) ? (v22 = *(_DWORD *)(v7 + 12)) : (v22 = *(_DWORD *)(v7 + 24)),
        (v22 & 0xC0) == 0 || (v23 = *v18) == 0 || ((v21 - 1) & v23) != 0) )
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v7, a2, a3, a4);
    started = -1056964602;
    goto LABEL_58;
  }
  *(_BYTE *)(v17 + 4253) = *(_BYTE *)(v17 + 4253) & 0xFC | 2;
  SrbAssignQueueId(a1, v7);
  if ( v53 < *(_DWORD *)(a1 + 232) && *v57 )
    v54 = *(_DWORD *)(*v57 + 16);
  else
    v54 = 0;
  if ( *(_BYTE *)(v7 + 2) == 40 )
  {
    v58 = (_DWORD *)(v7 + 60);
    v24 = *(_BYTE *)(*(unsigned int *)(v7 + 52) + v7 + 10);
  }
  else
  {
    v24 = *(_BYTE *)(v7 + 7);
    v58 = (_DWORD *)(v7 + 16);
  }
  v25 = *v10;
  if ( v25 == 40 )
    goto LABEL_40;
  v45 = v25 - 42;
  if ( !v45 )
  {
LABEL_70:
    *(_BYTE *)(v17 + 4096) = 1;
    if ( (*(_BYTE *)(a1 + 4008) & 3) == 3 && *(_BYTE *)(a1 + 4009) == v24 )
    {
      if ( *(_WORD *)(a1 + 4012) )
      {
        v60 = 0LL;
        memset(v59, 0, sizeof(v59));
        LOWORD(v59[0]) = 1;
        if ( !(unsigned int)StorPortExtendedFunction(28LL, a1, v7, v59)
          && (WORD4(v59[0]) & 0x100) != 0
          && (unsigned int)(HIDWORD(v59[0]) - 1) <= 0xFFFE
          && HIDWORD(v59[0]) <= *(unsigned __int16 *)(a1 + 4012)
          && WORD6(v59[0]) )
        {
          v52 = *(_DWORD *)(v17 + 4144) & 0xFF1FFFFF;
          *(_WORD *)(v17 + 4150) = WORD6(v59[0]);
          *(_DWORD *)(v17 + 4144) = v52 | 0x100000;
        }
      }
    }
    goto LABEL_41;
  }
  v51 = v45 - 94;
  if ( v51 )
  {
    if ( v51 != 2 )
      goto LABEL_41;
    goto LABEL_70;
  }
LABEL_40:
  *(_BYTE *)(v17 + 4096) = 2;
LABEL_41:
  *(_DWORD *)(v17 + 4096) &= 0xFFFFFCFF;
  *(_DWORD *)(v17 + 4100) = v54;
  *(_QWORD *)(v17 + 4112) = 0LL;
  v26 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v24 + 1952) + 52LL);
  v27 = v26 + *v58 - 1;
  if ( v26 == 512 )
    v28 = v27 >> 9;
  else
    v28 = v27 / v26;
  if ( v9 == 16 )
  {
    BYTE4(v55) = v10[5];
    BYTE3(v55) = v10[6];
    HIBYTE(v55) = v10[2];
    BYTE2(v55) = v10[7];
    BYTE6(v55) = v10[3];
    BYTE1(v55) = v10[8];
    v29 = v10[9];
    BYTE5(v55) = v10[4];
  }
  else
  {
    BYTE3(v55) = v10[2];
    BYTE2(v55) = v10[3];
    BYTE1(v55) = v10[4];
    v29 = v10[5];
    HIDWORD(v55) = 0;
  }
  LOBYTE(v55) = v29;
  v30 = 0x40000000;
  *(_WORD *)(v17 + 4144) = v28 - 1;
  v31 = *(_DWORD *)(v17 + 4144) & 0xC3FFFFFF;
  v32 = HIDWORD(v55);
  *(_DWORD *)(v17 + 4144) = v31;
  *(_QWORD *)(v17 + 4136) = v55;
  v33 = (v10[1] & 8) == 0;
  *(_BYTE *)(v17 + 4148) = 0;
  if ( v33 )
    v30 = 0;
  *(_QWORD *)(v17 + 4152) = 0LL;
  v34 = v30 & 0x7FFFFFFF | v31 & 0x3FFFFFFF;
  *(_DWORD *)(v17 + 4144) = v34;
  v35 = *(_DWORD *)(a1 + 60);
  if ( v35 >= v21 && !(v21 == 512 ? *(_DWORD *)(a1 + 60) & 0x1FF : v35 % v21) )
  {
    v37 = v56;
LABEL_52:
    v38 = (unsigned __int16)v34 + 1;
    if ( v37 )
    {
      v39 = v37;
    }
    else if ( v21 == 512 )
    {
      v39 = v35 >> 9;
    }
    else
    {
      v39 = v35 / v21;
    }
    v40 = v39;
    if ( v39 == 256LL )
    {
      v41 = (__int64)(v38 + ((unsigned int)v55 | (v32 << 32)) - 1);
      v42 = (__int64)(v41 + BYTE8(v41)) >> 8;
    }
    else
    {
      v42 = (__int64)(v38 + ((unsigned int)v55 | (v32 << 32)) - 1) / v39;
    }
    v14 = (__int64)((unsigned int)v55 | (v32 << 32)) / v40 != v42;
    goto LABEL_58;
  }
  v37 = v56;
  if ( v56 )
    goto LABEL_52;
  v14 = 0;
LABEL_58:
  if ( !*(_BYTE *)(v7 + 3) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
      v43 = MdlToPrp(a1, v7);
    else
      v43 = SglToPrp(a1, v7);
    started = v43;
    if ( v43 )
    {
      ++*(_DWORD *)(a1 + 4072);
      *(_BYTE *)(v7 + 3) = 4;
    }
    else if ( v14 )
    {
      NVMeSplitIoCommand(a1, v7);
    }
  }
  return started;
}
