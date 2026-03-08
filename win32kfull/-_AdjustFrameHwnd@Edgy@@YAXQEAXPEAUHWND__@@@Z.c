/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01E8B54
 * Callers:
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C01E98E0 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E6A40 (INPUTDEST_FROM_PWND.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(Edgy *this, void *const a2, HWND a3)
{
  __int64 v4; // rax
  __int128 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-E8h]
  __int128 v9; // [rsp+30h] [rbp-D8h]
  __int128 v10; // [rsp+40h] [rbp-C8h]
  __int128 v11; // [rsp+50h] [rbp-B8h]
  __int128 v12; // [rsp+60h] [rbp-A8h]
  __int128 v13; // [rsp+70h] [rbp-98h]
  __int128 v14; // [rsp+80h] [rbp-88h]
  _OWORD v15[7]; // [rsp+90h] [rbp-78h] BYREF

  if ( this )
  {
    v4 = ValidateHwnd(a2);
    v5 = (__int128 *)INPUTDEST_FROM_PWND(v15, v4);
    v8 = *v5;
    v9 = v5[1];
    v10 = v5[2];
    v11 = v5[3];
    v12 = v5[4];
    v13 = v5[5];
    v14 = v5[6];
    v7 = *(_QWORD *)(SGDGetUserSessionState(v6) + 3424);
    v15[0] = v8;
    v15[1] = v9;
    v15[2] = v10;
    v15[3] = v11;
    v15[4] = v12;
    v15[5] = v13;
    v15[6] = v14;
    CTouchProcessor::AdjustEdgyFrameInputDest(v7, this, v15);
  }
}
