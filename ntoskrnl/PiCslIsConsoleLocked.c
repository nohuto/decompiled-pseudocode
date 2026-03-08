/*
 * XREFs of PiCslIsConsoleLocked @ 0x1409695FC
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140968304 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgReevaluateQueue @ 0x1409684CC (PipDmgReevaluateQueue.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140968A40 (PnpSurpriseFailUnsafeDmaDevices.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char PiCslIsConsoleLocked()
{
  char v0; // dl

  v0 = 0;
  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( !PipCslConsoleLockState )
    return 1;
  if ( PipCslConsoleLockState != 1 )
  {
    if ( PipCslConsoleLockState != 2 )
      __fastfail(5u);
    return 1;
  }
  return v0;
}
