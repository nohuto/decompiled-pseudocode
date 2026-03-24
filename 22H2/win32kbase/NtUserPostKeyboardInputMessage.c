/*
 * XREFs of NtUserPostKeyboardInputMessage @ 0x1C0132D80
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C004DA8C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     ApiSetEditionPostKeyboardInputMessage @ 0x1C01CD220 (ApiSetEditionPostKeyboardInputMessage.c)
 */

__int64 __fastcall NtUserPostKeyboardInputMessage(int a1, ULONG64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  BOOL v9; // edx
  int v11; // edx
  int v12; // r8d
  __int16 v13; // r9
  __int16 v14; // r10
  __int16 v15; // r11
  unsigned int v16; // ebx
  ULONG v17; // eax
  __int64 v18; // rdx
  __int128 v19; // [rsp+68h] [rbp-40h]
  int v20; // [rsp+78h] [rbp-30h]

  EnterCrit(0, 1);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
  v9 = 0;
  if ( CurrentProcess )
    v9 = CurrentProcess == g_pepDwm;
  if ( v9 )
  {
    if ( a2 + 20 < a2 || a2 + 20 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v19 = *(_OWORD *)a2;
    v20 = *(_DWORD *)(a2 + 16);
    LOBYTE(v11) = CKeyboardProcessor::HandleLeftRightVKs(*(_QWORD *)(a2 + 8));
    v16 = ApiSetEditionPostKeyboardInputMessage(a1, v11, v12, (unsigned __int16)v19, v15, v13, v20, v12, v14, a3);
    v17 = RtlNtStatusToDosError(v16);
    UserSetLastError(v17, v18);
    UserSessionSwitchLeaveCrit();
    return v16;
  }
  else
  {
    UserSessionSwitchLeaveCrit();
    return 3221225506LL;
  }
}
