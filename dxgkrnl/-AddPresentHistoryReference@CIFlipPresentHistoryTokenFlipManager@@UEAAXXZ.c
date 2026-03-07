void __fastcall CIFlipPresentHistoryTokenFlipManager::AddPresentHistoryReference(
        CIFlipPresentHistoryTokenFlipManager *this)
{
  ObReferenceObjectByPointer((PVOID)(*((_QWORD *)this + 1) - 32LL), 3u, g_pDxgkCompositionObjectType, 0);
}
