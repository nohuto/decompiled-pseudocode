/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00F8DFC
 * Callers:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00F6CE8 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00F81C0 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        __int64 a8)
{
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  _BYTE *v13; // rdx
  int v14; // ecx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-19h]
  __int64 v18; // [rsp+58h] [rbp-11h]
  _BYTE *v19; // [rsp+60h] [rbp-9h]
  int v20; // [rsp+68h] [rbp-1h]
  int v21; // [rsp+6Ch] [rbp+3h]
  _BYTE *v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]
  __int64 v25; // [rsp+80h] [rbp+17h]
  __int64 v26; // [rsp+88h] [rbp+1Fh]

  v25 = a8;
  v9 = -1LL;
  v26 = 8LL;
  v10 = *a7;
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v10 = &unk_1C03206E9;
    v12 = 1;
  }
  v23 = v12;
  v22 = v10;
  v24 = 0;
  v13 = *a6;
  if ( *a6 )
  {
    do
      ++v9;
    while ( v13[v9] );
    v14 = v9 + 1;
  }
  else
  {
    v13 = &unk_1C03206E9;
    v14 = 1;
  }
  v17 = a5;
  v19 = v13;
  v20 = v14;
  v21 = 0;
  v18 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C03570E0, a2, 0, 0, 6u, &v16);
}
