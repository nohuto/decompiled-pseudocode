__int64 __fastcall HsaInitializeInterruptRemapping(__int64 a1)
{
  int v1; // ebx
  int v3; // eax
  LARGE_INTEGER v4; // rax
  PVOID v5; // rax
  __int64 v6; // rcx
  RTL_BITMAP *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  PULONG BitMapBuffer; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  v1 = 0;
  BitMapBuffer = 0LL;
  v3 = *(_DWORD *)(a1 + 176);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !*((_QWORD *)&HsaSharedRemappingTable + 1) )
      {
        HIDWORD(NumberOfBytes) = *(_DWORD *)(a1 + 180);
        LODWORD(NumberOfBytes) = (16 * HIDWORD(NumberOfBytes) + 4095) & 0xFFFFF000;
        v4.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD))HsaPhysicalMemoryApi)(
                        -1LL,
                        (unsigned int)NumberOfBytes >> 12);
        *(LARGE_INTEGER *)&HsaSharedRemappingTable = v4;
        if ( v4.QuadPart
          && (v5 = HalMapIoSpace(v4, (unsigned int)NumberOfBytes, MmCached),
              (*((_QWORD *)&HsaSharedRemappingTable + 1) = v5) != 0LL) )
        {
          memset(v5, 0, (unsigned int)NumberOfBytes);
          v1 = ExtEnvAllocateMemory(v6, 4 * ((unsigned int)(*(_DWORD *)(a1 + 180) + 31) >> 5), &BitMapBuffer);
          if ( v1 >= 0 )
          {
            RtlInitializeBitMap((PRTL_BITMAP)(&NumberOfBytes + 1), BitMapBuffer, *(_DWORD *)(a1 + 180));
            ExtEnvClearBits(v7, 0, *(_DWORD *)(a1 + 180));
            HsaTotalDeviceApertures = (unsigned int)HalpGetIrtEntryCount() >> 9;
            v1 = ExtEnvAllocateMemory(v8, 0x2000u, &v12);
            if ( v1 >= 0 )
            {
              ExtEnvInitializeSpinLock(HsaDeviceApertureLock);
              v9 = v12;
              HsaAllocatedDeviceApertures = 128;
              HsaDeviceApertureRanges[0] = v12;
              *(_OWORD *)(v12 + 8) = HsaSharedRemappingTable;
              *(_OWORD *)(v9 + 24) = *(_OWORD *)&NumberOfBytes;
              *(_QWORD *)(v9 + 40) = qword_140C5F8A0;
              *(_DWORD *)(v9 + 48) = 1;
              *(_DWORD *)(v9 + 52) = -1;
              *(_DWORD *)(v9 + 56) = 0;
            }
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v1;
}
