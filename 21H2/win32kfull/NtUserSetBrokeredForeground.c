/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00F15F0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IsMessageOnlyWindow @ 0x1C00F1ED0 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  v3 = 0;
  if ( !a1 )
    goto LABEL_17;
  v4 = ValidateHwnd(a1);
  v5 = (_QWORD *)v4;
  if ( !v4
    || !IsTopLevelWindow(v4)
    || v5[15]
    || (unsigned int)IsWindowBeingDestroyed((__int64)v5)
    || (*(_BYTE *)(v5[5] + 31LL) & 0x10) != 0
    || (unsigned int)IsMessageOnlyWindow(v6)
    || GetProp((__int64)v5, WORD2(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 1u) )
  {
    goto LABEL_17;
  }
  v7 = *(_DWORD *)(v5[5] + 236LL);
  if ( v7 != 14 && v7 != 4 )
  {
    UserSetLastError(5LL, v2);
LABEL_17:
    v12 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) || gptiCurrent != v5[2] )
  {
    v12 = 5LL;
LABEL_18:
    UserSetLastError(v12, v2);
    goto LABEL_13;
  }
  v3 = InternalSetProp((__int64)v5, WORD2(WPP_MAIN_CB.Dpc.DpcListEntry.Next), gptiCurrent, 5u);
LABEL_13:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13, v8, v9);
  UserSessionSwitchLeaveCrit(v10);
  return v3;
}
