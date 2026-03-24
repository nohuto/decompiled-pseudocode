/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C000AE40
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C000A6FC (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 *     NVMePowerInitialize @ 0x1C000FEB4 (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 1624);
  StorPortExtendedFunction(55LL, a1, 0LL, &unk_1C001F518);
  if ( *(_DWORD *)(v1 + 516) )
  {
    if ( !(unsigned __int8)NVMeControllerInitPart2(a1) )
    {
LABEL_5:
      NVMeControllerStartFailureEventLog(a1);
      return 0;
    }
    StorPortExtendedFunction(
      84LL,
      a1,
      *(unsigned __int16 *)(a1 + 286) * (unsigned int)*(unsigned __int16 *)(a1 + 288),
      *(unsigned __int16 *)(a1 + 286) * (unsigned int)*(unsigned __int16 *)(a1 + 288));
  }
  if ( !(unsigned __int8)NVMeControllerInitPart3(a1) )
    goto LABEL_5;
  NVMePowerInitialize(a1);
  return 1;
}
