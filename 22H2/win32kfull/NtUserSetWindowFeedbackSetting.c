/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C0038240
 * Callers:
 *     <none>
 * Callees:
 *     FeedbackSetWindowSetting @ 0x1C0038384 (FeedbackSetWindowSetting.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     FeedbackClearWindowSetting @ 0x1C01DAAB0 (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v8; // edi
  unsigned int v9; // r12d
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r15
  int v13; // eax
  __int64 v15; // rcx

  v8 = 0;
  v9 = 0;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  if ( !v12 )
    goto LABEL_14;
  if ( !a2 || a2 > 13 || a4 && !Address || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v15 = 87LL;
    goto LABEL_18;
  }
  if ( PsGetCurrentProcessWin32Process(v11) != *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL) )
  {
    UserSetLastError(5LL);
    v15 = 0LL;
LABEL_18:
    UserSetLastError(v15);
    goto LABEL_14;
  }
  if ( Address )
  {
    v10 = 0;
    ProbeForRead(Address, 4uLL, 4u);
    v9 = *Address;
  }
  if ( v10 )
    v13 = FeedbackClearWindowSetting(v12, (unsigned int)a2);
  else
    v13 = FeedbackSetWindowSetting(v12, (unsigned int)a2, v9);
  v8 = v13;
LABEL_14:
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
