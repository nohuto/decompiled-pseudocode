__int64 __fastcall PpmSnapDripsAccountingSnapshot(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r11
  int v6; // ebp
  __int64 v8; // r14
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r11
  int v13; // r9d
  _QWORD v14[26]; // [rsp+30h] [rbp-F8h] BYREF

  result = (unsigned int)dword_140CF7A00;
  v5 = 0LL;
  v6 = PopWnfCsEnterScenarioId;
  if ( PpmPlatformStates && dword_140CF7A00 != -1 )
  {
    v8 = 26LL;
    v9 = (_QWORD *)(1016LL * (unsigned int)dword_140CF7A00 + *(_QWORD *)(PpmPlatformStates + 48) + 208LL);
    do
    {
      v10 = PpmConvertTime(*v9 - *(_QWORD *)((char *)&PpmDripsAccountingSnapshot + v5), PopQpcFrequency, 0x989680uLL);
      *(_QWORD *)((char *)v14 + v12) = v10;
      v5 = v12 + 8;
      v9 += 4;
      --v8;
    }
    while ( v8 );
    PpmEventTraceDripsAccountingSnapshot(v11, v14);
    return PopDiagTraceDripsHistogram(v6, a2, a3, v13, (__int64)v14);
  }
  return result;
}
