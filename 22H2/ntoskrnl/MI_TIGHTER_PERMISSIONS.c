/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x140358424
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14028FCC0 (MmSetAddressRangeModifiedEx.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  return (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 || a2 < 0 && a1 >= 0;
}
