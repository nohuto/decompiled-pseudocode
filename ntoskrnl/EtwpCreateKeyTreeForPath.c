/*
 * XREFs of EtwpCreateKeyTreeForPath @ 0x1405FEE28
 * Callers:
 *     EtwStartAutoLogger @ 0x14083CA48 (EtwStartAutoLogger.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCreateKey @ 0x1405FED84 (EtwpCreateKey.c)
 */

__int64 __fastcall EtwpCreateKeyTreeForPath(_WORD *a1)
{
  int v2; // ebp
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 result; // rax
  WCHAR v7; // cx
  WCHAR SourceString[256]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  v3 = 0;
  memset(SourceString, 0, sizeof(SourceString));
  LODWORD(v4) = 0;
  if ( *a1 )
  {
    while ( (unsigned int)v4 < 0x100 )
    {
      v5 = (unsigned int)v4;
      if ( a1[(unsigned int)v4] == 92 && (unsigned int)++v2 > 3 )
      {
        result = EtwpCreateKey(SourceString);
        v3 = result;
        if ( (int)result < 0 )
          return result;
      }
      v7 = a1[(unsigned int)v4];
      v4 = (unsigned int)(v4 + 1);
      SourceString[v5] = v7;
      if ( !a1[v4] )
        return v3;
    }
  }
  return v3;
}
