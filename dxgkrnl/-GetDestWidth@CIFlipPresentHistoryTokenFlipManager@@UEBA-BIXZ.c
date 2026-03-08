/*
 * XREFs of ?GetDestWidth@CIFlipPresentHistoryTokenFlipManager@@UEBA?BIXZ @ 0x1C00196E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIFlipPresentHistoryTokenFlipManager::GetDestWidth(CIFlipPresentHistoryTokenFlipManager *this)
{
  __int64 v1; // rax

  v1 = **(_QWORD **)(*((_QWORD *)this + 1) + 64LL);
  return (unsigned int)(*(_DWORD *)(v1 + 12) - *(_DWORD *)(v1 + 4));
}
