/*
 * XREFs of HalpCheckLowMemoryPreSleep @ 0x140A93CC8
 * Callers:
 *     HaliAcpiSleep @ 0x140525AD0 (HaliAcpiSleep.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402B24A0 (RtlClearAllBits.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     IoGetStackLimits @ 0x1403129C0 (IoGetStackLimits.c)
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 *     HalpMapPhysicalMemory64 @ 0x140409B90 (HalpMapPhysicalMemory64.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpSimpleCheck @ 0x140A94110 (HalpSimpleCheck.c)
 */

void __fastcall HalpCheckLowMemoryPreSleep(int a1)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdi
  PHYSICAL_ADDRESS v3; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 LowLimit; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 HighLimit; // [rsp+40h] [rbp+18h] BYREF

  if ( (a1 & 0x20000) != 0 )
  {
    HighLimit = 0LL;
    LowLimit = 0LL;
    RtlClearAllBits(&HalpLowMemoryMapStack);
    IoGetStackLimits(&LowLimit, &HighLimit);
    v1 = (char *)(LowLimit & 0xFFFFFFFFFFFFF000uLL);
    v2 = (HighLimit + 4095) & 0xFFFFFFFFFFFFF000uLL;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3.QuadPart = MmGetPhysicalAddress(v1).QuadPart >> 12;
      if ( v3.QuadPart < 0x100uLL )
        *((_BYTE *)HalpLowMemoryMapStack.Buffer + ((unsigned __int64)v3.LowPart >> 3)) |= 1 << (v3.LowPart & 7);
      v1 += 4096;
    }
    memset(HalpPhysicalMemoryCheckSums, 0, sizeof(HalpPhysicalMemoryCheckSums));
    for ( i = 0LL; i < 0x100; ++i )
    {
      v5 = (unsigned __int64)(unsigned int)i >> 3;
      if ( ((*((char *)HalpLowMemoryMap.Buffer + v5) >> (i & 7)) & 1) == 0
        && ((*((char *)HalpLowMemoryMapStack.Buffer + v5) >> (i & 7)) & 1) == 0 )
      {
        v6 = HalpMapPhysicalMemory64(i << 12, 1LL, 0, 4LL);
        if ( v6 )
        {
          HalpPhysicalMemoryCheckSums[i] = HalpSimpleCheck(v6, v7, v8, v6);
          HalpUnmapVirtualAddress(v9, 1LL, 0LL);
        }
      }
    }
  }
}
