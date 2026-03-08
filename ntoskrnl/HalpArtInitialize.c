/*
 * XREFs of HalpArtInitialize @ 0x140372B50
 * Callers:
 *     <none>
 * Callees:
 *     HalpArtAvailable @ 0x1403733F0 (HalpArtAvailable.c)
 *     HalUpdateTimerCapabilities @ 0x140373620 (HalUpdateTimerCapabilities.c)
 */

__int64 __fastcall HalpArtInitialize(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rax
  int v3; // edi
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v5 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = ~(CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore - 1);
  if ( (unsigned __int8)HalpArtAvailable(&v5, &v6)
    && (v3 & a1[2]) == (v3 & v6)
    && *a1 == (_DWORD)v5
    && a1[1] == HIDWORD(v5) )
  {
    HalUpdateTimerCapabilities(a1, 0LL, 0LL);
  }
  else
  {
    HalpTimerAuxiliaryClockEnabled = 0;
  }
  return 0LL;
}
