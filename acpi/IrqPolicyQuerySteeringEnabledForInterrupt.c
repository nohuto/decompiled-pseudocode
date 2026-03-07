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
