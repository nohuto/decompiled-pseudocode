/*
 * XREFs of _safecrt_mbtowc @ 0x1403D2AC0
 * Callers:
 *     _woutput_l @ 0x1403D4B18 (_woutput_l.c)
 *     _woutput_s @ 0x1403D9344 (_woutput_s.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1406DDC10 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl safecrt_mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  PUCHAR SourceCharacter; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      SourceCharacter = (PUCHAR)SrcCh;
      *DstCh = RtlAnsiCharToUnicodeChar(&SourceCharacter);
      return (_DWORD)SourceCharacter - v4;
    }
    else if ( DstCh )
    {
      *DstCh = 0;
    }
  }
  return result;
}
