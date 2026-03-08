/*
 * XREFs of SmmValidateHardwareReservedRanges @ 0x1C020CAB4
 * Callers:
 *     SmmCreateHardwareReservedRanges @ 0x1C020A6E4 (SmmCreateHardwareReservedRanges.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmValidateHardwareReservedRanges(unsigned __int64 *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rdi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  LARGE_INTEGER NumberOfBytes; // rax
  int v11; // r8d
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  unsigned __int64 QuadPart; // r15
  unsigned __int64 v14; // r13

  v4 = 0;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  if ( PhysicalMemoryRanges )
  {
    v6 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v7 = *a1;
        v8 = a1[1];
        v9 = v8 + *a1;
        if ( v9 < *a1 )
        {
          WdLogSingleEntry2(2LL, *a1, a1[1]);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Driver reserved memory range overflow. BaseAddress=0x%I64x, Size=%I64u",
            v7,
            v8,
            0LL,
            0LL,
            0LL);
          goto LABEL_14;
        }
        NumberOfBytes = PhysicalMemoryRanges->NumberOfBytes;
        v11 = 0;
        if ( NumberOfBytes.QuadPart )
          break;
LABEL_8:
        ++v6;
        a1 += 2;
        if ( v6 >= a2 )
          goto LABEL_9;
      }
      p_BaseAddress = &PhysicalMemoryRanges->BaseAddress;
      while ( 1 )
      {
        QuadPart = p_BaseAddress->QuadPart;
        v14 = NumberOfBytes.QuadPart + p_BaseAddress->QuadPart;
        if ( v7 < v14 && v9 > QuadPart )
          break;
        p_BaseAddress = &PhysicalMemoryRanges[++v11].BaseAddress;
        NumberOfBytes = p_BaseAddress[1];
        if ( !NumberOfBytes.QuadPart )
          goto LABEL_8;
      }
      WdLogSingleEntry4(2LL, v7, v9, p_BaseAddress->QuadPart, NumberOfBytes.QuadPart + p_BaseAddress->QuadPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver hardware reserved range cannot intersect a physical range of memory in Mm",
        v7,
        v9,
        QuadPart,
        v14,
        0LL);
LABEL_14:
      v4 = -1073741811;
    }
LABEL_9:
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
    return v4;
  }
  else
  {
    _InterlockedIncrement(&dword_1C013BD50);
    WdLogSingleEntry1(6LL, 311LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Couldn't allocate buffer to query system memory size",
      311LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
