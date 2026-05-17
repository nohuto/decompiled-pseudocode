/*
 * XREFs of _itow_s @ 0x180096C70
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x180046F54 (RtlpFindRegTziForCurrentYear.c)
 *     LdrpMUIEtwOutput @ 0x1800E133C (LdrpMUIEtwOutput.c)
 * Callees:
 *     xtow_s @ 0x180096E20 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return xtow_s(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
