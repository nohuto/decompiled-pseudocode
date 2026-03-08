/*
 * XREFs of rimUpdatePointerDeviceFrameScanTime @ 0x1C00F18F6
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01D6420 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimSimulatedPointerDeviceScanTime @ 0x1C00F1808 (rimSimulatedPointerDeviceScanTime.c)
 *     rimExtractScantime @ 0x1C01D7F80 (rimExtractScantime.c)
 */

void __fastcall rimUpdatePointerDeviceFrameScanTime(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v7; // eax
  int v8; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 472);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = *(_DWORD *)(v3 + 360);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v7 & 0x80u) == 0 )
    rimSimulatedPointerDeviceScanTime(v3, (__int64 *)&PerformanceCounter, &v8);
  else
    rimExtractScantime(
      v3,
      *(_QWORD *)(*(_QWORD *)(a1 + 456) + 16LL),
      a2,
      a3,
      (__int64)&PerformanceCounter,
      (__int64)&v8);
}
