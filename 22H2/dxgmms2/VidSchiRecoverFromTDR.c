/*
 * XREFs of VidSchiRecoverFromTDR @ 0x1C00D307C
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008E0A0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0026B90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@35@Z @ 0x1C003C39C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@.c)
 */

void __fastcall VidSchiRecoverFromTDR(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _TDR_RECOVERY_CONTEXT *v6; // rcx
  __int64 v7[3]; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int16 *v11; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0050048 > 5 && tlgKeywordOn((__int64)&dword_1C0050048, 0x400000000010LL) )
  {
    v2 = *(_QWORD *)(a1 + 2920);
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(unsigned int *)(v2 + 16);
    v5 = *(_QWORD *)(v3 + 316);
    v8 = *(_DWORD *)(a1 + 2936);
    v10 = v2;
    v9 = v4;
    v11 = *(unsigned __int16 **)(v3 + 1520);
    v7[0] = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v3,
      byte_1C0044189,
      v4,
      v5,
      (__int64)v7,
      &v11,
      (__int64)&v9,
      (__int64)&v10,
      (__int64)&v8);
  }
  v6 = *(struct _TDR_RECOVERY_CONTEXT **)(a1 + 2920);
  *(_DWORD *)(a1 + 2916) = 2;
  TdrResetFromTimeoutAsync(v6);
}
