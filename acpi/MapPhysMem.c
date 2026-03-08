/*
 * XREFs of MapPhysMem @ 0x1C004BE74
 * Callers:
 *     MapUnmapPhysMem @ 0x1C004BF40 (MapUnmapPhysMem.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C004AD48 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall MapPhysMem(ULONG_PTR a1, unsigned int a2, __int64 *a3)
{
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v5; // esi
  int MemoryCachingRequirements; // ebx
  int v7; // eax
  __int64 v8; // rax
  int v10; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  BugCheckParameter3 = a1;
  BugCheckParameter4 = a2;
  if ( (int)AmlpValidateFirmwareMemoryAddress((__int64 *)&BugCheckParameter3, a2) < 0 )
    KeBugCheckEx(0xA5u, 0x1000uLL, SHIDWORD(BugCheckParameter3), (unsigned int)BugCheckParameter3, BugCheckParameter4);
  v5 = 516;
  MemoryCachingRequirements = HalGetMemoryCachingRequirements(BugCheckParameter3, BugCheckParameter4, &v10);
  if ( MemoryCachingRequirements >= 0 )
  {
    v7 = v10;
  }
  else
  {
    v7 = 0;
    v10 = 0;
    MemoryCachingRequirements = 0;
  }
  if ( v7 == 1 )
    v5 = 4;
  v8 = MmMapIoSpaceEx(BugCheckParameter3, BugCheckParameter4, v5);
  if ( v8 )
    *a3 = v8;
  else
    return (unsigned int)-1073741670;
  return (unsigned int)MemoryCachingRequirements;
}
