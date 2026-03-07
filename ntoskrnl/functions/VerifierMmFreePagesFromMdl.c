__int64 __fastcall VerifierMmFreePagesFromMdl(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned int)MmVerifierData >> 17;
  LOBYTE(v2) = (MmVerifierData & 0x20000) != 0;
  ViMmValidateIrql(v2);
  v5 = -(__int64)*(unsigned int *)(a1 + 40);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 232LL, 0xF0u, v5);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned __int64))pXdvMmFreePagesFromMdl)(a1, v3, v4, v5);
}
