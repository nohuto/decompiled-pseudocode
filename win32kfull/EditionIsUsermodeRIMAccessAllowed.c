__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 CurrentProcess; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2);
  v5 = IsProcessDwm(CurrentProcess);
  if ( !v7 )
    UserSessionSwitchLeaveCrit(v4);
  return v5;
}
