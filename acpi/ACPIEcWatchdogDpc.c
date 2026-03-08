/*
 * XREFs of ACPIEcWatchdogDpc @ 0x1C0025D70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIEcLogAction @ 0x1C0002D3C (ACPIEcLogAction.c)
 *     ACPIEcLogError @ 0x1C0025B98 (ACPIEcLogError.c)
 *     ACPIEcServiceDevice @ 0x1C0025C50 (ACPIEcServiceDevice.c)
 */

void __fastcall ACPIEcWatchdogDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // al
  char v6; // bp
  KIRQL v7; // bl
  char v8; // al
  KIRQL v9; // al
  KIRQL v10; // bl
  KIRQL v11; // bl
  KIRQL v12; // al

  v5 = __inbyte(*((_QWORD *)DeferredContext + 4));
  v6 = v5;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 11);
  ACPIEcLogAction((__int64)DeferredContext, 0x10u, v6);
  KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v7);
  v8 = DeferredContext[504];
  if ( v8 != -1 )
    DeferredContext[504] = ++v8;
  if ( (unsigned __int8)v8 <= 5u )
    ACPIEcLogError((__int64)DeferredContext, -1073414131);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 11);
  v10 = v9;
  if ( DeferredContext[456] )
  {
    KeSetTimer((PKTIMER)(DeferredContext + 520), ACPIEcWatchdogTimeout, (PKDPC)(DeferredContext + 584));
    KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v10);
    return;
  }
  DeferredContext[456] = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v9);
  switch ( DeferredContext[488] )
  {
    case 1:
      goto LABEL_18;
    case 2:
      if ( (v6 & 1) == 0 )
        DeferredContext[488] = 0;
      break;
    case 3:
LABEL_18:
      if ( (v6 & 1) != 0 )
        break;
      if ( DeferredContext[488] != 1 )
      {
LABEL_21:
        DeferredContext[488] = 5;
        break;
      }
LABEL_20:
      --*((_QWORD *)DeferredContext + 62);
      --DeferredContext[491];
      ++*((_WORD *)DeferredContext + 247);
      goto LABEL_21;
    case 4:
      goto LABEL_20;
    case 5:
      if ( (v6 & 2) != 0 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 11);
        ACPIEcLogAction((__int64)DeferredContext, 0x30u, 131);
        KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v11);
        __outbyte(*((_QWORD *)DeferredContext + 5), 0x83u);
      }
      break;
    case 6:
      goto LABEL_20;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 11);
  DeferredContext[456] = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 11, v12);
  KeSetTimer((PKTIMER)(DeferredContext + 520), ACPIEcWatchdogTimeout, (PKDPC)(DeferredContext + 584));
  ACPIEcServiceDevice((__int64)DeferredContext);
}
