/*
 * XREFs of _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x1C009BA28
 * Callers:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C009B94C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C0220E14 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 * Callees:
 *     ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x1C023D1DC (-SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ.c)
 */

struct tagWND *__fastcall anonymous_namespace_::ResolveWindowManagementTargetWindow(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  MOVESIZEDATA *v4; // rcx

  v1 = 0LL;
  v2 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v2 || !*(_QWORD *)(v2 + 280) )
    return 0LL;
  if ( !a1 )
    return *(struct tagWND **)(v2 + 320);
  if ( a1 == 1 )
  {
    v4 = *(MOVESIZEDATA **)(gptiCurrent + 672LL);
    if ( v4 )
      return MOVESIZEDATA::SHData_GetCustomDockTargetWindow(v4);
  }
  return (struct tagWND *)v1;
}
