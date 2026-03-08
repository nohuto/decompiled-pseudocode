/*
 * XREFs of KeConfigureHeteroPolicy @ 0x140827A64
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x1408273AC (PopConfigureHeteroPolicies.c)
 * Callees:
 *     <none>
 */

char __fastcall KeConfigureHeteroPolicy(_DWORD *a1)
{
  __int64 v1; // r8
  __int64 v3; // rbx
  int *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // ecx
  char v8; // r9
  int *v9; // rcx
  __int64 v10; // r11
  int v11; // eax
  char v12; // r10
  char v13; // r10
  char result; // al

  v1 = 0LL;
  if ( *a1 >= 9u )
    *a1 = 0;
  v3 = 7LL;
  v4 = a1 + 1;
  v5 = 7LL;
  do
  {
    v6 = 2LL;
    do
    {
      if ( *v4 >= 5 )
        *v4 = 0;
      ++v4;
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
  v7 = a1[17];
  if ( (v7 & 0xFFFFFFC0) != 0 )
  {
    a1[17] = 0;
    v7 = 0;
  }
  v8 = 0;
  if ( KiDesiredHeteroCpuPolicy != *a1
    || KiDynamicHeteroCpuPolicyImportantPriority != a1[15]
    || KiDynamicHeteroCpuPolicyMask != v7
    || KiDynamicHeteroCpuPolicyExpectedRuntime != a1[16] )
  {
    KiDesiredHeteroCpuPolicy = *a1;
    v8 = 1;
    KiDynamicHeteroCpuPolicyImportantPriority = a1[15];
    KiDynamicHeteroCpuPolicyMask = a1[17];
    KiDynamicHeteroCpuPolicyExpectedRuntime = a1[16];
    KiDynamicHeteroCpuPolicyExpectedCycles = *(_DWORD *)(KiProcessorBlock[0] + 68)
                                           * KiDynamicHeteroCpuPolicyExpectedRuntime;
  }
  v9 = KiDynamicHeteroCpuPolicy;
  do
  {
    v10 = 2LL;
    do
    {
      v11 = *(int *)((char *)v9 + (char *)a1 - (char *)KiDynamicHeteroCpuPolicy + 4);
      if ( *v9 != v11 )
      {
        v8 = 1;
        *v9 = v11;
      }
      v12 = *((_BYTE *)a1 + v1 + 90);
      if ( KiMultiCoreHeteroLowerArchThreshold[v1] != v12 )
      {
        v8 = 1;
        KiMultiCoreHeteroLowerArchThreshold[v1] = v12;
      }
      v13 = *((_BYTE *)a1 + v1 + 76);
      if ( KiMultiCoreHeteroUpperArchThreshold[v1] != v13 )
      {
        v8 = 1;
        KiMultiCoreHeteroUpperArchThreshold[v1] = v13;
      }
      ++v9;
      ++v1;
      --v10;
    }
    while ( v10 );
    --v3;
  }
  while ( v3 );
  result = v8;
  KiQosHysteresisTimerPeriod = a1[18];
  return result;
}
