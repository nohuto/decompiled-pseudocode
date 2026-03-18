/*
 * XREFs of _anonymous_namespace_::EligibleWindow @ 0x1C006A184
 * Callers:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0109B50 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0107F54 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsImmersiveApplicationBandId @ 0x1C0112D98 (IsImmersiveApplicationBandId.c)
 */

char __fastcall anonymous_namespace_::EligibleWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  struct tagWND *RootOwner; // rax

  v4 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( (_DWORD)v4 != 1 && !(unsigned int)IsImmersiveApplicationBandId(v4) )
    return 0;
  if ( !a2 || (unsigned __int8)IsTrayWindow(a1, 2LL) )
    return 1;
  if ( a2 != 2 )
    return 0;
  RootOwner = GetRootOwner(a1);
  if ( RootOwner == a1 )
    return 0;
  return IsTrayWindow(RootOwner, 2LL);
}
