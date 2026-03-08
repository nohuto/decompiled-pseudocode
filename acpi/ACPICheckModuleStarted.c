/*
 * XREFs of ACPICheckModuleStarted @ 0x1C00324D8
 * Callers:
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C0017220 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1C003A1C0 (ACPIProcessorStartDeviceWorker.c)
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C002E560 (ACPIInternalEvaluateOST.c)
 */

void __fastcall ACPICheckModuleStarted(__int64 a1, int a2)
{
  KIRQL v4; // al
  KIRQL v5; // r8
  char v6; // bl
  _QWORD *i; // rcx
  __int64 v8; // rax

  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = v4;
    if ( *(_BYTE *)(a1 + 185) )
      break;
    v6 = 1;
    if ( a2 >= 0 )
    {
      for ( i = *(_QWORD **)(a1 + 800); i != (_QWORD *)(a1 + 800); i = (_QWORD *)*i )
      {
        v8 = *(i - 101);
        if ( (v8 & 0x2000000000LL) != 0 && !*((_BYTE *)i - 631)
          || (v8 & 0x100) == 0 && (unsigned int)(*((_DWORD *)i - 112) - 2) > 1 )
        {
          v6 = 0;
          goto LABEL_11;
        }
      }
    }
    *(_BYTE *)(a1 + 185) = 1;
LABEL_11:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v6 )
    {
      ACPIInternalEvaluateOST((_QWORD *)a1, 0, (a2 >> 31) & 0xA3);
      a1 = *(_QWORD *)(a1 + 792);
      if ( _bittest64((const signed __int64 *)(a1 + 8), 0x25u) )
        continue;
    }
    return;
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
}
