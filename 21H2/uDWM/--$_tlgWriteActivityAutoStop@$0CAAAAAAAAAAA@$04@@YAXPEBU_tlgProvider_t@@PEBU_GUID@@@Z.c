/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x18008E1F4
 * Callers:
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008E348 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_18008E348.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180005758 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteActivityAutoStop<35184372088832,5>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*(_QWORD *)(a1 + 16) & 0x200000000000LL) != 0 )
  {
    result = *(_QWORD *)(a1 + 24) & 0x200000000000LL;
    if ( result == *(_QWORD *)(a1 + 24) )
      return tlgWriteTransfer_EtwEventWriteTransfer(a1, byte_1800D0E03, a2, 0LL, 2, (__int64)v3);
  }
  return result;
}
