/*
 * XREFs of HalpIvtProcessDrhdEntry @ 0x14037B514
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x14037BB68 (HalpIvtProcessDmarTable.c)
 * Callees:
 *     HalSocRequestApi @ 0x1403737EC (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x14037AD90 (HalMapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 *     DmrEnumerateRmrrDomains @ 0x14037BD30 (DmrEnumerateRmrrDomains.c)
 *     DmrValidateDeviceScope @ 0x14037BE8C (DmrValidateDeviceScope.c)
 *     DmrGetNextDrhdDeviceScope @ 0x14037BF80 (DmrGetNextDrhdDeviceScope.c)
 *     HalpIvtAllocateReservedDomainList @ 0x14037C5A4 (HalpIvtAllocateReservedDomainList.c)
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 *     HalRegisterPermanentAddressUsage @ 0x14037C950 (HalRegisterPermanentAddressUsage.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExtEnvFreeMemory @ 0x14051D13C (ExtEnvFreeMemory.c)
 *     DmrFreeRmrrTree @ 0x140532C5C (DmrFreeRmrrTree.c)
 *     ExtEnvRegisterIommu @ 0x140B3CFD4 (ExtEnvRegisterIommu.c)
 */

__int64 __fastcall HalpIvtProcessDrhdEntry(__int64 a1, __int64 a2)
{
  char v4; // r12
  NTSTATUS ReservedDomainList; // r14d
  __int64 v6; // rcx
  int v7; // eax
  _DWORD *v8; // r15
  LARGE_INTEGER v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  char v14; // al
  int v15; // esi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  int v18; // ecx
  _BYTE *NextDrhdDeviceScope; // rax
  int v20; // r11d
  bool v21; // cf
  _DWORD *v22; // rdx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // rsi
  size_t v27; // rbx
  __int16 v28; // ax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v32; // rcx
  _DWORD *v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-C4h]
  unsigned int Size; // [rsp+40h] [rbp-C0h]
  int Size_4; // [rsp+44h] [rbp-BCh]
  _QWORD *v38; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v39; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v40[14]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v41[24]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v42[28]; // [rsp+190h] [rbp+90h] BYREF
  char v44; // [rsp+288h] [rbp+188h] BYREF
  unsigned int v45; // [rsp+290h] [rbp+190h]
  int v46; // [rsp+298h] [rbp+198h]

  v44 = 0;
  v39 = 0LL;
  memset(v42, 0, 0x98uLL);
  memset(v41, 0, 0xB8uLL);
  v4 = 0;
  v38 = 0LL;
  ReservedDomainList = 0;
  v45 = 0;
  v33 = 0LL;
  LOBYTE(v46) = 0;
  if ( *(_WORD *)a2 )
    return (unsigned int)-1073741823;
  if ( *(_WORD *)(a2 + 2) < 0x10u )
    return (unsigned int)-1073741811;
  if ( *(_QWORD *)(a2 + 8) )
  {
    if ( (int)HalSocRequestApi(16LL, 0LL, 2, 16LL, &v39) < 0
      || !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))v39)(0LL, 0LL, 0LL, &v44) )
    {
      v44 = 0;
    }
    v7 = ExtEnvAllocateMemory(v6, 24LL, &v33);
    v8 = v33;
    ReservedDomainList = v7;
    if ( v7 >= 0 )
    {
      ReservedDomainList = DmrEnumerateRmrrDomains(a1, a2 + 4, v33);
      if ( ReservedDomainList >= 0 )
      {
        memset(v40, 0, 0x68uLL);
        v9 = *(LARGE_INTEGER *)(a2 + 8);
        v40[0] = 0x6800000001LL;
        *(_QWORD *)&v39 = HalMapIoSpace(v9, 0x220uLL, MmNonCached);
        if ( (_QWORD)v39 )
        {
          ReservedDomainList = HalRegisterPermanentAddressUsage(v9, 0x220u);
          if ( ReservedDomainList < 0 )
            goto LABEL_59;
          Size = *(unsigned __int16 *)(a2 + 2) - 16;
          v40[1] = 0LL;
          LODWORD(v40[2]) = Size + 360;
          v40[7] = v42;
          v40[8] = v41;
          v42[0] = IvtConfigureSettings;
          v42[1] = IvtInitializeIommu;
          v42[2] = IvtAllocateDomain;
          v42[3] = IvtFreeDomain;
          v42[4] = IvtCreateDevice;
          v42[5] = IvtDeleteDevice;
          v41[13] = IvtCheckForReservedRegion;
          v41[0] = IvtFindDevice;
          v41[17] = IvtEnumerateRmrrDevices;
          v10 = *(_QWORD *)(v39 + 16);
          v11 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFEEFFuLL;
          HIDWORD(v40[9]) = *(unsigned __int16 *)(a2 + 6);
          LODWORD(v40[9]) = 2;
          _BitScanReverse(&v12, (v11 >> 8) & 0x1F);
          HIDWORD(v40[2]) = 4;
          v45 = v12;
          v13 = 1LL << (((unsigned __int8)(v10 >> 35) & 0x1Fu) + 1);
          if ( v13 > 0x100000 )
            LODWORD(v13) = 0x100000;
          v14 = *(_BYTE *)(a1 + 37) & 3;
          LODWORD(v40[11]) = v13;
          if ( v14 == 1 && (v10 & 0x18) == 24 )
          {
            v42[15] = IvtUpdateRemappingTableEntry;
            v15 = 68;
            HIDWORD(v40[2]) = 68;
            v42[16] = IvtInvalidateRemappingTableEntry;
            v42[17] = IvtUpdateRemappingDestination;
          }
          else
          {
            v15 = HIDWORD(v40[2]);
          }
          if ( v44 == 2 && (v10 & 2) != 0 && (v11 & 0x80u) == 0LL )
          {
            v16 = (v11 >> 8) & 0x1F;
            if ( (_DWORD)v16 != 0
              && (v10 & 0x40) != 0
              && (v11 & 0x80000000000000LL) != 0
              && (v11 & 0x40000000000000LL) != 0
              && (v11 & 0x10) == 0 )
            {
              v35 = v45;
              v42[10] = IvtFlushDomainTb;
              v42[11] = xHalTimerWatchdogStop;
              v42[12] = xHalTimerWatchdogStop;
              v42[8] = IvtAttachDeviceDomain;
              v42[9] = IvtDetachDeviceDomain;
              v41[18] = IvtProcessReservedDomains;
              _BitScanReverse64(&v17, v16);
              v15 |= (((_DWORD)v17 << 13) + 0x2000) | 0x100;
              HIDWORD(v40[2]) = v15;
            }
          }
          if ( (v15 & 0x100) != 0 )
          {
            v18 = (unsigned __int8)v46;
            if ( (v10 & 0x2480000000000LL) == 0x2480000000000LL )
              v18 = 1;
            v46 = v18;
          }
          NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, 0LL);
          if ( (_BYTE)v46 )
          {
            if ( (v10 & 0x1000000000000LL) != 0 )
            {
              v15 |= 0x800u;
              HIDWORD(v40[2]) = v15;
            }
            if ( (v10 & 0x1050224000004LL) == 0x1050224000004LL )
            {
              v15 |= 0x20u;
              HIDWORD(v40[2]) = v15;
              if ( (v10 & 0x80000000) != 0 )
              {
                v15 |= 0x10000u;
                HIDWORD(v40[2]) = v15;
              }
              v41[1] = IvtSetDeviceSvmCapabilities;
              v41[2] = IvtSetDevicePasidTable;
              v41[3] = IvtGrowPasidTable;
              v41[4] = IvtSetPasidAddressSpace;
              v41[7] = IvtDismissPageFault;
              v41[8] = IvtGetPageFault;
              v41[14] = IvtMarkHiberRegions;
              v41[15] = IvtDrainSvmPageRequests;
              v41[16] = IvtCancelPageRequests;
              v41[21] = IvtFreePasidTable;
            }
            if ( (v10 & 4) == 0 )
              goto LABEL_42;
            v15 |= 0x1000u;
            v41[22] = IvtConfigureAts;
            v41[5] = IvtFlushTb;
            v41[6] = IvtFlushDeviceTbOnly;
          }
          else
          {
            if ( NextDrhdDeviceScope
              && *NextDrhdDeviceScope == 1
              && NextDrhdDeviceScope[1] == 8
              && !NextDrhdDeviceScope[5]
              && NextDrhdDeviceScope[6] == 2
              && !NextDrhdDeviceScope[7]
              && !*(_WORD *)(a2 + 6)
              && (v11 & 0x3F0000) < 0x2F0000 )
            {
              if ( !HalpIommuEnableGpuIdentityMapping )
              {
                v15 &= ~0x100u;
                HIDWORD(v40[2]) = v15;
              }
              if ( v20 )
                v21 = (v11 & 0x800000000LL) != 0;
              else
                v21 = (v11 & 0x400000000LL) != 0;
              if ( v21 )
                v4 = 1;
            }
            if ( (v10 & 1) == 0 )
              goto LABEL_42;
            v15 |= 0x800u;
          }
          HIDWORD(v40[2]) = v15;
LABEL_42:
          v34 = 0;
          v22 = (_DWORD *)((unsigned __int64)&v34 & -(__int64)(v4 != 0));
          v23 = 1 << (2 * (v11 & 7) + 4);
          if ( v22 )
            *v22 = --v23;
          v8 = v33;
          Size_4 = v23 - 1;
          v24 = v23 - 1 - *v33;
          LODWORD(v33) = *v33;
          v35 = v24;
          HIDWORD(v40[11]) = v24;
          if ( (v15 & 0x20) != 0 || (v15 & 0x100) != 0 )
          {
            v15 |= 0x12u;
            v41[10] = IvtEnableInterrupt;
            v41[11] = IvtDisableInterrupt;
            v41[12] = IvtHandleInterrupt;
            v41[9] = IvtSetMessageInterruptRouting;
            HIDWORD(v40[2]) = v15;
          }
          if ( (int)DmrValidateDeviceScope(a1, a2) < 0 && (v15 & 0x20) != 0 )
            KeBugCheckEx(0x5Cu, 0x500uLL, 3uLL, 0LL, 0LL);
          ReservedDomainList = ExtEnvRegisterIommu(v40, v25, &v38);
          if ( ReservedDomainList >= 0 )
          {
            v26 = v38;
            *v38 = *(_QWORD *)(a2 + 8);
            *((_DWORD *)v26 + 63) = *(unsigned __int16 *)(a2 + 6);
            v26[27] = v11;
            v27 = Size;
            v26[28] = v10;
            v26[35] = v26 + 45;
            *((_DWORD *)v26 + 64) = v27;
            *((_BYTE *)v26 + 268) = *(_BYTE *)(a2 + 4) & 1;
            *((_DWORD *)v26 + 65) = Size_4;
            *((_DWORD *)v26 + 66) = v34;
            *((_DWORD *)v26 + 62) = v45;
            v26[26] = 0LL;
            v26[30] = v26 + 29;
            v26[29] = v26 + 29;
            v26[8] = v26 + 7;
            v26[7] = v26 + 7;
            v26[10] = v26 + 9;
            v26[9] = v26 + 9;
            v26[12] = v26 + 11;
            v26[11] = v26 + 11;
            v28 = WORD2(v40[2]);
            if ( (v40[2] & 0x10000000000LL) != 0 )
              *((_BYTE *)v26 + 318) = 1;
            *((_BYTE *)v26 + 320) = v46;
            if ( (v28 & 0x20) != 0 )
              *((_BYTE *)v26 + 316) = 1;
            if ( (v28 & 0x1000) != 0 )
              *((_BYTE *)v26 + 317) = 1;
            if ( v4 )
              *((_BYTE *)v26 + 319) = 1;
            v29 = (unsigned int)v33;
            v30 = v35;
            *((_DWORD *)v26 + 68) = v26[28] & 1;
            v26[43] = v8;
            ReservedDomainList = HalpIvtAllocateReservedDomainList(v26, v30, v29);
            if ( ReservedDomainList >= 0 )
              memmove((void *)v26[35], (const void *)(a2 + 16), v27);
          }
LABEL_59:
          HalpUnmapVirtualAddress(v39, 1LL, 0LL);
          if ( ReservedDomainList >= 0 )
            return (unsigned int)ReservedDomainList;
          goto LABEL_65;
        }
        ReservedDomainList = -1073741670;
      }
    }
LABEL_65:
    if ( v8 )
    {
      DmrFreeRmrrTree(v8);
      ExtEnvFreeMemory(v32, v8);
    }
  }
  return (unsigned int)ReservedDomainList;
}
