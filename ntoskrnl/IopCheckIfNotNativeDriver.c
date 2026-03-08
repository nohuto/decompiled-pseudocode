/*
 * XREFs of IopCheckIfNotNativeDriver @ 0x140941674
 * Callers:
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     wcsstr @ 0x1403D6020 (wcsstr.c)
 *     IopIsNotNativeDriverImage @ 0x1409420DC (IopIsNotNativeDriverImage.c)
 */

char __fastcall IopCheckIfNotNativeDriver(int a1, __int64 a2)
{
  wchar_t *v2; // rbx
  char *v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  signed __int64 v7; // r9
  __int16 v8; // ax
  char *v9; // rax
  _WORD *v10; // rbx

  v2 = *(wchar_t **)(a2 + 8);
  if ( a1 != -1073741772 )
    return IopIsNotNativeDriverImage(a2);
  if ( !v2 )
    return 0;
  while ( wcsnicmp(v2, L"\\System32\\drivers\\", 0x12uLL) )
  {
    v2 = wcsstr(v2 + 1, L"\\");
    if ( !v2 )
      return 0;
  }
  v4 = (char *)(v2 + 1);
  v5 = (*(unsigned __int16 *)(a2 + 2) - (unsigned __int64)(unsigned __int16)((_WORD)v2 - *(_WORD *)(a2 + 8))) >> 1;
  if ( v5 - 1 <= 0x7FFFFFFE )
  {
    v6 = 8 - v5;
    v7 = (char *)L"SysWow64" - v4;
    do
    {
      if ( !(v6 + v5) )
        break;
      v8 = *(_WORD *)&v4[v7];
      if ( !v8 )
        break;
      *(_WORD *)v4 = v8;
      v4 += 2;
      --v5;
    }
    while ( v5 );
    v9 = v4 - 2;
    if ( v5 )
      v9 = v4;
    *(_WORD *)v9 = 0;
  }
  v10 = v2 + 9;
  *v10 = 92;
  if ( v10 )
    return IopIsNotNativeDriverImage(a2);
  else
    return 0;
}
