/*
 * XREFs of KeInitializeProcessUserCetLogging @ 0x1409725B4
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeInitializeProcessUserCetLogging(__int64 a1)
{
  __int64 Pool2; // rax
  unsigned int v3; // edx

  Pool2 = ExAllocatePool2(256LL, 192LL, 1280591171LL);
  v3 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 88;
    *(_DWORD *)(Pool2 + 20) = 5;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 128;
    *(_QWORD *)(Pool2 + 56) = Pool2 + 168;
    *(_DWORD *)(Pool2 + 44) = 5;
    *(_DWORD *)(Pool2 + 68) = 3;
    *(_QWORD *)(a1 + 1048) = Pool2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
