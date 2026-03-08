/*
 * XREFs of ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x18020AA34
 * Callers:
 *     ?s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z @ 0x18019FA00 (-s_OnReceiveInputThreadMessage@CInputManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098AA0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 */

void __fastcall CManipulation::OnEdgyDetected(CManipulation *this, const struct EdgyDetectedParams *a2)
{
  __int64 v2; // rcx
  __int128 *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _QWORD v11[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v12[3]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+80h] [rbp-18h]

  if ( CNotificationResource::ShouldNotify(this) )
  {
    v5 = *(_QWORD *)(v2 + 48);
    v6 = *(unsigned int *)(v2 + 64);
    if ( v5 )
      v7 = *(_DWORD *)(v5 + 76);
    else
      v7 = 0;
    v8 = *v3;
    v9 = v3[1];
    v11[0] = v7;
    v12[0] = v8;
    v10 = v3[2];
    v12[1] = v9;
    *(_QWORD *)&v9 = *((_QWORD *)v3 + 6);
    v11[1] = v6;
    v12[2] = v10;
    v13 = v9;
    CoreUICallSend(v4, v11, 2LL, 13LL, 0, &unk_180339460, v12);
  }
}
