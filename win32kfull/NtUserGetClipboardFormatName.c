/*
 * XREFs of NtUserGetClipboardFormatName @ 0x1C0012A10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClipboardFormatName(unsigned __int16 a1, volatile void *a2, unsigned int a3)
{
  unsigned int v6; // ebx

  ProbeForWrite(a2, 2LL * a3, 2u);
  if ( a1 < 0xC000u )
  {
    v6 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    return (unsigned int)UserGetAtomName(a1, a2, a3);
  }
  return v6;
}
