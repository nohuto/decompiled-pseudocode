/*
 * XREFs of ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01D23E4
 * Callers:
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D2534 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 */

void __fastcall RescaleIconMetrics(struct tagICONMETRICSW *a1, __int64 a2)
{
  INT DpiForSystem; // eax
  INT v4; // ebx
  INT v5; // edx

  DpiForSystem = GetDpiForSystem((__int64)a1, a2);
  v4 = DpiForSystem;
  v5 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( DpiForSystem != v5 )
  {
    *((_DWORD *)a1 + 1) = EngMulDiv(*((_DWORD *)a1 + 1), v5, DpiForSystem);
    *((_DWORD *)a1 + 2) = EngMulDiv(*((_DWORD *)a1 + 2), *(unsigned __int16 *)(gpsi + 6998LL), v4);
    *((_DWORD *)a1 + 5) = EngMulDiv(*((_DWORD *)a1 + 5), *(unsigned __int16 *)(gpsi + 6998LL), v4);
    *((_DWORD *)a1 + 4) = EngMulDiv(*((_DWORD *)a1 + 4), *(unsigned __int16 *)(gpsi + 6998LL), v4);
  }
}
