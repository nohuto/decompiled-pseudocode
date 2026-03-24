/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C012EDB0
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0192124 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  CTouchProcessor *v6; // rcx
  int PointerCursorId; // ebx
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  struct tagTHREADINFO *v10; // [rsp+60h] [rbp+18h]

  v9 = 0;
  v4 = EnterSharedCrit(0, 1);
  v10 = v4;
  if ( a1 && !HIWORD(a1) && a2 )
  {
    PointerCursorId = CTouchProcessor::GetPointerCursorId(v6, v4, a1, &v9);
    if ( PointerCursorId )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v9;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit();
  return PointerCursorId;
}
