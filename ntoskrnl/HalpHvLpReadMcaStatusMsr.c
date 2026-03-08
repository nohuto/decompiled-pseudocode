/*
 * XREFs of HalpHvLpReadMcaStatusMsr @ 0x1405091B4
 * Callers:
 *     HalpHvEpReadMsr @ 0x140453390 (HalpHvEpReadMsr.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14037D1B4 (HalpGetCpuVendor.c)
 *     HalpHvLpReadMultipleMsr @ 0x140509280 (HalpHvLpReadMultipleMsr.c)
 */

char __fastcall HalpHvLpReadMcaStatusMsr(unsigned int a1, unsigned int a2, __int64 *a3, _QWORD *a4)
{
  char v8; // di
  signed int v9; // ebx
  __int64 v10; // rsi

  v8 = 0;
  if ( HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
  {
    if ( a2 < 0xC0002000 )
      return v8;
    v9 = (a2 + 1073733632) >> 4;
  }
  else
  {
    if ( a2 < 0x401 )
      return v8;
    v9 = (a2 - 1025) >> 2;
  }
  if ( v9 > -1 && v9 < (unsigned int)HalpHvMcaBankCount )
  {
    v10 = *a3;
    if ( *a3 )
    {
LABEL_12:
      v8 = 1;
      *a4 = *(_QWORD *)(v10 + 8LL * v9);
      return v8;
    }
    v10 = HalpHvMcaStatusCache + 8LL * HalpHvMcaBankCount * a1;
    if ( (int)HalpHvLpReadMultipleMsr(a1, (unsigned int)HalpHvMcaBankCount, HalpHvMcaStatusMsrIndices, v10) >= 0 )
    {
      *a3 = v10;
      goto LABEL_12;
    }
  }
  return v8;
}
