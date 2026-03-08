/*
 * XREFs of SeCaptureSid @ 0x140710930
 * Callers:
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     NtCreateTokenEx @ 0x14070F880 (NtCreateTokenEx.c)
 *     AlpcpConnectPort @ 0x140712F5C (AlpcpConnectPort.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14071A42C (ExpWnfCaptureScopeInstanceId.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407569CC (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x140774850 (NtSecureConnectPort.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSid(char *Src, char a2, __int64 a3, __int64 a4, int a5, char a6, PSID *a7)
{
  __int64 v8; // rax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // ecx
  char *v12; // rdx
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  PSID v15; // rbx

  if ( a2 )
  {
    v8 = (__int64)(Src + 1);
    if ( (unsigned __int64)(Src + 1) >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(unsigned __int8 *)v8;
    LOBYTE(v10) = v9;
    v11 = 4 * v9 + 8;
    if ( 4 * v9 != -8 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = &Src[v11];
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    if ( !a6 )
    {
      *a7 = Src;
      return 0LL;
    }
    v10 = (unsigned __int8)Src[1];
    v11 = 4 * v10 + 8;
  }
  v13 = v11;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v11, 0x69536553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v13);
  *((_BYTE *)*a7 + 1) = v10;
  v15 = *a7;
  if ( RtlValidSid(*a7) )
    return 0LL;
  ExFreePoolWithTag(v15, 0);
  *a7 = 0LL;
  return 3221225592LL;
}
