/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C0082990
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x1C0082330 (xxxActivateKeyboardLayout.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0086700 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C003B460 (ThreadUnlock1.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0085BA4 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00C7730 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C00D0684 (ApiSetEditionImmActivateLayout.c)
 *     xxxWindowEvent @ 0x1C00D40F8 (xxxWindowEvent.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C00DDF28 (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     IsKeyboardDelegationTarget @ 0x1C00E1150 (IsKeyboardDelegationTarget.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C023F2B4 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C0242924 (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned int v7; // r12d
  struct tagTHREADINFO *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rcx
  __int64 i; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 *v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  _QWORD v22[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = 0LL;
  v22[2] = 0LL;
  v7 = a3 & 0x100;
  v8 = gptiCurrent;
  v9 = (__int64 *)((char *)gptiCurrent + 440);
  v10 = *((_QWORD *)gptiCurrent + 55);
  if ( v10 )
    v6 = *(_QWORD *)(v10 + 40);
  else
    v10 = 0LL;
  v19 = v6;
  if ( (a3 & 0x40000000) != 0 )
    *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13856) = ((unsigned int)a3 >> 15) & 2;
  if ( v7 || a2 != *v9 )
  {
    *(_WORD *)(a2 + 74) = 0;
    v22[0] = *((_QWORD *)v8 + 52);
    *((_QWORD *)v8 + 52) = v22;
    v22[1] = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( (*((_DWORD *)v8 + 122) & 8) != 0 )
    {
      v20 = v9;
      v21 = a2;
      HMAssignmentLock(&v20, 0);
      *(_WORD *)(*((_QWORD *)v8 + 60) + 152LL) = *(_WORD *)(a2 + 72);
    }
    else if ( v7 )
    {
      v11 = *((_QWORD *)v8 + 53);
      v12 = *(unsigned int *)gpsi;
      if ( (v12 & 4) != 0 )
      {
        v13 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(v11 + 320), v12, a2) == 0;
      }
      else
      {
        v14 = 0LL;
        for ( i = *(_QWORD *)(v11 + 320); i; i = *(_QWORD *)(i + 664) )
        {
          v12 = i + 440;
          if ( *(_QWORD *)(i + 440) != a2 && (*(_DWORD *)(i + 488) & 1) == 0 )
          {
            v20 = (__int64 *)(i + 440);
            v21 = a2;
            HMAssignmentLock(&v20, 0);
            *(_WORD *)(*(_QWORD *)(i + 480) + 152LL) = *(_WORD *)(a2 + 72);
            *(_QWORD *)(*(_QWORD *)(i + 480) + 144LL) = *(_QWORD *)(a2 + 40);
            v14 = 1LL;
          }
        }
        v13 = (_DWORD)v14 == 0;
      }
      if ( v13 )
        goto LABEL_47;
    }
    else
    {
      if ( (*(_DWORD *)gpsi & 4) != 0 )
      {
        ApiSetEditionImmActivateLayout(v8, a2);
      }
      else
      {
        v20 = v9;
        v21 = a2;
        HMAssignmentLock(&v20, 0);
      }
      if ( (*((_DWORD *)v8 + 122) & 1) == 0 )
      {
        *(_WORD *)(*((_QWORD *)v8 + 60) + 152LL) = *(_WORD *)(a2 + 72);
        *(_QWORD *)(*((_QWORD *)v8 + 60) + 144LL) = *(_QWORD *)(a2 + 40);
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 53) == *((_QWORD *)v8 + 53)
      || (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() && (unsigned __int8)IsKeyboardDelegationTarget(v8) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
      xxxWindowEvent(-2147483647, 0, *(_DWORD *)(a2 + 40), 0, 0);
      ApiSetEditionNotifyShellLanguageHook(v8, *(_QWORD *)(a2 + 40), 1LL);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
    }
    v16 = *((_QWORD *)v8 + 54);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 120);
      if ( v17 )
        goto LABEL_41;
      v17 = *(_QWORD *)(v16 + 128);
      if ( !v17 )
        v17 = a4;
      if ( v17 )
LABEL_41:
        ApiSetEditionSendIMENotification((_DWORD)v8, v17, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    v12 = *((_QWORD *)v8 + 98);
    if ( v12 )
    {
      if ( (*((_DWORD *)v8 + 122) & 8) == 0 )
      {
        v14 = 57344LL;
        if ( (*(_WORD *)(a2 + 42) & 0xF000) == 0xE000 || (a3 = *(unsigned int *)gpsi, (a3 & 4) != 0) )
          ApiSetEditionSendIMENotification((_DWORD)v8, v12, 647, 31, v7);
      }
    }
LABEL_47:
    ThreadUnlock1(v14, v12, a3, a4);
  }
  return v19;
}
