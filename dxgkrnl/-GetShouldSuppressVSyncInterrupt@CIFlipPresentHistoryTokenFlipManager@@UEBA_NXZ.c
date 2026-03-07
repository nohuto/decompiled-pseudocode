bool __fastcall CIFlipPresentHistoryTokenFlipManager::GetShouldSuppressVSyncInterrupt(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 8LL);
  if ( v2 )
    return *(_BYTE *)(v2 + 12);
  return v1;
}
