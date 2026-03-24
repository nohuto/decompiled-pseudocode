/*
 * XREFs of RtlInitializeBitMap @ 0x1402B2D90
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AA448 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeBitMap(PRTL_BITMAP BitMapHeader, PULONG BitMapBuffer, ULONG SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
