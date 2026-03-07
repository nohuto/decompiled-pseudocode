__int64 __fastcall VrpComparePath(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  int v8; // r14d
  unsigned int v9; // eax
  wchar_t *Str2[2]; // [rsp+20h] [rbp-20h] BYREF
  wchar_t *Str1[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h] BYREF
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0LL;
  *(_OWORD *)Str1 = 0LL;
  v3 = 0LL;
  v4 = 0;
  *(_OWORD *)Str2 = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    VrpGetNextToken(a1, &v13, Str1);
    VrpGetNextToken(a2, &v14, Str2);
    v8 = LOWORD(Str1[0]);
    if ( !LOWORD(Str1[0]) && !LOWORD(Str2[0]) )
      break;
    v9 = LOWORD(Str1[0]);
    if ( LOWORD(Str1[0]) >= LOWORD(Str2[0]) )
      v9 = LOWORD(Str2[0]);
    v4 = wcsnicmp(Str1[1], Str2[1], (unsigned __int64)v9 >> 1);
    if ( v4 )
      goto LABEL_10;
    v4 = v8 - LOWORD(Str2[0]);
    if ( v8 != LOWORD(Str2[0]) )
    {
      if ( !(_WORD)v8 || LOWORD(Str2[0]) )
      {
LABEL_10:
        v3 = 0LL;
        break;
      }
      break;
    }
    ++v3;
  }
  if ( a3 )
    *a3 = v3;
  return v4;
}
