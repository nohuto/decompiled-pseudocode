/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0030238
 * Callers:
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1C00B534C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00F510C (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        unsigned __int16 **a5,
        void **a6,
        __int64 a7)
{
  _BYTE *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-31h] BYREF
  _DWORD *v13; // [rsp+50h] [rbp-11h]
  __int64 v14; // [rsp+58h] [rbp-9h]
  __int64 v15; // [rsp+60h] [rbp-1h]
  _DWORD v16[2]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE *v17; // [rsp+70h] [rbp+Fh]
  int v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+7Ch] [rbp+1Bh]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  __int64 v21; // [rsp+88h] [rbp+27h]

  v20 = a7;
  v21 = 8LL;
  v7 = *a6;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v7 = &unk_1C00627B9;
    v9 = 1;
  }
  v18 = v9;
  v13 = v16;
  v17 = v7;
  v19 = 0;
  v14 = 2LL;
  v10 = **a5;
  v15 = *((_QWORD *)*a5 + 1);
  v16[0] = v10;
  v16[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, a3, 0LL, 6u, &v12);
}
