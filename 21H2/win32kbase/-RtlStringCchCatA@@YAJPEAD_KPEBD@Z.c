/*
 * XREFs of ?RtlStringCchCatA@@YAJPEAD_KPEBD@Z @ 0x1C00E86E8
 * Callers:
 *     flagString @ 0x1C01DA508 (flagString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCatA(char *a1, __int64 a2, const char *a3)
{
  __int64 v3; // r9
  char *v4; // rax
  __int64 v6; // r8
  __int64 result; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  const char *v11; // r10
  char v12; // r8
  char *v13; // rax

  v3 = 512LL;
  v4 = byte_1C029A260;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v3;
  }
  while ( v3 );
  v6 = (512 - v3) & -(__int64)(v3 != 0);
  result = v3 == 0 ? 0xC000000D : 0;
  if ( v3 )
  {
    v8 = &byte_1C029A260[v6];
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
