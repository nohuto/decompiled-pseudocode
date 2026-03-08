/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1C02522CC
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x1C0251D44 (WerKernelSubmitReportForHungProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _QWORD *a11)
{
  signed int v12; // eax
  NTSTATUS v13; // edi
  PVOID PoolWithTag; // rax
  void *v16; // rbx

  v12 = RtlLengthRequiredSid(1u);
  v13 = -1073741823;
  if ( a11 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v12, 0x7765726Bu);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      v13 = RtlInitializeSid(PoolWithTag, IdentifierAuthority, 1u);
      if ( v13 >= 0 )
      {
        v13 = 0;
        *RtlSubAuthoritySid(v16, 0) = 18;
      }
      else
      {
        DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR RtlInitializeSid failed\n", 258);
        ExFreePoolWithTag(v16, 0);
        v16 = 0LL;
      }
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR NtAllocateVirtualMemory failed\n", 250);
    }
    *a11 = v16;
    return (unsigned int)v13;
  }
  else
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Invalid params\n", 242);
    return 3221225485LL;
  }
}
