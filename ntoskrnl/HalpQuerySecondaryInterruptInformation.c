/*
 * XREFs of HalpQuerySecondaryInterruptInformation @ 0x14085EDA0
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQuerySecondaryInterruptInformation(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( SecondaryIcServicesEnabled )
  {
    *(_WORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = SecondaryGsivRangeStart;
    *(_DWORD *)(a1 + 8) = SecondaryGsivRangeSize;
    *(_QWORD *)(a1 + 16) = HalpMaskInterrupt;
    *(_QWORD *)(a1 + 24) = HalpUnmaskInterrupt;
    *(_QWORD *)(a1 + 32) = HalpInvokeIsrForGsiv;
    *(_QWORD *)(a1 + 40) = HalpUnregisterSecondaryIcInterface;
    *(_QWORD *)(a1 + 48) = HalpInterruptRequestInterrupt;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
