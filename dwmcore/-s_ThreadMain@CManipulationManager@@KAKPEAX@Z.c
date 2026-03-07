__int64 __fastcall CManipulationManager::s_ThreadMain(PVOID Parameter)
{
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Parameter + 64LL))(Parameter);
  return 0LL;
}
