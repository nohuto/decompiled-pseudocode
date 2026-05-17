/*
 * XREFs of mbtowc @ 0x1800967C4
 * Callers:
 *     _woutput_l @ 0x180093810 (_woutput_l.c)
 *     ReadString @ 0x180095A54 (ReadString.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180062970 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      v5 = (char *)SrcCh;
      *DstCh = RtlAnsiCharToUnicodeChar(&v5);
      return (_DWORD)v5 - v4;
    }
    else if ( DstCh )
    {
      *DstCh = 0;
    }
  }
  return result;
}
