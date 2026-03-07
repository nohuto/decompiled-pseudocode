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
