/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x1C00E7600
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _GetGUIThreadInfo @ 0x1C00E7738 (_GetGUIThreadInfo.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // rcx
  int GUIThreadInfo; // ebx
  __int64 v14; // rdx
  _OWORD v15[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v15, 0, 0x48uLL);
  EnterSharedCrit(v5, v4, v6);
  if ( a1 )
  {
    v8 = PtiFromThreadId(a1);
    if ( !v8 )
    {
      UserSetLastError(87LL, v14);
      GUIThreadInfo = 0;
      goto LABEL_12;
    }
  }
  else
  {
    v8 = 0LL;
  }
  if ( PsGetCurrentProcessWow64Process(v7) )
    v9 = 0LL;
  else
    v9 = 3LL;
  if ( (v9 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[71] = v10[71];
  LODWORD(v15[0]) = *(_DWORD *)a2;
  GUIThreadInfo = GetGUIThreadInfo(v8, v15);
  if ( GUIThreadInfo )
  {
    *(_OWORD *)a2 = v15[0];
    *(_OWORD *)(a2 + 16) = v15[1];
    *(_OWORD *)(a2 + 32) = v15[2];
    *(_OWORD *)(a2 + 48) = v15[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v15[4];
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v11);
  return GUIThreadInfo;
}
