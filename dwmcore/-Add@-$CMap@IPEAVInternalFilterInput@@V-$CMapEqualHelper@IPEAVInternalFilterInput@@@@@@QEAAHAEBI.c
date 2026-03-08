/*
 * XREFs of ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x180217FA4
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180219C30 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEIN.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180027640 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  LPVOID v6; // rax
  void *v7; // rcx
  LPVOID v8; // rax
  __int64 v9; // r8
  _DWORD *v10; // rdx
  _QWORD *v11; // rdx

  v6 = DefaultHeap::Realloc(*(void **)a1, 4LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = DefaultHeap::Realloc(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v8 )
    return 0LL;
  v9 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v10 = (_DWORD *)(*(_QWORD *)a1 + 4 * v9);
  if ( v10 )
    *v10 = *a2;
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v9);
  if ( v11 )
    *v11 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
