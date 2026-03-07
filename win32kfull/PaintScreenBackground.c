__int64 PaintScreenBackground()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  HDC v4; // rcx
  __int64 v5; // rcx
  RECT v7; // [rsp+20h] [rbp-18h] BYREF

  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v0);
  EnterSharedCrit(v2, v1, v3);
  EnterSharedRenderCrit();
  v4 = *(HDC *)(gpDispInfo + 56LL);
  v7 = *(RECT *)(*gpDispInfo + 24LL);
  FillRect(v4, &v7, *(HBRUSH *)(gpsi + 4704LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v5);
  return EnterCrit(1LL, 0LL);
}
