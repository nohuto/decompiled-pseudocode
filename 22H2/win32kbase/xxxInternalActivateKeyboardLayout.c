/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C006C200
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0064AFC (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00673D0 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0069C00 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0045EE0 (ThreadUnlock1.c)
 *     HMAssignmentLock @ 0x1C004FF50 (HMAssignmentLock.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0067D6C (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00B8300 (xxxChangeForegroundKeyboardTable.c)
 *     xxxWindowEvent @ 0x1C00C4C0C (xxxWindowEvent.c)
 *     IsKeyboardDelegationTarget @ 0x1C00D5590 (IsKeyboardDelegationTarget.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C0206788 (ApiSetEditionImmActivateLayout.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C02067D8 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C0207818 (ApiSetEditionSendIMENotification.c)
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
  int v14; // ecx
  __int64 i; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 *v21; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22; // [rsp+58h] [rbp-50h]
  _QWORD v23[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = 0LL;
  v23[2] = 0LL;
  v7 = a3 & 0x100;
  v8 = gptiCurrent;
  v9 = (__int64 *)((char *)gptiCurrent + 440);
  v10 = *((_QWORD *)gptiCurrent + 55);
  if ( v10 )
    v6 = *(_QWORD *)(v10 + 40);
  else
    v10 = 0LL;
  v20 = v6;
  if ( (a3 & 0x40000000) != 0 )
    *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13856) = ((unsigned int)a3 >> 15) & 2;
  if ( v7 || a2 != *v9 )
  {
    *(_WORD *)(a2 + 74) = 0;
    v23[0] = *((_QWORD *)v8 + 52);
    *((_QWORD *)v8 + 52) = v23;
    v23[1] = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( (*((_DWORD *)v8 + 122) & 8) != 0 )
    {
      v21 = v9;
      v22 = a2;
      HMAssignmentLock(&v21, 0);
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
        v14 = 0;
        for ( i = *(_QWORD *)(v11 + 320); i; i = *(_QWORD *)(i + 664) )
        {
          if ( *(_QWORD *)(i + 440) != a2 && (*(_DWORD *)(i + 488) & 1) == 0 )
          {
            v21 = (__int64 *)(i + 440);
            v22 = a2;
            HMAssignmentLock(&v21, 0);
            *(_WORD *)(*(_QWORD *)(i + 480) + 152LL) = *(_WORD *)(a2 + 72);
            *(_QWORD *)(*(_QWORD *)(i + 480) + 144LL) = *(_QWORD *)(a2 + 40);
            v14 = 1;
          }
        }
        v13 = v14 == 0;
      }
      if ( v13 )
        goto LABEL_46;
    }
    else
    {
      if ( (*(_DWORD *)gpsi & 4) != 0 )
      {
        ApiSetEditionImmActivateLayout(v8, a2);
      }
      else
      {
        v21 = v9;
        v22 = a2;
        HMAssignmentLock(&v21, 0);
      }
      if ( (*((_DWORD *)v8 + 122) & 1) == 0 )
      {
        *(_WORD *)(*((_QWORD *)v8 + 60) + 152LL) = *(_WORD *)(a2 + 72);
        *(_QWORD *)(*((_QWORD *)v8 + 60) + 144LL) = *(_QWORD *)(a2 + 40);
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 53) == *((_QWORD *)v8 + 53)
      || (unsigned __int8)IsKeyboardDelegationTarget(v8) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
      xxxWindowEvent(-2147483647, 0, *(_DWORD *)(a2 + 40), 0, 0);
      ApiSetEditionNotifyShellLanguageHook((__int64)v8, *(_QWORD *)(a2 + 40), 1u);
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
        goto LABEL_40;
      v17 = *(_QWORD *)(v16 + 128);
      if ( !v17 )
        v17 = a4;
      if ( v17 )
LABEL_40:
        ApiSetEditionSendIMENotification((_DWORD)v8, v17, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    v18 = *((_QWORD *)v8 + 98);
    if ( v18
      && (*((_DWORD *)v8 + 122) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000 || (*(_DWORD *)gpsi & 4) != 0) )
    {
      ApiSetEditionSendIMENotification((_DWORD)v8, v18, 647, 31, v7);
    }
LABEL_46:
    ThreadUnlock1();
  }
  return v20;
}
