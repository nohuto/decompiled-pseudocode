/*
 * XREFs of EngWideCharToMultiByte @ 0x1C027B810
 * Callers:
 *     <none>
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00E7F50 (ConvertToAndFromWideChar.c)
 */

INT __stdcall EngWideCharToMultiByte(
        UINT CodePage,
        LPWSTR pwszWideCharString,
        INT cjWideCharString,
        LPSTR pszMultiByteString,
        INT cjMultiByteString)
{
  return ConvertToAndFromWideChar(
           CodePage,
           pwszWideCharString,
           cjWideCharString,
           pszMultiByteString,
           cjMultiByteString,
           0);
}
