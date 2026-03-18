/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x1C009BCA0
 * Callers:
 *     <none>
 * Callees:
 *     _GetGUIThreadInfo @ 0x1C009BDD8 (_GetGUIThreadInfo.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int GUIThreadInfo; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD v16[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+90h] [rbp-18h]

  memset_0(v16, 0, 0x48uLL);
  EnterSharedCrit(v5, v4, v6);
  if ( a1 )
  {
    v7 = PtiFromThreadId(a1);
    if ( !v7 )
    {
      UserSetLastError(87LL);
      GUIThreadInfo = 0;
      goto LABEL_12;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( PsGetCurrentProcessWow64Process() )
    v8 = 0LL;
  else
    v8 = 3LL;
  if ( (v8 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[71] = v9[71];
  LODWORD(v16[0]) = *(_DWORD *)a2;
  GUIThreadInfo = GetGUIThreadInfo(v7, v16);
  if ( GUIThreadInfo )
  {
    *(_OWORD *)a2 = v16[0];
    *(_OWORD *)(a2 + 16) = v16[1];
    *(_OWORD *)(a2 + 32) = v16[2];
    *(_OWORD *)(a2 + 48) = v16[3];
    *(_QWORD *)(a2 + 64) = v17;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v11, v10, v13, v14);
  return GUIThreadInfo;
}
