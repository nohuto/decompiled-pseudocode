void __fastcall DCompositionNotifyCompositionTokenPresent(unsigned __int64 a1, int a2)
{
  DirectComposition::CSynchronizationManager::NotifyPresent(a1, a2 != 0);
}
