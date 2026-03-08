/*
 * XREFs of ??1CIFlipPresentHistoryTokenFlipManager@@UEAA@XZ @ 0x1C0051DC4
 * Callers:
 *     ??_GCIFlipPresentHistoryTokenFlipManager@@UEAAPEAXI@Z @ 0x1C0051E60 (--_GCIFlipPresentHistoryTokenFlipManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CIFlipPresentHistoryTokenFlipManager::~CIFlipPresentHistoryTokenFlipManager(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CIFlipPresentHistoryTokenFlipManager::`vftable';
  CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  ObfDereferenceObject((PVOID)(v1 - 32));
  *(_QWORD *)this = &CIFlipPresentHistoryTokenData::`vftable';
}
