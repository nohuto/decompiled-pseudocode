/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C000A900
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C00090AC (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0009AD8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C000A840 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0008690 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0009F88 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C000BC28 (ApiSetEditionImmActivateLayout.c)
 *     ThreadUnlock1 @ 0x1C002F910 (ThreadUnlock1.c)
 *     HMLockObject @ 0x1C002FBE0 (HMLockObject.c)
 *     HMAssignmentLock @ 0x1C0031780 (HMAssignmentLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C01CBD54 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C01CDC7C (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rbx
  int v7; // r12d
  struct tagTHREADINFO *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rdx
  bool v17; // zf
  int v18; // edx
  __int64 v19; // [rsp+30h] [rbp-78h]
  _QWORD *v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  _QWORD v22[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = 0LL;
  v22[2] = 0LL;
  v7 = a3 & 0x100;
  v8 = gptiCurrent;
  v9 = (_QWORD *)((char *)gptiCurrent + 440);
  v10 = *((_QWORD *)gptiCurrent + 55);
  if ( v10 )
  {
    v19 = *(_QWORD *)(v10 + 40);
  }
  else
  {
    v10 = 0LL;
    v19 = 0LL;
  }
  if ( (a3 & 0x40000000) != 0 )
    gdwKeyboardAttributes = (a3 >> 15) & 2;
  if ( (a3 & 0x100) != 0 || a2 != *v9 )
  {
    *(_WORD *)(a2 + 74) = 0;
    v22[0] = *((_QWORD *)v8 + 52);
    *((_QWORD *)v8 + 52) = v22;
    v22[1] = v10;
    if ( v10 )
      HMLockObject(v10);
    if ( (*((_DWORD *)v8 + 122) & 8) != 0 )
    {
      v20 = v9;
      v21 = a2;
      HMAssignmentLock(&v20);
      *(_WORD *)(*((_QWORD *)v8 + 60) + 152LL) = *(_WORD *)(a2 + 72);
    }
    else if ( v7 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v8 + 53) + 320LL);
      v16 = *(unsigned int *)gpsi;
      if ( (v16 & 4) != 0 )
      {
        v17 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(*((_QWORD *)v8 + 53) + 320LL), v16, a2) == 0;
      }
      else
      {
        v18 = 0;
        while ( v15 )
        {
          if ( *(_QWORD *)(v15 + 440) != a2 && (*(_DWORD *)(v15 + 488) & 1) == 0 )
          {
            v20 = (_QWORD *)(v15 + 440);
            v21 = a2;
            HMAssignmentLock(&v20);
            *(_WORD *)(*(_QWORD *)(v15 + 480) + 152LL) = *(_WORD *)(a2 + 72);
            *(_QWORD *)(*(_QWORD *)(v15 + 480) + 144LL) = *(_QWORD *)(a2 + 40);
            v18 = 1;
          }
          v15 = *(_QWORD *)(v15 + 664);
        }
        v17 = v18 == 0;
      }
      if ( v17 )
        goto LABEL_26;
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
        HMAssignmentLock(&v20);
      }
      if ( (*((_DWORD *)v8 + 122) & 1) == 0 )
      {
        *(_WORD *)(*((_QWORD *)v8 + 60) + 152LL) = *(_WORD *)(a2 + 72);
        *(_QWORD *)(*((_QWORD *)v8 + 60) + 144LL) = *(_QWORD *)(a2 + 40);
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 53) == *((_QWORD *)v8 + 53) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
      if ( qword_1C0256128 )
        qword_1C0256128(2147483649LL, 0LL, *(unsigned int *)(a2 + 40), 0LL, 0);
      ApiSetEditionNotifyShellLanguageHook((__int64)v8, *(_QWORD *)(a2 + 40), 1u);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
    }
    v12 = *((_QWORD *)v8 + 54);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 112);
      if ( v13 )
        goto LABEL_44;
      v13 = *(_QWORD *)(v12 + 120);
      if ( !v13 )
        v13 = a4;
      if ( v13 )
LABEL_44:
        ApiSetEditionSendIMENotification((_DWORD)v8, v13, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    v14 = *((_QWORD *)v8 + 98);
    if ( v14
      && (*((_DWORD *)v8 + 122) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000 || (*(_DWORD *)gpsi & 4) != 0) )
    {
      LOBYTE(v6) = v7 != 0;
      ApiSetEditionSendIMENotification((_DWORD)v8, v14, 647, 31, v6);
    }
LABEL_26:
    ThreadUnlock1();
  }
  return v19;
}
