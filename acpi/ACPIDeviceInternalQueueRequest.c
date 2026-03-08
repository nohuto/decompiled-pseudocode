/*
 * XREFs of ACPIDeviceInternalQueueRequest @ 0x1C001D4A0
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C001CF98 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C001E0B8 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0022714 (ACPIPowerScheduleDpc.c)
 */

_QWORD *__fastcall ACPIDeviceInternalQueueRequest(__int64 a1, _QWORD *a2, __int16 a3)
{
  char v3; // r9
  _QWORD *result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // rdx

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    result = (_QWORD *)AcpiPowerSynchronizeList;
    if ( *(__int64 **)(AcpiPowerSynchronizeList + 8) == &AcpiPowerSynchronizeList )
    {
      *a2 = AcpiPowerSynchronizeList;
      a2[1] = &AcpiPowerSynchronizeList;
      result[1] = a2;
      AcpiPowerSynchronizeList = (__int64)a2;
      goto LABEL_14;
    }
LABEL_12:
    __fastfail(3u);
  }
  result = (_QWORD *)(a1 + 584);
  v5 = a2 + 2;
  if ( (_QWORD *)*result == result )
  {
    v6 = (_QWORD *)result[1];
    if ( (_QWORD *)*v6 != result )
      goto LABEL_12;
    *v5 = result;
    a2[3] = v6;
    *v6 = v5;
    result[1] = v5;
    if ( (v3 & 1) != 0 )
    {
      result = (_QWORD *)qword_1C006F198;
      if ( *(__int64 **)qword_1C006F198 != &AcpiPowerDelayedQueueList )
        goto LABEL_12;
      *a2 = &AcpiPowerDelayedQueueList;
      a2[1] = result;
      *result = a2;
      qword_1C006F198 = (__int64)a2;
    }
    else
    {
      result = (_QWORD *)qword_1C006F1A8;
      if ( *(__int64 **)qword_1C006F1A8 != &AcpiPowerQueueList )
        goto LABEL_12;
      *a2 = &AcpiPowerQueueList;
      a2[1] = result;
      *result = a2;
      qword_1C006F1A8 = (__int64)a2;
    }
  }
  else
  {
    v7 = (_QWORD *)result[1];
    if ( (_QWORD *)*v7 != result )
      goto LABEL_12;
    *v5 = result;
    v5[1] = v7;
    *v7 = v5;
    result[1] = v5;
  }
LABEL_14:
  AcpiPowerDpcFlags |= 2u;
  if ( (v3 & 1) == 0 )
    return (_QWORD *)ACPIPowerScheduleDpc();
  return result;
}
