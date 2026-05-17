/*
 * XREFs of RtlpHpEnvAllocVA @ 0x1800067A0
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x180006458 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x180006740 (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x18010F59C (RtlCSparseBitmapStart.c)
 * Callees:
 *     NtAllocateVirtualMemoryEx @ 0x18009E390 (NtAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rax
  _QWORD v15[3]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v16[6]; // [rsp+58h] [rbp-30h] BYREF

  LODWORD(a4) = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (a4 & 0x2000) == 0 )
    LODWORD(a4) = a4 & 0xDFFFFFFF;
  v10 = 0;
  if ( (a4 & 0x2000) != 0 )
  {
    v15[2] = a3;
    v15[1] = 0LL;
    v16[0] = 1LL;
    v16[1] = v15;
    v11 = 0LL;
    v10 = 1;
    if ( (a4 & 0x40000) != 0 )
      v11 = 0x100000000LL;
    v15[0] = v11;
    v12 = a4 & 0xFFFBFFFF;
    if ( (a4 & 0x40000) == 0 )
      v12 = a4;
    a4 = v12;
    if ( a8 )
    {
      v16[2] = 3LL;
      v10 = 2;
      v16[3] = a8;
    }
  }
  v13 = v16;
  if ( !v10 )
    v13 = 0LL;
  return NtAllocateVirtualMemoryEx(-1LL, a1, a2, a4, a5, v13, v10);
}
