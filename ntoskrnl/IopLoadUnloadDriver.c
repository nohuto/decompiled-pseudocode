/*
 * XREFs of IopLoadUnloadDriver @ 0x140780340
 * Callers:
 *     IopLoadDriverImage @ 0x1402EE2DC (IopLoadDriverImage.c)
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfDriverProcessUnload @ 0x1405CCA00 (VfDriverProcessUnload.c)
 *     DifIsPluginRunningWithoutReboot @ 0x1405D2A54 (DifIsPluginRunningWithoutReboot.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IopOpenRegistryKey @ 0x1407803E0 (IopOpenRegistryKey.c)
 *     IopCallDriverReinitializationRoutines @ 0x140780438 (IopCallDriverReinitializationRoutines.c)
 */

LONG __fastcall IopLoadUnloadDriver(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v2 = *(_QWORD *)(a1 + 56);
  Handle = 0LL;
  if ( v2 )
  {
    (*(void (**)(void))(v2 + 104))();
    if ( (unsigned int)VfIsVerifierEnabled() || DifIsPluginRunningWithoutReboot() )
      VfDriverProcessUnload(*(_QWORD *)(a1 + 56));
    v3 = 0;
  }
  else
  {
    v3 = IopOpenRegistryKey(&Handle, 0LL, *(_QWORD *)(a1 + 64), 131097LL, 0);
    if ( v3 >= 0 )
    {
      v3 = IopLoadDriver(Handle, 1, 0, &v5);
      if ( v3 == -1073740955 )
      {
        v3 = v5;
      }
      else if ( v3 == -1073740914 )
      {
        v3 = -1073741772;
      }
      IopCallDriverReinitializationRoutines(0LL);
    }
  }
  *(_DWORD *)(a1 + 72) = v3;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
