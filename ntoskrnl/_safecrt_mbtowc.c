/*
 * XREFs of _safecrt_mbtowc @ 0x1403D4730
 * Callers:
 *     _woutput_l @ 0x1403D6800 (_woutput_l.c)
 *     _woutput_s @ 0x1403DB12C (_woutput_s.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1406EA670 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl safecrt_mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  const char *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      v5 = SrcCh;
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
