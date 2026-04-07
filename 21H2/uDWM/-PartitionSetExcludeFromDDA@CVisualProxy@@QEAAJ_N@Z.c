/*
 * XREFs of ?PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z @ 0x1800BE92C
 * Callers:
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18003D744 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x180092EF4 (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::PartitionSetExcludeFromDDA(CVisualProxy *this, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 264LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a3);
}
