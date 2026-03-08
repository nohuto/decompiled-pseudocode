/*
 * XREFs of CmpGetVirtualizationIDFromFullVirtualPath @ 0x140A171A8
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x140A16E8C (CmpGetCmHiveFromVirtualPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetVirtualizationIDFromFullVirtualPath(_OWORD *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r10
  int v3; // r9d
  _WORD *v4; // r8
  unsigned __int64 v5; // rax
  __int16 v6; // ax
  _WORD *v7; // r11
  unsigned __int16 v8; // ax
  unsigned int v9; // r9d
  unsigned __int64 v10; // r10
  unsigned int v11; // ecx
  unsigned __int16 v12; // r8
  unsigned __int64 v13; // rax

  v2 = 0;
  *(_OWORD *)a2 = *a1;
  v3 = 3;
  while ( 1 )
  {
    v4 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( *v4 == 92 && !--v3 )
      break;
    v5 = *a2;
    ++v2;
    *((_QWORD *)a2 + 1) = v4 + 1;
    if ( 2 * (unsigned __int64)v2 >= v5 )
      return 3221225485LL;
  }
  v6 = *a2;
  v7 = v4 + 1;
  *((_QWORD *)a2 + 1) = v4 + 1;
  *(_DWORD *)a2 = 0;
  v8 = v6 - 2 * v2 - 2;
  v9 = 0;
  v10 = v8;
  v11 = -1073741811;
  if ( v8 )
  {
    v12 = 0;
    v13 = 0LL;
    while ( v7[v13 / 2] != 92 )
    {
      ++v9;
      v12 += 2;
      v13 = 2LL * v9;
      *a2 = v12;
      if ( v13 >= v10 )
        return v11;
    }
    return 0;
  }
  return v11;
}
