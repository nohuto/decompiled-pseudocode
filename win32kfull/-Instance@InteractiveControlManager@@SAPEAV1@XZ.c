struct InteractiveControlManager *__fastcall InteractiveControlManager::Instance(__int64 a1)
{
  __int64 v1; // rbx
  InteractiveControlManager *v3; // rax

  v1 = SGDGetUserSessionState(a1);
  if ( !*(_QWORD *)(v1 + 17104) )
  {
    v3 = (InteractiveControlManager *)Win32AllocPoolZInit(320LL, 1819440195LL);
    if ( v3 )
      *(_QWORD *)(v1 + 17104) = InteractiveControlManager::InteractiveControlManager(v3);
  }
  return *(struct InteractiveControlManager **)(v1 + 17104);
}
