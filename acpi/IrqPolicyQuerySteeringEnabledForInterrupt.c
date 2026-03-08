/*
 * XREFs of IrqPolicyQuerySteeringEnabledForInterrupt @ 0x1C009FE48
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B5F0 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C009FDA4 (IrqPolicyQueryInterruptSteeringEnabled.c)
 */

char __fastcall IrqPolicyQuerySteeringEnabledForInterrupt(int a1, __int64 a2, char a3)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  if ( IrqMachinePolicy != 6 )
    return 0;
  BYTE7(v4) = 0;
  v5 = 0LL;
  LODWORD(v4) = a1;
  BYTE6(v4) = 1;
  BYTE4(v4) = (unsigned int)(a1 + 0x100000) > 0xFFFFE;
  BYTE5(v4) = a3;
  *((_QWORD *)&v4 + 1) = KeQueryGroupAffinity(0);
  return IrqPolicyQueryInterruptSteeringEnabled(&v4);
}
