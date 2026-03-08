/*
 * XREFs of SmmMapVirtualMemory @ 0x1C03D2D34
 * Callers:
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x1C0070E84 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmMapVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  if ( a1 > (unsigned __int64)MmHighestUserAddress )
  {
    WdLogSingleEntry1(1LL, 235LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pBaseAddress <= MmHighestUserAddress",
      235LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a4 = a1 + a2;
  *a5 = 0LL;
  *a6 = a3;
  return 0LL;
}
