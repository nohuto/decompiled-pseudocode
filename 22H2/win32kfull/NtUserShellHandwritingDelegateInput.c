/*
 * XREFs of NtUserShellHandwritingDelegateInput @ 0x1C01DD9A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C01158D4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

__int64 __fastcall NtUserShellHandwritingDelegateInput(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( !a1 )
    goto LABEL_16;
  v7 = PtiFromThreadId(a1);
  if ( !v7 || !gptiCurrent || gptiCurrent == v7 )
    goto LABEL_16;
  if ( *(_QWORD *)(gptiCurrent + 1336LL) == v7 && *(_QWORD *)(v7 + 1320) == a2 && *(_QWORD *)(v7 + 1312) == a3 )
  {
    v8 = 1242;
LABEL_17:
    UserSetLastError(v8);
    goto LABEL_18;
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(v7 + 424)
    || tagQ::AreMultipleThreadsAttached(*(tagQ **)(v7 + 432))
    || *(_QWORD *)(v11 + 456) != *(_QWORD *)(v12 + 456) )
  {
LABEL_16:
    v8 = 87;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v11 + 1320) || (*(_DWORD *)(v12 + 1272) & 0x2000) != 0 )
  {
    v8 = 5;
    goto LABEL_17;
  }
  *(_QWORD *)(v11 + 1336) = v12;
  v6 = 1LL;
  *(_DWORD *)(v11 + 1328) = 4096;
  *(_DWORD *)(v12 + 1276) |= 0x40u;
  *(_DWORD *)(v12 + 488) |= 0x40u;
  *(_QWORD *)(v12 + 1320) = a2;
  *(_QWORD *)(v12 + 1312) = a3;
LABEL_18:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v6;
}
