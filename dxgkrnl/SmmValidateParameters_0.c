/*
 * XREFs of SmmValidateParameters_0 @ 0x1C0070CA4
 * Callers:
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x1C0070E84 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall SmmValidateParameters_0(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int v5; // r10d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  KIRQL CurrentIrql; // al

  v4 = *(_DWORD *)(a1 + 44);
  if ( ((a4 | a3) & 0xFFF) != 0 )
  {
    WdLogSingleEntry3(3LL, a3, a4, 568LL);
    return 0;
  }
  if ( a3 + a4 >= a3 )
  {
    if ( a3 + a4 <= *(_QWORD *)a1 )
    {
      if ( a2 == 1 )
      {
        v5 = (v4 >> 1) & 0xF;
        if ( v5 == 5 || v5 == 3 )
        {
          WdLogSingleEntry1(3LL, 600LL);
          return 0;
        }
      }
      else
      {
        if ( a2 )
        {
          WdLogSingleEntry1(3LL, a2);
          return 0;
        }
        v5 = (v4 >> 1) & 0xF;
        if ( v5 == 4 )
        {
          WdLogSingleEntry1(3LL, 612LL);
          return 0;
        }
      }
      if ( v5 == 1 || v5 == 2 && a2 == 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 1u )
        {
          WdLogSingleEntry2(3LL, CurrentIrql, 646LL);
          return 0;
        }
      }
      else if ( KeGetCurrentIrql() > 2u )
      {
        WdLogSingleEntry1(1LL, 655LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v7,
              v6,
              v8,
              0LL,
              2,
              -1,
              L"KeGetCurrentIrql() <= 2",
              655LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      return 1;
    }
    WdLogSingleEntry4(3LL, a3, a4, *(_QWORD *)a1, 587LL);
  }
  else
  {
    WdLogSingleEntry3(3LL, a3, a4, 577LL);
  }
  return 0;
}
