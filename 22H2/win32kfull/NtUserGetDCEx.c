/*
 * XREFs of NtUserGetDCEx @ 0x1C00A9670
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 DCEx; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx

  v3 = a3;
  EnterSharedCrit(a1, a2, a3);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (v3 & 0xFFDAF800) != 0 )
  {
    v14 = 87LL;
    goto LABEL_23;
  }
  if ( !a1 )
  {
    v8 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 24LL);
    if ( (*((_DWORD *)PtiCurrentShared() + 122) & 0x20000000) == 0
      || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 53) + 760LL) + 24LL) & 1) == 0 )
    {
      goto LABEL_6;
    }
    v13 = v8 ? *v8 : 0LL;
    if ( ValidateHwnd(v13) )
      goto LABEL_6;
    v14 = 5LL;
LABEL_23:
    DCEx = 0LL;
    UserSetLastError(v14);
    goto LABEL_9;
  }
  v8 = (_QWORD *)ValidateHwnd(a1);
  if ( !v8 )
  {
    DCEx = 0LL;
    goto LABEL_9;
  }
LABEL_6:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v8, a2, v3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return DCEx;
}
