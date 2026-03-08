/*
 * XREFs of _anonymous_namespace_::EligibleWindow @ 0x1C0097B28
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C002B660 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C0097B88 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C0220C70 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 * Callees:
 *     IsImmersiveApplicationBandId @ 0x1C0016E2C (IsImmersiveApplicationBandId.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022344 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 */

bool __fastcall anonymous_namespace_::EligibleWindow(struct tagWND *a1, int a2)
{
  int v4; // ecx
  struct tagWND *RootOwner; // rax

  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( v4 != 1 && !(unsigned int)IsImmersiveApplicationBandId(v4) )
    return 0;
  if ( !a2 || IsTrayWindow(a1, 2) )
    return 1;
  if ( a2 == 2 && (RootOwner = GetRootOwner(a1), RootOwner != a1) )
    return IsTrayWindow(RootOwner, 2);
  else
    return 0;
}
