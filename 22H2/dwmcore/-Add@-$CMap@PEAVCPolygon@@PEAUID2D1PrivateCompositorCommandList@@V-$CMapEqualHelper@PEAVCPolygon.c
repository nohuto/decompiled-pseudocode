/*
 * XREFs of ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18024B18C
 * Callers:
 *     ?Initialize@CD2DCommandList@@IEAAJPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18024B300 (-Initialize@CD2DCommandList@@IEAAJPEAUID2D1PrivateCompositorCommandList@@@Z.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x18004610C (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  LPVOID v6; // rax
  void *v7; // rcx
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // r8
  char *v12; // rdx

  v6 = DefaultHeap::Realloc(*(void **)a1, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  if ( !v6 )
    return 0LL;
  v7 = *(void **)(a1 + 8);
  *(_QWORD *)a1 = v6;
  v8 = (char *)DefaultHeap::Realloc(v7, 8LL * (*(_DWORD *)(a1 + 16) + 1));
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = *(int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v8;
  v11 = (_QWORD *)(*(_QWORD *)a1 + 8 * v10);
  if ( v11 )
  {
    *v11 = *a2;
    v9 = *(char **)(a1 + 8);
  }
  v12 = &v9[8 * v10];
  if ( v12 )
    *(_QWORD *)v12 = *a3;
  ++*(_DWORD *)(a1 + 16);
  return 1LL;
}
