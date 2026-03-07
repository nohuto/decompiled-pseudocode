__int64 __fastcall MiApplyBootLoadedDriversFixups(__int64 a1)
{
  __int64 ***v3; // rdi
  ULONG_PTR i; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r9
  int v9; // eax
  __int64 **j; // rbx
  _QWORD v11[14]; // [rsp+50h] [rbp-98h] BYREF

  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    goto LABEL_2;
  v3 = (__int64 ***)(a1 + 16);
  for ( i = *(_QWORD *)(a1 + 16); (__int64 ***)i != v3; i = *(_QWORD *)i )
  {
    v5 = *(_QWORD *)(i + 48);
    v6 = ((unsigned __int64)*(unsigned int *)(i + 64) + 4095) >> 12;
    v7 = RtlImageNtHeader(v5);
    if ( !_bittest16((const signed __int16 *)(i + 110), 9u) )
      MiLogRetpolineImageLoadEvents(i);
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 && v5 != PsNtosImageBase && v5 != PsHalImageBase )
    {
      if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(i + 48)) )
      {
        v8 = MiMapRetpolineStubs(v5, v6);
        if ( (*(_BYTE *)(v7 + 22) & 1) != 0
          || *(_DWORD *)(v7 + 132) <= 5u
          || _bittest16((const signed __int16 *)(i + 110), 9u) )
        {
          continue;
        }
        if ( (MiFlags & 0x8000) != 0 )
        {
          memset(v11, 0, 0x68uLL);
          v11[1] = v5;
          LOBYTE(v11[2]) = 1;
          v9 = VslpEnterIumSecureMode(2u, 222, 0, (__int64)v11);
        }
        else
        {
          v9 = RtlPerformRetpolineRelocationsOnImageEx(v5, v5, *(_DWORD *)(i + 64), v8, (__int64)Base, 1, 0LL, 0LL, 0);
        }
        if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741637 )
          KeBugCheckEx(0x1Au, 0x1080uLL, i, *(_QWORD *)(i + 48), v9);
      }
      if ( (unsigned int)RtlIsImageFullyRetpolined(*(_QWORD *)(i + 48)) )
        MiMarkRetpolineBits(*(_QWORD *)(i + 48));
    }
  }
  for ( j = *v3; j != (__int64 **)v3; j = (__int64 **)*j )
  {
    if ( ((_DWORD)j[13] & 0x1000000) == 0 && !(unsigned int)RtlIsImageFullyRetpolined((__int64)j[6]) )
      MiMarkRetpolineBits((__int64)j[6]);
  }
LABEL_2:
  MiApplyImportOptimizationToBootDrivers(a1);
  return MiApplyFunctionOverrideToBootDrivers(a1);
}
