/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403CD42C
 * Callers:
 *     HalpInterruptInitSystem @ 0x14099EA00 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14037ADC4 (HalpInterruptModel.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CD46C (HalpInterruptRemapFixedLines.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x140865780 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140A72004 (HalpUpdatePerDeviceMsiLimitInformation.c)
 */

__int64 HalpInitializeInterruptsBspLate()
{
  __int64 result; // rax

  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 && (int)HalpInitializeInterruptRemappingBspLate() < 0 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 3uLL, 1uLL, 0LL);
  HalpUpdatePerDeviceMsiLimitInformation();
  result = (unsigned int)HalpInterruptModel() - 1;
  if ( (unsigned int)result <= 2 )
    return HalpInterruptRemapFixedLines();
  return result;
}
