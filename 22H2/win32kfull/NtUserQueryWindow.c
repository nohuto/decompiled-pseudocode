/*
 * XREFs of NtUserQueryWindow @ 0x1C0041510
 * Callers:
 *     <none>
 * Callees:
 *     ProcessHungWindow @ 0x1C00037AC (ProcessHungWindow.c)
 *     IsHungWindow @ 0x1C0041810 (IsHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ShouldProcessHungWindow @ 0x1C01273E4 (ShouldProcessHungWindow.c)
 */

__int64 __fastcall NtUserQueryWindow(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  HANDLE ThreadId; // rax
  __int64 v10; // rdi
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx

  EnterSharedCrit(0LL, 1LL);
  v4 = (_QWORD *)ValidateHwnd(a1);
  v6 = v4;
  if ( !v4 )
  {
LABEL_24:
    v10 = 0LL;
    goto LABEL_6;
  }
  v7 = v4[2];
  if ( a2 == 2 )
  {
    v8 = v4[5];
    if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 && *(char *)(v8 + 19) >= 0 )
    {
      v5 = *(_QWORD *)(v4[3] + 128LL);
      v10 = *(int *)(v5 + *(_QWORD *)(v8 + 296) + 4);
      goto LABEL_6;
    }
    ThreadId = PsGetThreadId(*(PETHREAD *)v7);
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v12 = v4[5];
    if ( (*(_DWORD *)(v12 + 232) & 0x800) != 0 && *(char *)(v12 + 19) >= 0 )
    {
      v5 = *(_QWORD *)(v4[3] + 128LL);
      v10 = *(int *)(v5 + *(_QWORD *)(v12 + 296));
      goto LABEL_6;
    }
LABEL_9:
    ThreadId = PsGetThreadProcessId(*(PETHREAD *)v7);
LABEL_5:
    v10 = (__int64)ThreadId;
    goto LABEL_6;
  }
  v5 = 0x1C0000000uLL;
  switch ( a2 )
  {
    case 1:
      goto LABEL_9;
    case 3:
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 432) + 120LL);
      if ( !v10 )
        goto LABEL_24;
      goto LABEL_16;
    case 4:
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 432) + 112LL);
      if ( !v10 )
        break;
      goto LABEL_16;
    case 5:
      v5 = *(_WORD *)(v4[5] + 42LL) & 0x2FFF;
      if ( (_DWORD)v5 == 682 )
      {
        v10 = 1LL;
      }
      else
      {
        v13 = IsHungWindow(v4);
        v10 = v13;
        if ( v13 )
        {
          v14 = (__int64 *)ShouldProcessHungWindow(v6);
          if ( v14 )
          {
            v15 = *v14;
            if ( gdwInAtomicOperation )
            {
              v5 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v5);
            EnterCrit(0LL, 1LL);
            if ( HMValidateHandleNoSecure(v15, 1LL) )
              ProcessHungWindow();
            UserSessionSwitchLeaveCrit(v16);
            EnterSharedCrit(0LL, 1LL);
          }
        }
      }
      break;
    case 7:
      v5 = gpqForeground;
      v10 = *(_QWORD *)(v7 + 432) == gpqForeground;
      break;
    case 8:
      v10 = *(_QWORD *)(v7 + 784);
      if ( !v10 )
        goto LABEL_24;
      goto LABEL_16;
    case 9:
      v10 = *(_QWORD *)(v7 + 792);
      if ( !v10 )
        goto LABEL_24;
LABEL_16:
      v10 = *(_QWORD *)v10;
      break;
    default:
      goto LABEL_24;
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v5);
  return v10;
}
