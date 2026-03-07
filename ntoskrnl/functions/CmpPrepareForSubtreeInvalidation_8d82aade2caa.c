__int64 __fastcall CmpPrepareForSubtreeInvalidation(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+24h] [rbp-24h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  v5 = 0LL;
  v6 = 0;
  v9 = 0;
  v4 = 0;
  v7 = a3;
  v8 = a2;
  CmpEnumerateAllOpenSubKeys(a1, 0, (__int64)CmpPrepareForSubtreeInvalidationWorker, (__int64)&v4);
  result = (unsigned int)v4;
  if ( v4 >= 0 )
  {
    if ( (_DWORD)v5 )
      return 3221225761LL;
    else
      return HIDWORD(v5) != 0 ? 0xC000022D : 0;
  }
  return result;
}
