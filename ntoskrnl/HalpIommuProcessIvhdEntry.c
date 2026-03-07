int __fastcall HalpIommuProcessIvhdEntry(__int64 a1, __int64 a2, char *a3)
{
  char v6; // bl
  bool v7; // cf
  __int64 *v8; // rax
  unsigned __int64 v9; // rcx
  __int16 v10; // ax
  unsigned __int64 v11; // r15
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // r14
  int result; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r9d
  int v21; // r8d
  char v22; // r10
  unsigned int *v23; // r14
  unsigned int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int *v30; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v31; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v32[14]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v33[24]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v34[26]; // [rsp+170h] [rbp+70h] BYREF
  char v35; // [rsp+258h] [rbp+158h] BYREF
  char v36; // [rsp+260h] [rbp+160h] BYREF
  __int64 v37; // [rsp+268h] [rbp+168h] BYREF

  v6 = 0;
  v29 = 0LL;
  memset(v34, 0, 0x98uLL);
  memset(v33, 0, 0xB8uLL);
  v7 = *(_WORD *)(a2 + 2) < 0x28u;
  v31 = 0LL;
  v37 = 0LL;
  v30 = 0LL;
  *a3 = 0;
  v36 = 0;
  v35 = 0;
  if ( v7 || *(_BYTE *)a2 != 17 && *(_BYTE *)a2 != 64 )
    return -1073741811;
  v8 = (__int64 *)HsaIvhdList;
  if ( (__int64 *)HsaIvhdList != &HsaIvhdList )
  {
    while ( v8[2] != *(_QWORD *)(a2 + 8) )
    {
      v8 = (__int64 *)*v8;
      if ( v8 == &HsaIvhdList )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v9 = *(_QWORD *)(a2 + 24);
  v10 = (4 * v9) & 8 | (16 * ((v9 >> 45) & 1));
  if ( ((*(_BYTE *)(a2 + 1) >> 4) & ((v9 & 0x600000000008LL) == 0x600000000008LL)) != 0 )
    v10 = (4 * v9) & 8 | (16 * ((*(_QWORD *)(a2 + 24) >> 45) & 1)) | 1;
  v11 = BYTE4(v9) & 0x1F;
  v12 = (((*(_BYTE *)(a2 + 1) & 0x10) != 0) << 6) | v10 | 4;
  if ( ((unsigned __int8)-((v9 & 0xC000) != 0) & ((v12 & 1) != 0 && (v9 & 0x20000000012LL) == 0x20000000012LL)) == 0
    || v11 < 8 )
  {
    v12 &= ~4u;
  }
  v13 = v12 | 0x20;
  if ( ((unsigned __int8)-((v9 & 0xC000) != 0) & ((v13 & 1) != 0 && (v9 & 0x1000000000010LL) == 0x1000000000010LL)) == 0
    || v11 < 8 )
  {
    v13 &= ~0x20u;
  }
  v14 = v13 | 2;
  if ( (v9 & 0x84) != 0x84 )
    v14 = v13;
  if ( (v14 & 3) == 0 )
    return 0;
  result = HsaProcessIvmd(a2, a1 + *(unsigned int *)(a1 + 4), &v35, &v30);
  if ( result >= 0 )
  {
    result = ExtEnvAllocateMemory(v16, 0xF0u, &v37);
    if ( result >= 0 )
    {
      v17 = v37;
      v18 = (_QWORD *)(v37 + 224);
      *(_QWORD *)(v37 + 232) = v37 + 224;
      *v18 = v18;
      *(_BYTE *)(v17 + 16) = *(_BYTE *)(a2 + 1);
      *(_WORD *)(v17 + 18) = v14;
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v17 + 160) = *(unsigned __int16 *)(a2 + 16);
      *(_DWORD *)(v17 + 164) = *(unsigned __int8 *)(a2 + 5);
      v19 = *(_DWORD *)(v17 + 168) ^ (*(_DWORD *)(v17 + 168) ^ (*(unsigned __int16 *)(a2 + 4) >> 3)) & 0x1Fu;
      *(_DWORD *)(v17 + 168) = v19;
      *(_DWORD *)(v17 + 168) = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(32 * *(_WORD *)(a2 + 4))) & 0xE0;
      result = ExtEnvAllocateMemory(v19, 0x2000u, &v29);
      if ( result >= 0 )
      {
        *(_QWORD *)(v17 + 192) = v29;
        *(_DWORD *)(v17 + 184) = 0x10000;
        RtlClearBits((PRTL_BITMAP)(v17 + 184), 0, 0x10000u);
        *(_QWORD *)(v17 + 152) = 0LL;
        result = HalpIommuProcessDeviceEntries(v17, a2, &v36);
        if ( result >= 0 )
        {
          result = HalRegisterPermanentAddressUsage(*(LARGE_INTEGER *)(v17 + 8), 0x2040u);
          if ( result >= 0 )
          {
            memset(v32, 0, 0x68uLL);
            HIDWORD(v32[9]) = *(_DWORD *)(v17 + 160);
            v20 = 2076;
            v32[10] = *(_QWORD *)(v17 + 164);
            v32[7] = v34;
            v32[8] = v33;
            v34[0] = HsaConfigureSettings;
            v34[1] = HsaInitializeIommu;
            v32[0] = 0x6800000001LL;
            v32[1] = v17;
            v32[2] = 0x81C00000000LL;
            LODWORD(v32[9]) = 1;
            if ( (v14 & 1) != 0 )
            {
              v34[4] = HsaCreateDevice;
              v34[5] = HsaDeleteDevice;
              v33[0] = HsaFindDevice;
              v33[5] = HsaFlushTb;
              v33[6] = HsaFlushDeviceTbOnly;
              v33[19] = HsaQueryAcpiDeviceMapping;
              v33[20] = HsaGetRidAcpiMapCount;
              if ( !v35 )
              {
                v33[17] = HsaEnumerateIvmdDevices;
                v20 = 2332;
                v33[18] = HsaProcessReservedDomains;
                v34[8] = HsaAttachDeviceDomain;
                v34[9] = HsaDetachDeviceDomain;
                if ( (v14 & 0x20) != 0 )
                  v20 = 2460;
              }
              v20 |= 0x6000u;
              v34[10] = HsaFlushDomainTb;
              v34[11] = xHalTimerWatchdogStop;
              v34[12] = xHalTimerWatchdogStop;
              HIDWORD(v32[2]) = v20;
            }
            v21 = 0x40000;
            v22 = v14 & 0xDF;
            if ( (v20 & 0x80u) != 0 )
              v22 = v14;
            if ( (unsigned int)((1 << (v11 + 1)) - 1) < 0x40000 )
              v21 = (1 << (v11 + 1)) - 1;
            LODWORD(v32[11]) = v21;
            if ( (v22 & 4) != 0 )
            {
              v20 |= 0x20020u;
              HIDWORD(v32[2]) = v20;
            }
            if ( (v22 & 0x24) != 0 )
            {
              v33[1] = HsaSetDeviceSvmCapabilities;
              v33[2] = HsaSetDevicePasidTable;
              v33[3] = HsaGrowPasidTable;
              v33[4] = HsaSetPasidAddressSpace;
              v33[14] = HsaMarkHiberRegions;
            }
            if ( (v22 & 2) != 0 )
            {
              v34[15] = &HsaUpdateRemappingTableEntry;
              v20 = v20 & 0xFFFFFFAF | 0x40;
              HIDWORD(v32[2]) = v20;
              v34[16] = HsaInvalidateRemappingTableEntry;
              v34[17] = HsaUpdateRemappingDestination;
              v34[13] = HsaAllocateRemappingTableEntry;
              v34[14] = HsaFreeRemappingTableEntry;
            }
            if ( (v22 & 4) != 0 )
            {
              v33[9] = HsaSetMessageInterruptRouting;
              v33[10] = HsaEnableInterrupt;
              v33[11] = HsaDisableInterrupt;
              v33[12] = HsaHandleInterrupt;
              v33[7] = HsaDismissPageFault;
              v33[8] = HsaGetPageFault;
              HIDWORD(v32[2]) = v20 | 2;
            }
            v23 = v30;
            v24 = *v30;
            HIDWORD(v32[11]) = 65534 - *v30;
            result = HalpHsaAllocateReservedDomainList(v17, 65534 - v24, v24);
            if ( result >= 0 )
            {
              *(_DWORD *)(v17 + 200) = 65534;
              *(_QWORD *)(v17 + 208) = v23;
              result = ExtEnvRegisterIommu(v32, v25, 0LL);
              if ( result >= 0 )
              {
                result = ExtEnvAllocateMemory(v26, 0x18u, &v31);
                if ( result >= 0 )
                {
                  v27 = v31;
                  v31[2] = *(_QWORD *)(a2 + 8);
                  v28 = (_QWORD *)qword_140C5F8C8;
                  if ( *(__int64 **)qword_140C5F8C8 != &HsaIvhdList )
                    __fastfail(3u);
                  *v27 = &HsaIvhdList;
                  v27[1] = v28;
                  *v28 = v27;
                  qword_140C5F8C8 = (__int64)v27;
                  if ( v35 || v36 )
                    v6 = 1;
                  *a3 = v6;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
