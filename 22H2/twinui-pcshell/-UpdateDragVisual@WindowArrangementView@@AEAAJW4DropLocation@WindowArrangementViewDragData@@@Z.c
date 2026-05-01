/*
 * XREFs of ?UpdateDragVisual@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180480460
 * Callers:
 *     ?UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z @ 0x180480CC8 (-UpdateView@WindowArrangementView@@AEAAJAEBUCPoint@Geometry@@W4UpdateViewFlags@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowArrangementView::UpdateDragVisual(__int64 a1, int a2)
{
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    v4 = a2 - 5;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 80LL))(v3, *(_QWORD *)(a1 + 104) != 0LL ? 6 : 0);
        return 0LL;
      }
      v5 = 2LL;
    }
    else
    {
      v5 = 3LL;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, v5);
  }
  return 0LL;
}
