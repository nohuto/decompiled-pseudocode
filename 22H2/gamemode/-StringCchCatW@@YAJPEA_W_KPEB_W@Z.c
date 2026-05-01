/*
 * XREFs of ?StringCchCatW@@YAJPEA_W_KPEB_W@Z @ 0x180001274
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEB_W_N_K@Z @ 0x1800029B8 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEB_W_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x180002D50 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(wchar_t *a1, __int64 a2, const wchar_t *a3)
{
  __int64 v4; // r9
  wchar_t *v5; // rax
  __int64 result; // rax
  __int64 v7; // r8
  wchar_t *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // r10
  wchar_t v12; // r8
  wchar_t *v13; // rax

  v4 = 260LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    v7 = 260 - v4;
  else
    v7 = 0LL;
  if ( v4 )
  {
    v8 = &a1[v7];
    v9 = 260 - v7;
    if ( 260 != v7 )
    {
      v10 = 2147483646LL;
      v11 = (char *)((char *)a3 - (char *)v8);
      do
      {
        if ( !v10 )
          break;
        v12 = *(wchar_t *)((char *)v8 + (_QWORD)v11);
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
    return v9 == 0 ? 0x8007007A : 0;
  }
  return result;
}
