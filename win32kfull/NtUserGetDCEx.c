/*
 * XREFs of NtUserGetDCEx @ 0x1C00E06C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 DCEx; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx

  v3 = a3;
  EnterSharedCrit(a1, a2, a3);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2) || a2 == ghrgnGDC || (v3 & 0xFFDAF800) != 0 )
  {
    v14 = 87;
    goto LABEL_23;
  }
  if ( !a1 )
  {
    v11 = *((_QWORD *)PtiCurrentShared(v6) + 57);
    v8 = *(_QWORD **)(*(_QWORD *)(v11 + 8) + 24LL);
    if ( (*((_DWORD *)PtiCurrentShared(v11) + 122) & 0x20000000) == 0
      || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v12) + 53) + 760LL) + 24LL) & 1) == 0 )
    {
      goto LABEL_6;
    }
    v13 = v8 ? *v8 : 0LL;
    if ( ValidateHwnd(v13) )
      goto LABEL_6;
    v14 = 5;
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
  UserSessionSwitchLeaveCrit(v7);
  return DCEx;
}
