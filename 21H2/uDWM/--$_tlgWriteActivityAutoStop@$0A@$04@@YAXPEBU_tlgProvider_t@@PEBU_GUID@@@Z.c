/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180094618
 * Callers:
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18002F350 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180005758 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteActivityAutoStop<0,5>(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 > 5u )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)a1, byte_1800D124E, a2, 0LL, 2, (__int64)v3);
  return result;
}
