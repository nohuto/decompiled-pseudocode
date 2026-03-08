/*
 * XREFs of SepBuildDefaultCap @ 0x1408567F4
 * Callers:
 *     SepRmDbInitialization @ 0x140B69A18 (SepRmDbInitialization.c)
 * Callees:
 *     SepBuildDefaultCape @ 0x1403A74D4 (SepBuildDefaultCape.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 SepBuildDefaultCap()
{
  int v0; // ebx
  __int64 Pool2; // rax
  __int128 v2; // xmm0
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v0 = SepBuildDefaultCape((__int64 *)&P);
  if ( v0 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 72LL, 1884513619LL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      v2 = DefaultCapName;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_OWORD *)(Pool2 + 40) = v2;
      *(_DWORD *)(Pool2 + 56) = 1;
      *(_DWORD *)(Pool2 + 60) = 1;
      *(_QWORD *)(Pool2 + 64) = P;
      SepRmDefaultCap = Pool2;
      return (unsigned int)v0;
    }
    v0 = -1073741670;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x70536553u);
  return (unsigned int)v0;
}
