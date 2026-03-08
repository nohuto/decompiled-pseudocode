/*
 * XREFs of HalpHpetDiscover @ 0x140372BE0
 * Callers:
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A08F8 (HalpTimerRegisterBuiltinPlugins.c)
 * Callees:
 *     HalSocRequestConfigurationData @ 0x1403731C8 (HalSocRequestConfigurationData.c)
 *     HalpTimerRegister @ 0x140373EB4 (HalpTimerRegister.c)
 *     HalSocGetAcpiTable @ 0x14037601C (HalSocGetAcpiTable.c)
 *     HalMapIoSpace @ 0x14037AD90 (HalMapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 *     HalRegisterPermanentAddressUsage @ 0x14037C950 (HalRegisterPermanentAddressUsage.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 HalpHpetDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rdx
  __int64 v2; // r14
  unsigned int *v3; // r15
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  int v7; // r12d
  int v8; // esi
  bool v9; // zf
  unsigned int v10; // esi
  unsigned int v11; // r13d
  __int64 v12; // rbx
  unsigned int *v13; // r15
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // edi
  int v18; // eax
  char v19; // cl
  int v21; // r9d
  unsigned __int8 v22; // dl
  signed __int32 v23[8]; // [rsp+8h] [rbp-100h] BYREF
  int v24; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v25; // [rsp+30h] [rbp-D8h]
  _QWORD v26[18]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-40h]
  unsigned int *v28; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v29; // [rsp+D8h] [rbp-30h]
  _OWORD v30[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v31; // [rsp+100h] [rbp-8h]

  LOWORD(v24) = 0;
  memset(v30, 0, sizeof(v30));
  v31 = 0LL;
  AcpiTable = HalSocGetAcpiTable(1413828680LL);
  v2 = AcpiTable;
  if ( AcpiTable )
  {
    if ( !*(_BYTE *)(AcpiTable + 40) && (int)HalSocRequestConfigurationData(1LL, v1, (char *)&v24 + 1) >= 0 )
    {
      HalpHpetPhysicalAddress = *(LARGE_INTEGER *)(v2 + 44);
      if ( !HalpHpetPhysicalAddress.HighPart || BYTE1(v24) )
      {
        v28 = (unsigned int *)HalMapIoSpace(HalpHpetPhysicalAddress, 0x400uLL, MmNonCached);
        v3 = v28;
        if ( v28 )
        {
          if ( HalRegisterPermanentAddressUsage(HalpHpetPhysicalAddress, 0x400u) >= 0 )
          {
            v4 = *v3;
            v5 = HIWORD(*v3);
            if ( v5 )
            {
              if ( v5 != 0xFFFF )
              {
                HalpHpetComparatorLatchDelay = 2;
                if ( RtlCompareMemory((const void *)(v2 + 10), "VMWARE", 6uLL) == 6 )
                  HalpHpetComparatorLatchDelay = 1;
                if ( (v4 & 0x8000) != 0 )
                  HalpHpetLegacyInterrupts = 1;
                v6 = (((unsigned __int64)v3[1] >> 1) + 1000000000000000LL) / v3[1];
                v29 = v6;
                if ( v5 != 4318 )
                {
                  v7 = 1;
                  v8 = (v4 >> 8) & 0x1F;
                  v9 = v8 == -1;
                  v10 = v8 + 1;
                  v11 = 0;
                  if ( v9 )
                    goto LABEL_29;
                  v12 = (unsigned int)v6;
                  v13 = v3 + 64;
                  v27 = (unsigned int)v6;
                  while ( 1 )
                  {
                    memset(v26, 0, sizeof(v26));
                    v26[11] = v30;
                    v31 = 0LL;
                    v26[1] = HalpHpetInitialize;
                    v26[13] = v12;
                    v26[3] = HalpHpetAcknowledgeInterrupt;
                    memset((char *)v30 + 4, 0, 20);
                    v26[0] = 0x9000000001LL;
                    v26[4] = HalpHpetArmTimer;
                    v26[5] = HalpHpetStop;
                    v15 = (v11 + 1) | (*(unsigned __int8 *)(v2 + 52) << 16);
                    LODWORD(v30[0]) = v11;
                    HIDWORD(v26[17]) = v15;
                    *((LARGE_INTEGER *)&v30[1] + 1) = HalpHpetPhysicalAddress;
                    v16 = *v13 & 0xFFFFBFFB;
                    v26[12] = 0x1F00000028LL;
                    v26[16] = 0x100000001LL;
                    LODWORD(v26[17]) = 3;
                    v26[14] = 0x3000000001LL;
                    *v13 = v16;
                    v25 = v11 + 1;
                    _InterlockedOr(v23, 0);
                    if ( (v16 & 0x10) != 0 )
                    {
                      v17 = 112;
                      BYTE12(v30[0]) = 1;
                      HIDWORD(v26[14]) = 112;
                    }
                    else
                    {
                      v17 = HIDWORD(v26[14]);
                    }
                    if ( (v16 & 0x20) != 0 )
                    {
                      *v13 = v16 | 0x100;
                      _InterlockedOr(v23, 0);
                      v16 = *v13;
                      if ( (*v13 & 0x100) == 0 )
                        goto LABEL_27;
                      v17 = HIDWORD(v26[14]);
                    }
                    LODWORD(v31) = v16;
                    if ( HalpHpetLegacyInterrupts )
                    {
                      v18 = HalSocRequestConfigurationData(2LL, v14, &v24);
                      v19 = v24;
                      if ( v18 < 0 )
                        v19 = 0;
                      LOBYTE(v24) = v19;
                      if ( !v11 )
                      {
                        v17 |= 0x100u;
                        LODWORD(v26[15]) = v19 == 0 ? 2 : 0;
                        v7 |= 4u;
LABEL_33:
                        HIDWORD(v26[14]) = v17;
LABEL_25:
                        if ( (v17 & 0xF00) != 0 )
                          HalpTimerRegister(v26, 0LL);
                        goto LABEL_27;
                      }
                      if ( v11 == 1 )
                      {
                        LODWORD(v26[15]) = 8;
                        v17 |= 0x100u;
                        v7 |= 0x100u;
                        goto LABEL_33;
                      }
                      if ( (v16 & 0x8000) != 0 )
                        goto LABEL_25;
                    }
                    else
                    {
                      v21 = ~v7 & v13[1];
                      if ( v21 )
                      {
                        v22 = 0;
                        while ( ((1 << v22) & v21) == 0 )
                        {
                          if ( ++v22 >= 0x20u )
                          {
                            LOWORD(v17) = WORD2(v26[14]);
                            goto LABEL_25;
                          }
                        }
                        v17 = HIDWORD(v26[14]) | 0x200;
                        HIDWORD(v26[15]) = v22 + (unsigned __int16)HalpHpetGsiOffset;
                        v7 |= 1 << v22;
                        BYTE4(v30[0]) = v22;
                        goto LABEL_33;
                      }
                    }
LABEL_27:
                    v11 = v25;
                    v13 += 8;
                    v12 = v27;
                    if ( v25 >= v10 )
                    {
                      v3 = v28;
                      goto LABEL_29;
                    }
                  }
                }
                HalpHpetLegacyInterrupts = 0;
LABEL_29:
                memset(v26, 0, sizeof(v26));
                v26[0] = 0x9000000001LL;
                v31 = 0LL;
                v26[13] = (unsigned int)v29;
                memset(v30, 0, sizeof(v30));
                LODWORD(v30[0]) = -1;
                v26[11] = v30;
                v26[1] = HalpHpetInitialize;
                v26[2] = HalpHpetQueryCounter;
                v26[3] = HalpHpetAcknowledgeInterrupt;
                v26[4] = HalpHpetArmTimer;
                HIDWORD(v26[17]) = *(unsigned __int8 *)(v2 + 52) << 16;
                v26[12] = 0x2000000028LL;
                LODWORD(v26[17]) = 3;
                v26[14] = 0x200000001LL;
                HalpTimerRegister(v26, 0LL);
              }
            }
          }
          HalpUnmapVirtualAddress(v3, 1LL, 0LL);
        }
      }
    }
  }
  return 0LL;
}
