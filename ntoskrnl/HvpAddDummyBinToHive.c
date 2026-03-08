/*
 * XREFs of HvpAddDummyBinToHive @ 0x140A1AF8C
 * Callers:
 *     HvpPerformLogFileRecovery @ 0x1407FBCAC (HvpPerformLogFileRecovery.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpPointMapEntriesToBuffer @ 0x140730010 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x140730410 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x14079AE68 (HvpFreeBin.c)
 */

__int64 __fastcall HvpAddDummyBinToHive(ULONG_PTR BugCheckParameter2, int a2, _QWORD *a3)
{
  int Bin; // ebx
  _DWORD *v7; // rbx
  void *v8; // r8
  void *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  Bin = HvpAllocateBin(BugCheckParameter2, 4096LL, 0, 0x30334D43u, (__int64 *)&v10);
  if ( Bin < 0 )
  {
    v8 = v10;
  }
  else
  {
    v7 = v10;
    memset(v10, 0, 0x1000uLL);
    *v7 = 0;
    v7[1] = a2;
    v7[2] = 4096;
    v7[8] = -4064;
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v7, 4096, a2, 1, 0LL);
    v8 = 0LL;
    *a3 = v7;
    Bin = 0;
  }
  if ( v8 )
    HvpFreeBin(BugCheckParameter2, 0x1000u, (__int64)v8);
  return (unsigned int)Bin;
}
