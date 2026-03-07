__int64 __fastcall KiSetupTimeIncrement(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v3; // r9d
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  LARGE_INTEGER v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // cl
  __int64 result; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF
  char v15; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v14 = 0;
  v3 = 156250;
  v4 = a2;
  if ( a2 <= 0x1388 )
    v4 = 5000;
  v5 = KiMinDynamicTickDuration;
  KeMinimumIncrement = v4;
  if ( a1 < 0x2625A )
    v3 = a1;
  KeMaximumIncrement = v3;
  if ( a2 > KiMinDynamicTickDuration )
  {
    v5 = a2;
    KiMinDynamicTickDuration = a2;
  }
  v6 = KiMaxDynamicTickDuration;
  if ( a1 < KiMaxDynamicTickDuration )
  {
    v6 = a1;
    KiMaxDynamicTickDuration = a1;
  }
  if ( v6 < v5 )
    KiMaxDynamicTickDuration = v5;
  KiTickOffset = v3;
  v15 = 0;
  KiMaximumIncrementReciprocal = RtlpComputeFraction(1LL, v3, &v15);
  KeNumberProcessorsGroup0[1] = -v15;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = PerformanceFrequency;
  KeTimeAdjustmentFrequency = PerformanceFrequency.QuadPart;
  v9 = v7;
  v10 = RtlGenerateQpcToIncrementConstants(PerformanceFrequency.LowPart, &v14);
  v11 = MmWriteableSharedUserData;
  v12 = v14;
  *(LARGE_INTEGER *)(MmWriteableSharedUserData + 768) = v8;
  *(_QWORD *)(v11 + 864) = v10;
  *(_BYTE *)(v11 + 873) = v12;
  *(_QWORD *)(v11 + 856) = MEMORY[0xFFFFF78000000360];
  *(_BYTE *)(v11 + 872) = MEMORY[0xFFFFF78000000369];
  *(LARGE_INTEGER *)(v11 + 840) = v9;
  *(LARGE_INTEGER *)(v11 + 848) = v9;
  result = 0x989680u / KeMaximumIncrement;
  KiBalanceSetManagerPeriod = 0x989680u / KeMaximumIncrement;
  KiBalanceSetManagerCount = 0x989680u / KeMaximumIncrement;
  return result;
}
