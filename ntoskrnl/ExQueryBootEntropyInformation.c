/*
 * XREFs of ExQueryBootEntropyInformation @ 0x14080F120
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1407A2BE0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall ExQueryBootEntropyInformation(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Parameter; // [rsp+30h] [rbp+8h] BYREF

  Parameter = a1;
  result = RtlRunOnceExecuteOnce(&ExpBootEntropyInit, ExpInitBootEntropyInformation, &Parameter, 0LL);
  if ( result >= 0 && Parameter != -1 )
    return -1073741823;
  return result;
}
