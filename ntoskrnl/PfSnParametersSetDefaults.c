/*
 * XREFs of PfSnParametersSetDefaults @ 0x140B61EA0
 * Callers:
 *     PfpParametersInitialize @ 0x140B61C6C (PfpParametersInitialize.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall PfSnParametersSetDefaults(__int64 a1)
{
  __int64 v1; // rdx
  const wchar_t **v2; // r9
  int v3; // r8d
  _DWORD *v4; // r11
  _QWORD *v5; // rcx
  const wchar_t *v6; // rax
  _WORD *v7; // rcx
  __int64 v8; // r8
  __int16 v9; // ax
  bool v10; // zf
  _WORD *v11; // rax
  __int64 v12; // r8
  _WORD *v13; // rcx
  __int16 v14; // ax
  _WORD *result; // rax

  v1 = a1 + 96;
  v2 = (const wchar_t **)(a1 + 520);
  v3 = 0;
  v4 = (_DWORD *)(a1 + 96);
  v5 = (_QWORD *)(a1 + 112);
  do
  {
    *v4 = 0;
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_6;
      *((_DWORD *)v5 - 2) = 20000;
      v6 = L"Activity";
      *((_DWORD *)v5 - 1) = 500;
    }
    else
    {
      *((_DWORD *)v5 - 2) = 32000;
      v6 = L"AppLaunch";
      *((_DWORD *)v5 - 1) = 340;
    }
    *v5 = -10000000LL;
    *v2 = v6;
LABEL_6:
    ++v3;
    ++v2;
    ++v4;
    v5 += 2;
  }
  while ( v3 < 2 );
  v7 = (_WORD *)(v1 + 48);
  *(_DWORD *)(v1 + 400) = 0;
  *(_DWORD *)(v1 + 40) = 8;
  *(_DWORD *)(v1 + 44) = 16;
  v8 = 48LL;
  do
  {
    if ( v8 == -2147483598 )
      break;
    v9 = *(_WORD *)((char *)v7 + (_QWORD)&aSystemrootPref[-24] - v1);
    if ( !v9 )
      break;
    *v7++ = v9;
    --v8;
  }
  while ( v8 );
  v10 = v8 == 0;
  v11 = v7 - 1;
  v12 = 128LL;
  if ( !v10 )
    v11 = v7;
  v13 = (_WORD *)(v1 + 144);
  *v11 = 0;
  *(_WORD *)(v1 + 142) = 0;
  do
  {
    if ( v12 == -2147483518 )
      break;
    v14 = *(_WORD *)((char *)v13 + (_QWORD)&aDllhostExeMmcE[-72] - v1);
    if ( !v14 )
      break;
    *v13++ = v14;
    --v12;
  }
  while ( v12 );
  result = v13 - 1;
  if ( v12 )
    result = v13;
  *result = 0;
  *(_WORD *)(v1 + 398) = 0;
  *(_DWORD *)(v1 + 404) = 10;
  return result;
}
