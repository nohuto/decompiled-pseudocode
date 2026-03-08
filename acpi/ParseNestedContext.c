/*
 * XREFs of ParseNestedContext @ 0x1C005BB50
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     AsyncCallBack @ 0x1C00543D8 (AsyncCallBack.c)
 */

__int64 __fastcall ParseNestedContext(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v3 = a3;
  if ( !a3 )
  {
    v6 = *(_QWORD *)(a2 + 96);
    if ( v6 )
      v3 = DupObjData(gpheapGlobal, v6, a2 + 48);
  }
  AsyncCallBack((_QWORD *)a1, v3);
  FreeDataBuffs(a2 + 48, 1u);
  v7 = *(_DWORD *)(a1 + 64) & 0xFFFFFEFF;
  *(_DWORD *)(a1 + 64) = v7;
  *(_DWORD *)(a1 + 64) = v7 | *(_DWORD *)(a2 + 112) & 0x100;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 120);
  DereferenceObjectEx(*(_QWORD *)(a2 + 32));
  v8 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  DereferenceObjectEx(v8);
  *(_QWORD *)(a2 + 40) = 0LL;
  v9 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v9 + 8);
  HeapFree(v9);
  return 0x8000LL;
}
