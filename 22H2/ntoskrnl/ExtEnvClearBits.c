/*
 * XREFs of ExtEnvClearBits @ 0x1404D52C4
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AA588 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
