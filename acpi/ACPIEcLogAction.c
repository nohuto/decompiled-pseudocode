/*
 * XREFs of ACPIEcLogAction @ 0x1C0002D3C
 * Callers:
 *     AcpiEcCommonDpcHandler @ 0x1C0002C4E (AcpiEcCommonDpcHandler.c)
 *     ACPIEcServiceIoLoop @ 0x1C0002EF0 (ACPIEcServiceIoLoop.c)
 *     ACPIEcQueueEcIrp @ 0x1C0024F24 (ACPIEcQueueEcIrp.c)
 *     ACPIEcServiceDevice @ 0x1C0025C50 (ACPIEcServiceDevice.c)
 *     ACPIEcWatchdogDpc @ 0x1C0025D70 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall ACPIEcLogAction(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // r9
  __int64 v6; // rdi
  char v7; // dl
  char v8; // al
  __int64 v9; // rcx
  char v10; // al
  LARGE_INTEGER result; // rax
  __int64 v12; // rcx
  unsigned __int8 v13; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v15; // cx
  bool v16; // cc
  unsigned __int8 v17; // r9
  LARGE_INTEGER v18; // rax
  __int16 v19; // cx

  v3 = *(unsigned __int8 *)(a1 + 505);
  v6 = v3;
  v7 = *(_BYTE *)(a1 + 4 * v3 + 648);
  if ( (v7 & 0xF0) == 0xA0
    && (v8 = *(_BYTE *)(a1 + 488) | a2, v9 = ((_BYTE)v3 - 1) & 0x1F, *(_BYTE *)(a1 + 4 * v9 + 648) == v8)
    && *(_BYTE *)(a1 + 4 * v9 + 649) == a3 )
  {
    v10 = *(_BYTE *)(a1 + 4 * v3 + 649) + 1;
    if ( *(_BYTE *)(a1 + 4 * v3 + 649) == 0xFF )
      v10 = -1;
    *(_BYTE *)(a1 + 4 * v3 + 649) = v10;
    result = KeQueryPerformanceCounter(0LL);
    v12 = result.QuadPart + *(unsigned __int16 *)(a1 + 4 * v6 + 650) - ACPIEcLastActionTime;
    if ( v12 > 0xFFFF )
      LOWORD(v12) = -1;
    *(_WORD *)(a1 + 4 * v6 + 650) = v12;
  }
  else if ( v7 == (*(_BYTE *)(a1 + 488) | a2) && *(_BYTE *)(a1 + 4 * v3 + 649) == a3 )
  {
    v13 = (v3 + 1) & 0x1F;
    *(_BYTE *)(a1 + 505) = v13;
    *(_BYTE *)(a1 + 4LL * v13 + 649) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = LOWORD(PerformanceCounter.LowPart) - ACPIEcLastActionTime;
    v16 = PerformanceCounter.QuadPart - ACPIEcLastActionTime <= 0xFFFF;
    ACPIEcLastActionTime = PerformanceCounter.QuadPart;
    if ( !v16 )
      v15 = -1;
    *(_WORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 505) + 650) = v15;
    result.QuadPart = *(unsigned __int8 *)(a1 + 505);
    *(_BYTE *)(a1 + 4 * result.QuadPart + 648) = *(_BYTE *)(a1 + 488) | 0xA0;
  }
  else
  {
    v17 = (v3 + 1) & 0x1F;
    *(_BYTE *)(a1 + 505) = v17;
    *(_BYTE *)(a1 + 4LL * v17 + 649) = a3;
    v18 = KeQueryPerformanceCounter(0LL);
    v19 = LOWORD(v18.LowPart) - ACPIEcLastActionTime;
    v16 = v18.QuadPart - ACPIEcLastActionTime <= 0xFFFF;
    ACPIEcLastActionTime = v18.QuadPart;
    if ( !v16 )
      v19 = -1;
    *(_WORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 505) + 650) = v19;
    result.QuadPart = *(unsigned __int8 *)(a1 + 505);
    *(_BYTE *)(a1 + 4 * result.QuadPart + 648) = *(_BYTE *)(a1 + 488) | a2;
  }
  return result;
}
