/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C0207F10
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0208AAC (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(Edgy *this, void *const a2, HWND a3)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  _OWORD v12[7]; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD v13[30]; // [rsp+90h] [rbp-78h] BYREF

  if ( this )
  {
    v4 = ValidateHwnd(a2);
    v5 = INPUTDEST_FROM_PWND(v13, v4);
    v6 = v5[1];
    v12[0] = *v5;
    v7 = v5[2];
    v12[1] = v6;
    v8 = v5[3];
    v12[2] = v7;
    v9 = v5[4];
    v12[3] = v8;
    v10 = v5[5];
    v12[4] = v9;
    v11 = v5[6];
    v12[5] = v10;
    v12[6] = v11;
    CTouchProcessor::AdjustEdgyFrameInputDest(gpTouchProcessor, this, v12);
  }
}
