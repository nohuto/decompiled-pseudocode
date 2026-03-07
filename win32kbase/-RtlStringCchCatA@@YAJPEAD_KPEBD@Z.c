__int64 __fastcall RtlStringCchCatA(char *a1, __int64 a2, const char *a3)
{
  __int64 v4; // r9
  char *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  const char *v11; // r10
  char v12; // r8
  char *v13; // rax

  v4 = 512LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (512 - v4) & -(__int64)(v4 != 0);
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v8 = &a1[v6];
    v9 = 512 - v6;
    if ( 512 != v6 )
    {
      v10 = 2147483646LL;
      v11 = (const char *)(a3 - v8);
      do
      {
        if ( !v10 )
          break;
        v12 = v8[(_QWORD)v11];
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x80000005 : 0;
  }
  return result;
}
