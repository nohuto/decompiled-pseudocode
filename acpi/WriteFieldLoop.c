/*
 * XREFs of WriteFieldLoop @ 0x1C0053200
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     PushAccFieldObj @ 0x1C00525E8 (PushAccFieldObj.c)
 */

__int64 __fastcall WriteFieldLoop(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx

  v3 = a3;
  if ( a3 )
    goto LABEL_10;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
      return v3;
    goto LABEL_10;
  }
  v6 = *(_DWORD *)(a2 + 56);
  if ( !v6 )
  {
    ++*(_DWORD *)(a2 + 16);
LABEL_10:
    v9 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v9 + 8);
    HeapFree(v9);
    return v3;
  }
  if ( *(_DWORD *)(a2 + 60) <= v6 )
    v6 = *(_DWORD *)(a2 + 60);
  v7 = v6;
  v8 = PushAccFieldObj(a1, (int)WriteFieldObj, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), v6);
  *(_DWORD *)(a2 + 56) -= v7;
  v3 = v8;
  *(_QWORD *)(a2 + 48) += v7;
  return v3;
}
