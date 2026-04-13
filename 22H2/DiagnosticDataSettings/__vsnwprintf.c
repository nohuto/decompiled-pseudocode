/*
 * XREFs of __vsnwprintf @ 0x10004C2A
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPAGPAGPBG1ZZ @ 0x1000382D (-LogStringPrintf@details@wil@@YAPAGPAGPBG1ZZ.c)
 * Callees:
 *     __vsnwprintf_l @ 0x10004BF7 (__vsnwprintf_l.c)
 */

int __cdecl _vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return _vsnwprintf_l(Buffer, BufferCount, Format, 0, Args);
}
