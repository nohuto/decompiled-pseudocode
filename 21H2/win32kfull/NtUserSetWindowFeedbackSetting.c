/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C00809B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     FeedbackSetWindowSetting @ 0x1C0080B34 (FeedbackSetWindowSetting.c)
 *     FeedbackClearWindowSetting @ 0x1C01D5470 (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v9; // edi
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // eax
  __int64 v18; // rcx

  v9 = 0;
  v10 = 0;
  EnterCrit(0LL, 0LL);
  v13 = ValidateHwnd(a1);
  if ( !v13 )
    goto LABEL_15;
  if ( !a2 || a2 > 13 || a4 && !Address || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v18 = 87LL;
    goto LABEL_19;
  }
  if ( PsGetCurrentProcessWin32Process(v12) != *(_QWORD *)(*(_QWORD *)(v13 + 16) + 424LL) )
  {
    UserSetLastError(5LL, v14);
    v18 = 0LL;
LABEL_19:
    UserSetLastError(v18, v11);
    goto LABEL_15;
  }
  if ( Address )
  {
    v15 = 0;
    ProbeForRead(Address, 4uLL, 4u);
    v10 = *Address;
  }
  else
  {
    v15 = 1;
  }
  if ( v15 )
    v16 = FeedbackClearWindowSetting(v13, (unsigned int)a2);
  else
    v16 = FeedbackSetWindowSetting(v13, (unsigned int)a2, v10);
  v9 = v16;
LABEL_15:
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
