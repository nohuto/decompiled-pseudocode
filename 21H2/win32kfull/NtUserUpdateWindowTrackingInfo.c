/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C0204320
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0037FF4 (IAMThreadAccessGranted.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C0049790 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C011CAE4 (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     UpdateSizeTrackingInfo @ 0x1C02110F8 (UpdateSizeTrackingInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int updated; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  INT v19[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]
  unsigned __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v20;
    *((_QWORD *)&v20 + 1) = v7;
    HMLockObject(v7);
    if ( IsShellParticipatesInSizing(v9, v10, v11) )
    {
      if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL)
                                                                                 + 328LL)
                                                                     + 16LL)
                                                         + 424LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned __int64 *)MmUserProbeAddress;
        v16 = *a2;
        *(_QWORD *)v19 = *a2;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (unsigned __int64 *)MmUserProbeAddress;
        v17 = *a3;
        v22 = *a3;
        if ( (int)v16 > 0 )
        {
          v12 = HIDWORD(v16);
          if ( SHIDWORD(v16) > 0 && (int)v17 > 0 )
          {
            v12 = HIDWORD(v17);
            if ( SHIDWORD(v17) > 0 && (int)v16 >= (int)v17 && v19[1] >= SHIDWORD(v22) )
            {
              ShellWindowManagement::TransformWindowTrackInfo((__int64)v9, v19, (INT *)&v22, 1);
              updated = UpdateSizeTrackingInfo(v9);
              goto LABEL_21;
            }
          }
        }
        v14 = 87LL;
      }
      else
      {
        v14 = 5LL;
      }
    }
    else
    {
      v14 = 5023LL;
    }
    UserSetLastError(v14, v12, v13);
LABEL_21:
    ThreadUnlock1(v15);
  }
  UserSessionSwitchLeaveCrit(v8);
  return updated;
}
