/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1C01E63B0
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F4B20 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0240100 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall ResetAccessibilityCountersOnMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF
  char v16; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13832) = 0;
  *(_BYTE *)(SGDGetUserSessionState(v5, v4, v6, v7) + 13833) = 0;
  _InterlockedOr(v15, 0);
  if ( gtmridFKActivation )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16, v8, v9, v10);
    v14 = gtmridFKActivation;
    if ( gtmridFKActivation )
    {
      ApiSetEditionKillAccessibilityTimer(v11, gtmridFKActivation);
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v16 )
      UserSessionSwitchLeaveCrit(v11, v14, v12, v13);
  }
}
