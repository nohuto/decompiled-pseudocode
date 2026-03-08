/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C01E0CB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C00EB8DC (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00FA9C0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C01F3478 (UpdateSizeTrackingInfo.c)
 */

__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rsi
  int updated; // ebx
  __int64 v10; // rdx
  unsigned int v11; // r8d
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  INT v20[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  updated = 0;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v21;
      *((_QWORD *)&v21 + 1) = v6;
      HMLockObject(v6);
      if ( IsShellParticipatesInSizing(v8, v10, v11) )
      {
        if ( *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL)
                                                                                   + 320LL)
                                                                       + 16LL)
                                                           + 424LL)
          && (LOBYTE(v16) = IAMThreadAccessGranted(gptiCurrent), v16) )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (__int64 *)MmUserProbeAddress;
          v17 = *a2;
          *(_QWORD *)v20 = *a2;
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (__int64 *)MmUserProbeAddress;
          v18 = *a3;
          v23 = *a3;
          if ( (int)v17 > 0
            && SHIDWORD(v17) > 0
            && (int)v18 > 0
            && SHIDWORD(v18) > 0
            && (int)v17 >= (int)v18
            && v20[1] >= SHIDWORD(v23) )
          {
            ShellWindowManagement::TransformWindowTrackInfo((__int64)v8, v20, (INT *)&v23, 1);
            updated = UpdateSizeTrackingInfo(v8, v20, &v23);
            goto LABEL_21;
          }
          v12 = 87;
        }
        else
        {
          v12 = 5;
        }
      }
      else
      {
        v12 = 5023;
      }
      UserSetLastError(v12);
LABEL_21:
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return updated;
}
