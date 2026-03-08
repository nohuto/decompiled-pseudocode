/*
 * XREFs of DrvGetHdevName @ 0x1C00D39D0
 * Callers:
 *     NtUserGetHDevName @ 0x1C004F5B0 (NtUserGetHDevName.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0070E78 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

_BOOL8 __fastcall DrvGetHdevName(__int64 a1, unsigned __int16 *a2)
{
  return RtlStringCchCopyW(a2, 0x20uLL, (size_t *)(*(_QWORD *)(a1 + 2552) + 64LL)) >= 0;
}
