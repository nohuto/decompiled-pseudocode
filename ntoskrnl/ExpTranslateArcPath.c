/*
 * XREFs of ExpTranslateArcPath @ 0x1409FB1E4
 * Callers:
 *     NtTranslateFilePath @ 0x14083EB70 (NtTranslateFilePath.c)
 * Callees:
 *     ExpConvertArcName @ 0x1409F8CB8 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1409F8E7C (ExpConvertSignatureName.c)
 *     ExpParseArcPathName @ 0x1409F9F48 (ExpParseArcPathName.c)
 */

__int64 __fastcall ExpTranslateArcPath(__int64 a1, unsigned int a2, void *a3, unsigned int *a4)
{
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *v11; // [rsp+38h] [rbp-18h] BYREF
  wchar_t *v12; // [rsp+40h] [rbp-10h] BYREF
  char v13; // [rsp+70h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v10 = 0;
  v13 = 0;
  result = ExpParseArcPathName((_WORD *)(a1 + 12), &v12, &v11, &v10, &v13);
  if ( (int)result >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( !v13 )
    {
      if ( v9 == 1 )
        return ExpConvertArcName(a2, (__int64)a3, a4, v12, v11, v10);
      return 3221225485LL;
    }
    if ( v9 != 2 )
      return 3221225485LL;
    return ExpConvertSignatureName(a2, a3, a4, v12, v11);
  }
  return result;
}
