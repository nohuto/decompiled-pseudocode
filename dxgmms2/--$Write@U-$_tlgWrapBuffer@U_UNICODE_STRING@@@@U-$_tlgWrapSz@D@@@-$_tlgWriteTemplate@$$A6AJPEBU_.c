/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0030180
 * Callers:
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00F4E6C (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00149E0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        unsigned __int16 **a5,
        void **a6)
{
  _BYTE *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-19h] BYREF
  _DWORD *v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+58h] [rbp+Fh]
  __int64 v14; // [rsp+60h] [rbp+17h]
  _DWORD v15[2]; // [rsp+68h] [rbp+1Fh] BYREF
  _BYTE *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]

  v6 = *a6;
  if ( *a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v6 = &unk_1C00627B9;
    v8 = 1;
  }
  v17 = v8;
  v12 = v15;
  v16 = v6;
  v18 = 0;
  v13 = 2LL;
  v9 = **a5;
  v14 = *((_QWORD *)*a5 + 1);
  v15[0] = v9;
  v15[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0076048, a2, a3, 0LL, 5u, &v11);
}
