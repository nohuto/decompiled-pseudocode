/*
 * XREFs of PiSwDeviceCompareObjects @ 0x1408514E0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 */

__int64 __fastcall PiSwDeviceCompareObjects(struct _RTL_AVL_TABLE *Table, __int64 *FirstStruct, __int64 *SecondStruct)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ebx
  bool v7; // sf

  v3 = *FirstStruct;
  v4 = *SecondStruct;
  v5 = wcsicmp(*(const wchar_t **)(*FirstStruct + 16), *(const wchar_t **)(*SecondStruct + 16));
  v6 = 0;
  v7 = v5 < 0;
  if ( !v5 )
  {
    v5 = wcsicmp(*(const wchar_t **)(v3 + 8), *(const wchar_t **)(v4 + 8));
    v7 = v5 < 0;
  }
  if ( v7 )
    return 0LL;
  LOBYTE(v6) = v5 <= 0;
  return (unsigned int)(v6 + 1);
}
