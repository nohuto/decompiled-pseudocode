/*
 * XREFs of DSA_Preallocate @ 0x1804E7C04
 * Callers:
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015B0C0 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     DSA_InsertItem @ 0x1804E7B74 (DSA_InsertItem.c)
 * Callees:
 *     _DSA_ReAlloc @ 0x1804E7A04 (_DSA_ReAlloc.c)
 */

__int64 __fastcall DSA_Preallocate(_DWORD *a1, int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int v8; // ebx

  if ( a2 < 0 )
    return 0LL;
  v3 = a2 + *a1;
  if ( (v3 & 0x80000000) != 0 )
    return 0LL;
  v4 = a1[4];
  if ( v3 <= v4 )
    return 1LL;
  v5 = a1[6] + v4;
  if ( v3 <= v5 )
    v3 = v5;
  if ( (int)v3 <= 0 || v3 >= 0x7FFFFFFFu / a1[5] )
    return 0LL;
  result = DSA_ReAlloc((__int64)a1, v3);
  if ( (_DWORD)result )
  {
    v7 = a1[6];
    v8 = v3 >> 2;
    if ( v7 <= v8 )
      v7 = v8;
    a1[6] = v7;
  }
  return result;
}
