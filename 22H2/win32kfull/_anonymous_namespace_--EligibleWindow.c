/*
 * XREFs of _anonymous_namespace_::EligibleWindow @ 0x1C00AE74C
 * Callers:
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C0026FA0 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C00AE708 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021E068 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 * Callees:
 *     IsImmersiveApplicationBandId @ 0x1C0017B3C (IsImmersiveApplicationBandId.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00952FC (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 */

char __fastcall anonymous_namespace_::EligibleWindow(struct tagWND *a1, int a2)
{
  int v4; // ecx
  struct tagWND *RootOwner; // rax

  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( v4 != 1 && !(unsigned int)IsImmersiveApplicationBandId(v4) )
    return 0;
  if ( !a2 || (unsigned __int8)IsTrayWindow(a1, 2LL) )
    return 1;
  if ( a2 == 2 && (RootOwner = GetRootOwner(a1), RootOwner != a1) )
    return IsTrayWindow(RootOwner, 2LL);
  else
    return 0;
}
