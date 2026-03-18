/*
 * XREFs of HalpInitializeInterruptsBspLate @ 0x1403AEC6C
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A8A2E0 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x14031F8FC (HalpInterruptModel.c)
 *     HalpInterruptRemapFixedLines @ 0x1403AECB4 (HalpInterruptRemapFixedLines.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x14085E2E8 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpUpdatePerDeviceMsiLimitInformation @ 0x140B70994 (HalpUpdatePerDeviceMsiLimitInformation.c)
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
