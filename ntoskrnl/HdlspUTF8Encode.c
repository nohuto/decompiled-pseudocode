/*
 * XREFs of HdlspUTF8Encode @ 0x140604540
 * Callers:
 *     HdlspPutString @ 0x140AE8194 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140AE830C (HdlspPutWideString.c)
 * Callees:
 *     <none>
 */

char __fastcall HdlspUTF8Encode(unsigned __int16 a1, _BYTE *a2)
{
  char result; // al
  __int16 v3; // ax

  result = 0x80;
  if ( (a1 & 0xFF80) != 0 )
  {
    a2[2] = a1 & 0x3F | 0x80;
    v3 = a1 >> 6;
    if ( (a1 & 0xF800) != 0 )
    {
      result = v3 & 0x3F | 0x80;
      *a2 = (a1 >> 12) | 0xE0;
    }
    else
    {
      result = v3 & 0x1F | 0xC0;
    }
    a2[1] = result;
  }
  else
  {
    a2[2] = a1;
  }
  return result;
}
