/*
 * XREFs of xxxAddFontResourceW @ 0x1C00B8754
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00B8670 (xxxLW_LoadFonts.c)
 * Callees:
 *     xxxClientAddFontResourceW @ 0x1C003458C (xxxClientAddFontResourceW.c)
 */

__int64 __fastcall xxxAddFontResourceW(PCWSTR SourceString, unsigned int a2, __int64 a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return xxxClientAddFontResourceW((void **)&DestinationString, a2, a3);
}
