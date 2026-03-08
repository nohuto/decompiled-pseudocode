/*
 * XREFs of MiGetImageHotPatchTableAddress @ 0x140A345A0
 * Callers:
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetImageHotPatchTableAddress(__int64 a1)
{
  return ((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(a1 + 72) + 8LL) << 12)
       + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
}
