/*
 * XREFs of PnpSurpriseFailUnsafeDmaDevices @ 0x140968A40
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1408729DC (PnpSynchronizeDeviceEventQueue.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140954B3C (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140968304 (PipDmgEnforceEnumerationPolicy.c)
 *     PiCslIsConsoleLocked @ 0x1409695FC (PiCslIsConsoleLocked.c)
 *     PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14096BFB4 (PiIommuIsDeviceSafeWhileConsoleLocked.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA2FFC (PoDelistPowerStateTransitionBlocker.c)
 */

void PnpSurpriseFailUnsafeDmaDevices()
{
  int v0; // ebx
  __int64 v1; // rdx
  char v2; // di
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rax
  int v7; // ebx

  if ( PipDmaGuardPolicy == 2 && (unsigned __int8)PiCslIsConsoleLocked() )
  {
    v0 = PnpPowerStateTransitionWatchdogPushRecord();
    PpDevNodeLockTree(1);
    if ( v0 >= 0 )
      PoDelistPowerStateTransitionBlocker();
    v2 = 0;
    if ( IopRootDeviceNode )
    {
      v3 = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1);
LABEL_20:
      if ( !v3 )
        goto LABEL_21;
      while ( 1 )
      {
        v4 = v3[90];
        if ( v4 && (*(_BYTE *)(v4 + 16) & 2) != 0 && !(unsigned __int8)PiIommuIsDeviceSafeWhileConsoleLocked(v4, v1) )
        {
          PipDmgEnforceEnumerationPolicy((ULONG_PTR)v3, v1, v5);
          v2 = 1;
        }
        else
        {
          v6 = (_QWORD *)v3[1];
          if ( v6 )
            goto LABEL_17;
        }
        v6 = (_QWORD *)*v3;
        if ( !*v3 )
        {
          if ( v3 == IopRootDeviceNode )
            break;
          while ( 1 )
          {
            v3 = (_QWORD *)v3[2];
            if ( *v3 )
              break;
            if ( v3 == IopRootDeviceNode )
              goto LABEL_19;
          }
          v3 = (_QWORD *)*v3;
LABEL_19:
          if ( v3 == IopRootDeviceNode )
            break;
          goto LABEL_20;
        }
LABEL_17:
        v3 = v6;
      }
    }
LABEL_21:
    PpDevNodeUnlockTree(1);
    if ( v2 )
    {
      v7 = PnpPowerStateTransitionWatchdogPushRecord();
      PnpSynchronizeDeviceEventQueue();
      if ( v7 >= 0 )
        PoDelistPowerStateTransitionBlocker();
    }
  }
}
