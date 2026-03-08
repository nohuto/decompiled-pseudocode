/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x1C0016690
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C00166F8 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx

  UserSessionSwitchEnterCrit();
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    UserSetLastError(87LL);
    v3 = 0LL;
  }
  else
  {
    *(_DWORD *)(v2 + 904) = a1;
    if ( CRotationMgr::IsActivePpi((struct tagPROCESSINFO *)v2) )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
    v3 = 1LL;
  }
  LeaveCrit();
  return v3;
}
