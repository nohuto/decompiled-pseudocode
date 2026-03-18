/*
 * XREFs of RtlInitializeBitMap @ 0x14034E7A0
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140A99188 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeBitMap(PRTL_BITMAP BitMapHeader, PULONG BitMapBuffer, ULONG SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
