/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x1C00F9420
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _GetGUIThreadInfo @ 0x1C00F9564 (_GetGUIThreadInfo.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, ULONG64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  _OWORD v12[5]; // [rsp+50h] [rbp-58h] BYREF

  memset(v12, 0, 0x48uLL);
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v5 = PtiFromThreadId(a1);
    if ( !v5 )
    {
      UserSetLastError(87LL, v10, v11);
      goto LABEL_12;
    }
  }
  else
  {
    v5 = 0LL;
  }
  if ( PsGetCurrentProcessWow64Process(v4) )
    v6 = 0LL;
  else
    v6 = 3LL;
  if ( (v6 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v7[71] = v7[71];
  LODWORD(v12[0]) = *(_DWORD *)a2;
  LODWORD(v5) = GetGUIThreadInfo(v5, v12);
  if ( (_DWORD)v5 )
  {
    *(_OWORD *)a2 = v12[0];
    *(_OWORD *)(a2 + 16) = v12[1];
    *(_OWORD *)(a2 + 32) = v12[2];
    *(_OWORD *)(a2 + 48) = v12[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v12[4];
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v8);
  return (int)v5;
}
