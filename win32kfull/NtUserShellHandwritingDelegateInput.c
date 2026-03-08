/*
 * XREFs of NtUserShellHandwritingDelegateInput @ 0x1C01DEA30
 * Callers:
 *     <none>
 * Callees:
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00390F4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     Feature_AbydosInfra__private_IsEnabledDeviceUsage @ 0x1C012E8FC (Feature_AbydosInfra__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall NtUserShellHandwritingDelegateInput(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = 0LL;
  if ( !(unsigned int)Feature_AbydosInfra__private_IsEnabledDeviceUsage() )
  {
    UserSetLastError(50);
    return 0LL;
  }
  EnterCrit(0LL, 0LL);
  if ( !a1 )
    goto LABEL_18;
  v8 = PtiFromThreadId(a1);
  if ( !v8 || !gptiCurrent || gptiCurrent == v8 )
    goto LABEL_18;
  if ( *(_QWORD *)(gptiCurrent + 1336LL) == v8 && *(_QWORD *)(v8 + 1320) == a2 && *(_QWORD *)(v8 + 1312) == a3 )
  {
    v9 = 1242;
LABEL_19:
    UserSetLastError(v9);
    goto LABEL_20;
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(v8 + 424)
    || tagQ::AreMultipleThreadsAttached(*(tagQ **)(v8 + 432))
    || *(_QWORD *)(v12 + 456) != *(_QWORD *)(v11 + 456) )
  {
LABEL_18:
    v9 = 87;
    goto LABEL_19;
  }
  if ( *(_QWORD *)(v12 + 1320) || (*(_DWORD *)(v11 + 1272) & 0x2000) != 0 )
  {
    v9 = 5;
    goto LABEL_19;
  }
  *(_QWORD *)(v12 + 1336) = v11;
  v6 = 1LL;
  *(_DWORD *)(v12 + 1328) = 4096;
  *(_DWORD *)(v11 + 1276) |= 0x40u;
  *(_DWORD *)(v11 + 488) |= 0x40u;
  *(_QWORD *)(v11 + 1320) = a2;
  *(_QWORD *)(v11 + 1312) = a3;
LABEL_20:
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
