/*
 * XREFs of _memicmp @ 0x1403F6F50
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     __ascii_memicmp @ 0x1403F6EE8 (__ascii_memicmp.c)
 */

int __cdecl memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return _ascii_memicmp((__int64)Buf1, (unsigned __int8 *)Buf2, Size);
}
