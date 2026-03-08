/*
 * XREFs of HalpErrataInitSystem @ 0x140A87AA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14038F7C4 (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpErrataApplyPerProcessor @ 0x140A87B18 (HalpErrataApplyPerProcessor.c)
 *     HalpErrataInitDiscard @ 0x140B320C0 (HalpErrataInitDiscard.c)
 *     HalpInitChipHacks @ 0x140B35648 (HalpInitChipHacks.c)
 */

__int64 __fastcall HalpErrataInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  switch ( a1 )
  {
    case 19:
      goto LABEL_9;
    case 2:
      HalpMaxPciBus = *(_DWORD *)(*(_QWORD *)(a3 + 240) + 3488LL);
      return v3;
    case 7:
      HalpErrataInitDiscard();
      return v3;
    case 17:
      qword_140C5FE08 = (__int64)&HalpUsbControllerList;
      HalpUsbControllerList = (__int64)&HalpUsbControllerList;
      HalpUsbLegacyScanBusForHandoff();
LABEL_9:
      HalpErrataApplyPerProcessor();
      return v3;
    case 27:
      return (unsigned int)HalpInitChipHacks();
  }
  return v3;
}
