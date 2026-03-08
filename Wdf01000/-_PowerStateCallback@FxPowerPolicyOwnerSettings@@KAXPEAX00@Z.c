/*
 * XREFs of ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1C007E400
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0075808 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::_PowerStateCallback(void *Context, void *Argument1, void *Argument2)
{
  FxPkgPnp *v5; // rcx
  _KEVENT *v6; // rcx

  if ( Argument1 == (void *)3 )
  {
    FxWaitLockInternal::AcquireLock(
      (FxWaitLockInternal *)(*((_QWORD *)Context + 78) + 736LL),
      (_FX_DRIVER_GLOBALS *)3,
      0LL);
    if ( Argument2 )
    {
      if ( Argument2 == (void *)1 )
      {
        v5 = (FxPkgPnp *)*((_QWORD *)Context + 78);
        *((_BYTE *)Context + 918) = 1;
        FxPkgPnp::SaveState(v5, 1u);
      }
    }
    else
    {
      FxPkgPnp::SaveState(*((FxPkgPnp **)Context + 78), 1u);
      *((_BYTE *)Context + 918) = 0;
    }
    v6 = (_KEVENT *)(*((_QWORD *)Context + 78) + 736LL);
    v6[1].Header.WaitListHead.Flink = 0LL;
    KeSetEvent(v6, 0, 0);
    KeLeaveCriticalRegion();
  }
}
