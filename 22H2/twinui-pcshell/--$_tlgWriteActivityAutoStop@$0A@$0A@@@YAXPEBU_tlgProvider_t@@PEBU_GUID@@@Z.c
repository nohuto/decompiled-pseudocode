/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0A@$0A@@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802261D8
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$0A@@@IEAA@XZ @ 0x180226798 (--1-$_TlgActivityBase@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProvid.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteActivityAutoStop<0,0>(_DWORD *a1, const GUID *a2)
{
  ULONG result; // eax
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  if ( *a1 )
    return tlgWriteTransfer_EventWriteTransfer((__int64)a1, (unsigned __int8 *)dword_180576EA4, a2, 0LL, 2u, &v3);
  return result;
}
