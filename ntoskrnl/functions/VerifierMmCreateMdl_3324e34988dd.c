__int64 __fastcall VerifierMmCreateMdl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8

  if ( !a1 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvMmCreateMdl)(a1, a2, a3);
  v8 = v7;
  if ( KeGetCurrentIrql() <= 2u )
  {
    v9 = 48LL;
    if ( v7 )
      v9 = *(__int16 *)(v7 + 8);
    ViPtLogStackTrace(v7, 1818520918, v9, 0);
  }
  return v8;
}
