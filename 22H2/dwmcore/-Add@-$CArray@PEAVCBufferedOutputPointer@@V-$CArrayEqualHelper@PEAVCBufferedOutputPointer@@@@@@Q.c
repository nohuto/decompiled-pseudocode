/*
 * XREFs of ?Add@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAHAEBQEAVCBufferedOutputPointer@@@Z @ 0x18022FAC0
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18022FB84 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18004610C (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F7D8 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::Add(
        char **a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v5; // esi
  int v6; // edi
  char *v7; // rax
  char *v8; // rcx
  char *v9; // r8

  v2 = *((int *)a1 + 2);
  v5 = 1;
  if ( (int)v2 + 1 <= 0 )
    return 0;
  if ( (_DWORD)v2 != *((_DWORD *)a1 + 3) )
    goto LABEL_12;
  if ( (int)v2 > 0x3FFFFFFF || v2 > 0xFFFFFFFFFFFFFFFLL )
    return 0;
  v6 = 2;
  if ( *((int *)a1 + 3) >= 2 )
    v6 = v2 + ((int)v2 >> 1);
  v7 = (char *)((_DWORD)v2 ? DefaultHeap::Realloc(*a1, 8LL * v6) : DefaultHeap::AllocClear(8LL * v6));
  if ( !v7 )
    return 0;
  *((_DWORD *)a1 + 3) = v6;
  *a1 = v7;
LABEL_12:
  v8 = *a1;
  *((_DWORD *)a1 + 2) = v2 + 1;
  v9 = &v8[8 * v2];
  if ( v9 )
    *(_QWORD *)v9 = *a2;
  return v5;
}
