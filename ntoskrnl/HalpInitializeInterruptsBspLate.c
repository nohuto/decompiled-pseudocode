/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403A9F1C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A86CD0 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14028EADC (HalpInterruptModel.c)
 *     HalpInterruptRemapFixedLines @ 0x1403A9F64 (HalpInterruptRemapFixedLines.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x14085A328 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140B6C9A4 (HalpUpdatePerDeviceMsiLimitInformation.c)
 */

__int64 HalpInitializeInterruptsBspLate()
{
  __int64 result; // rax

  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && (int)HalpInitializeInterruptRemappingBspLate() < 0 )
    KeBugCheckEx(0x5Cu, 0x7000uLL, 3uLL, 1uLL, 0LL);
  HalpUpdatePerDeviceMsiLimitInformation();
  result = (unsigned int)HalpInterruptModel() - 1;
  if ( (unsigned int)result <= 2 )
    return HalpInterruptRemapFixedLines();
  return result;
}
