__int64 __fastcall NtUserSetInteractiveCtrlRotationAngle(unsigned int a1, unsigned int a2, int a3, unsigned int a4)
{
  struct InteractiveControlManager *v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  EnterSharedCrit();
  v11 = a3;
  if ( a2 - 1 > 7 )
    a2 = 3;
  v8 = InteractiveControlManager::Instance();
  InteractiveControlManager::SetDeviceComponentResolution(v8, a1, a2, a4, &v11);
  UserSessionSwitchLeaveCrit(v9);
  return 1LL;
}
