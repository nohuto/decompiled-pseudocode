/*
 * XREFs of SmmMapContiguousMemory @ 0x1C00706A4
 * Callers:
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x1C0070E84 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall SmmMapContiguousMemory(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  if ( a1 <= (unsigned __int64)MmHighestUserAddress )
  {
    WdLogSingleEntry1(1LL, 477LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0LL,
          2,
          -1,
          L"pBaseAddress > MmHighestUserAddress",
          477LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *a4 = a1 + a2;
  *a5 = 0LL;
  *a6 = a3;
  return 0LL;
}
