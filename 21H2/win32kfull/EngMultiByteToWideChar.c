/*
 * XREFs of EngMultiByteToWideChar @ 0x1C027B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00E7F50 (ConvertToAndFromWideChar.c)
 */

INT __stdcall EngMultiByteToWideChar(
        UINT CodePage,
        LPWSTR WideCharString,
        INT cjWideCharString,
        LPSTR MultiByteString,
        INT cjMultiByteString)
{
  return ConvertToAndFromWideChar(CodePage, WideCharString, cjWideCharString, MultiByteString, cjMultiByteString, 1);
}
