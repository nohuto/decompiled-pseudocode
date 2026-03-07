__int64 __fastcall NtCompositionInputThread(void *a1, void *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  CInputManager *v10; // rcx

  if ( !qword_1C02D7298 || (int)qword_1C02D7298() < 0 )
    return 3221225474LL;
  if ( !UserIsCurrentProcessDwm(v7, v6, v8, v9) )
    return 3221225506LL;
  if ( g_pInputManager )
    return CInputManager::DwmInputThread(v10, a1, a2, a3);
  return 3221225473LL;
}
