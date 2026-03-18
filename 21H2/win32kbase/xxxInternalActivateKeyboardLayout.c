/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C004FB30
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C004E28C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C004FA80 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0030C00 (ThreadUnlock1.c)
 *     HMAssignmentLock @ 0x1C003A420 (HMAssignmentLock.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C004F120 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0051CD0 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C0051E58 (ApiSetEditionImmActivateLayout.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C0208408 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C020B5D8 (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  int v8; // r12d
  struct tagTHREADINFO *v9; // rsi
  __int64 *v10; // rdx
  __int64 v11; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdx
  bool v18; // zf
  int v19; // ecx
  __int64 i; // r14
  __int64 v21; // [rsp+30h] [rbp-78h]
  __int64 *v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h]
  _QWORD v24[4]; // [rsp+60h] [rbp-48h] BYREF

  v4 = a4;
  v7 = 0LL;
  v24[2] = 0LL;
  v8 = a3 & 0x100;
  v9 = gptiCurrent;
  v10 = (__int64 *)((char *)gptiCurrent + 440);
  v11 = *((_QWORD *)gptiCurrent + 55);
  if ( v11 )
  {
    v21 = *(_QWORD *)(v11 + 40);
  }
  else
  {
    v11 = 0LL;
    v21 = 0LL;
  }
  if ( (a3 & 0x40000000) != 0 )
    gdwKeyboardAttributes = (a3 >> 15) & 2;
  if ( (a3 & 0x100) != 0 || a2 != *v10 )
  {
    *(_WORD *)(a2 + 74) = 0;
    v24[0] = *((_QWORD *)v9 + 52);
    *((_QWORD *)v9 + 52) = v24;
    v24[1] = v11;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    if ( (*((_DWORD *)v9 + 122) & 8) != 0 )
    {
      v22 = v10;
      v23 = a2;
      HMAssignmentLock(&v22, 0LL);
      *(_WORD *)(*((_QWORD *)v9 + 60) + 152LL) = *(_WORD *)(a2 + 72);
    }
    else if ( (a3 & 0x100) != 0 )
    {
      v16 = *((_QWORD *)v9 + 53);
      v17 = *(unsigned int *)gpsi;
      if ( (v17 & 4) != 0 )
      {
        v18 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(v16 + 320), v17, a2) == 0;
      }
      else
      {
        v19 = 0;
        for ( i = *(_QWORD *)(v16 + 320); i; i = *(_QWORD *)(i + 664) )
        {
          if ( *(_QWORD *)(i + 440) != a2 && (*(_DWORD *)(i + 488) & 1) == 0 )
          {
            v22 = (__int64 *)(i + 440);
            v23 = a2;
            HMAssignmentLock(&v22, 0LL);
            *(_WORD *)(*(_QWORD *)(i + 480) + 152LL) = *(_WORD *)(a2 + 72);
            *(_QWORD *)(*(_QWORD *)(i + 480) + 144LL) = *(_QWORD *)(a2 + 40);
            v19 = 1;
          }
        }
        v18 = v19 == 0;
      }
      if ( v18 )
        goto LABEL_26;
      v4 = a4;
    }
    else
    {
      if ( (*(_DWORD *)gpsi & 4) != 0 )
      {
        ApiSetEditionImmActivateLayout(v9, a2);
      }
      else
      {
        v22 = v10;
        v23 = a2;
        HMAssignmentLock(&v22, 0LL);
      }
      if ( (*((_DWORD *)v9 + 122) & 1) == 0 )
      {
        *(_WORD *)(*((_QWORD *)v9 + 60) + 152LL) = *(_WORD *)(a2 + 72);
        *(_QWORD *)(*((_QWORD *)v9 + 60) + 144LL) = *(_QWORD *)(a2 + 40);
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 53) == *((_QWORD *)v9 + 53) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v11, (struct tagKL *)a2);
      if ( qword_1C029BE68 )
        qword_1C029BE68(2147483649LL, 0LL, *(unsigned int *)(a2 + 40), 0LL, 0);
      ApiSetEditionNotifyShellLanguageHook((__int64)v9, *(_QWORD *)(a2 + 40), 1LL);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v11, (struct tagKL *)a2);
    }
    v13 = *((_QWORD *)v9 + 54);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 112);
      if ( v14 )
        goto LABEL_44;
      v14 = *(_QWORD *)(v13 + 120);
      if ( !v14 )
        v14 = v4;
      if ( v14 )
LABEL_44:
        ApiSetEditionSendIMENotification((_DWORD)v9, v14, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    v15 = *((_QWORD *)v9 + 98);
    if ( v15
      && (*((_DWORD *)v9 + 122) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000 || (*(_DWORD *)gpsi & 4) != 0) )
    {
      LOBYTE(v7) = v8 != 0;
      ApiSetEditionSendIMENotification((_DWORD)v9, v15, 647, 31, v7);
    }
LABEL_26:
    ThreadUnlock1();
  }
  return v21;
}
