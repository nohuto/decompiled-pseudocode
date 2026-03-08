/*
 * XREFs of EngWideCharToMultiByte @ 0x1C027C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x1C00BCE20 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
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
