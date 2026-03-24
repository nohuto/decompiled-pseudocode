/*
 * XREFs of ExtEnvZeroMemory @ 0x14036D040
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x1409AA588 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void __stdcall ExtEnvZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
