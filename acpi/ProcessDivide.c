/*
 * XREFs of ProcessDivide @ 0x1C00583C0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 */

__int64 __fastcall ProcessDivide(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // eax
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx

  v3 = a3;
  if ( a3 )
    v6 = 2;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return v3;
      goto LABEL_18;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
    v9 = *(_QWORD *)(v7 + 80);
    v10 = *(_QWORD *)(v9 + 56);
    if ( v10 )
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(v9 + 16) % v10;
    else
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
    v3 = WriteObject(a1, *(_QWORD *)(v7 + 80) + 80LL, *(_QWORD *)(a2 + 48));
    if ( v3 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
      return v3;
  }
  ++*(_DWORD *)(a2 + 16);
  *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
  v11 = *(_QWORD *)(v7 + 80);
  v12 = *(_QWORD *)(v11 + 56);
  if ( v12 )
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(v11 + 16) / v12;
  else
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
  v3 = WriteObject(a1, *(_QWORD *)(v7 + 80) + 120LL, *(_QWORD *)(a2 + 48));
  if ( v3 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
  {
LABEL_18:
    v13 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v13 + 8);
    HeapFree(v13);
  }
  return v3;
}
