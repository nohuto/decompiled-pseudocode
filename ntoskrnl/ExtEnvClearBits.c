/*
 * XREFs of ExtEnvClearBits @ 0x14051D050
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140A96048 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
