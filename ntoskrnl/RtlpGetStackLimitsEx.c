/*
 * XREFs of RtlpGetStackLimitsEx @ 0x1402E6750
 * Callers:
 *     RtlDispatchException @ 0x14027FA60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x140312A40 (KeQueryCurrentStackInformationEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpGetStackLimitsEx(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2[3]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(BugCheckParameter2[0]) = 0;
  result = KeQueryCurrentStackInformationEx(BugCheckParameter1, BugCheckParameter2, a2, a3);
  if ( !(_BYTE)result )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x1AAu, BugCheckParameter1, LODWORD(BugCheckParameter2[0]), a4, BugCheckParameter4);
    KeBugCheckEx(0x1ABu, BugCheckParameter1, LODWORD(BugCheckParameter2[0]), a4, 0LL);
  }
  return result;
}
