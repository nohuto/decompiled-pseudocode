/*
 * XREFs of rimUpdatePointerDeviceFrameScanTime @ 0x1C01B2A14
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimSimulatedPointerDeviceScanTime @ 0x1C00E7494 (rimSimulatedPointerDeviceScanTime.c)
 *     rimExtractScantime @ 0x1C01B0738 (rimExtractScantime.c)
 */

void __fastcall rimUpdatePointerDeviceFrameScanTime(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  _DWORD *v4; // rbx
  int v9; // eax
  __int64 v10[2]; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_DWORD **)(a2 + 472);
  v10[0] = KeQueryPerformanceCounter(0LL).QuadPart;
  v9 = v4[90];
  v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v9 & 0x80u) == 0 )
    rimSimulatedPointerDeviceScanTime(a1, (__int64)v4, v10, &v11);
  else
    rimExtractScantime(
      a1,
      v4,
      *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL),
      a3,
      a4,
      (unsigned __int64 *)v10,
      (unsigned int *)&v11);
}
