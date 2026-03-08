/*
 * XREFs of xxxDoDeferredPointerActivate @ 0x1C01C82D8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E6A40 (INPUTDEST_FROM_PWND.c)
 */

__int64 __fastcall xxxDoDeferredPointerActivate(__int64 a1)
{
  __int64 result; // rax
  __int128 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-158h]
  __int128 v9; // [rsp+30h] [rbp-148h]
  __int128 v10; // [rsp+40h] [rbp-138h]
  __int128 v11; // [rsp+50h] [rbp-128h]
  __int128 v12; // [rsp+60h] [rbp-118h]
  __int128 v13; // [rsp+70h] [rbp-108h]
  __int128 v14; // [rsp+80h] [rbp-F8h]
  _OWORD v15[7]; // [rsp+90h] [rbp-E8h] BYREF
  _DWORD v16[30]; // [rsp+100h] [rbp-78h] BYREF

  result = ValidateHwnd(*(_QWORD *)(a1 + 16));
  if ( result )
  {
    v3 = (__int128 *)INPUTDEST_FROM_PWND(v16, result);
    v8 = *v3;
    v9 = v3[1];
    v10 = v3[2];
    v11 = v3[3];
    v12 = v3[4];
    v13 = v3[5];
    v14 = v3[6];
    v5 = SGDGetUserSessionState(v4);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(v5 + 3424);
    v15[0] = v8;
    v15[1] = v9;
    v15[2] = v10;
    v15[3] = v11;
    v15[4] = v12;
    v15[5] = v13;
    v15[6] = v14;
    return CTouchProcessor::DoDeferredPointerActivate(v7, v15, v6);
  }
  return result;
}
