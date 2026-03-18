/*
 * XREFs of PaintScreenBackground @ 0x1C00BC930
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x1C0028BEC (FillRect.c)
 */

__int64 PaintScreenBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  HDC v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  RECT v13; // [rsp+20h] [rbp-18h] BYREF

  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  EnterSharedCrit(v5, v4, v6);
  EnterSharedRenderCrit();
  v7 = *(HDC *)(gpDispInfo + 56LL);
  v13 = *(RECT *)(*gpDispInfo + 24LL);
  FillRect(v7, &v13, *(HBRUSH *)(gpsi + 4704LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return EnterCrit(1LL, 0LL);
}
