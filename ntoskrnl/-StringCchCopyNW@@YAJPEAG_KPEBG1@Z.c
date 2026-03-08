/*
 * XREFs of ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1402BEED8
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x1402BEE08 (DownLevelLangIDToLanguageName.c)
 *     DownLevelGetParentLanguageName @ 0x140612240 (DownLevelGetParentLanguageName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax
  __int64 result; // rax

  v4 = a2;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( !a2 )
      return result;
LABEL_13:
    *(_WORD *)a1 = 0;
    return result;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    goto LABEL_13;
  }
  v5 = a4 - a2;
  v6 = a3 - a1;
  do
  {
    if ( !(v5 + v4) )
      break;
    v7 = *(_WORD *)&a1[v6];
    if ( !v7 )
      break;
    *(_WORD *)a1 = v7;
    a1 += 2;
    --v4;
  }
  while ( v4 );
  v8 = (unsigned __int16 *)(a1 - 2);
  if ( v4 )
    v8 = (unsigned __int16 *)a1;
  *v8 = 0;
  return v4 == 0 ? 0x8007007A : 0;
}
