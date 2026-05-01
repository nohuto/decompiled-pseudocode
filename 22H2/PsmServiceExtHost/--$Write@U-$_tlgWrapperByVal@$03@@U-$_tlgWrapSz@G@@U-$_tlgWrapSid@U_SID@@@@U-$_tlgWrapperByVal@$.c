/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18007FC64
 * Callers:
 *     ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180027020 (-HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18002AAFC (-HampAppSaveTerminateReason@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 *a7,
        __int64 a8)
{
  int v9; // eax
  _WORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  _WORD *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  __int64 v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  __int64 v23; // [rsp+80h] [rbp+17h]
  __int64 v24; // [rsp+88h] [rbp+1Fh]

  v23 = a8;
  v24 = 8LL;
  v9 = *(unsigned __int8 *)(*a7 + 1);
  v20 = *a7;
  v22 = 0;
  v21 = 4 * v9 + 8;
  v10 = *a6;
  if ( *a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v10 = &unk_180095550;
    v12 = 2;
  }
  v15 = a5;
  v17 = v10;
  v18 = v12;
  v19 = 0;
  v16 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800B3218, a2, 0LL, 0LL, 6u, &v14);
}
