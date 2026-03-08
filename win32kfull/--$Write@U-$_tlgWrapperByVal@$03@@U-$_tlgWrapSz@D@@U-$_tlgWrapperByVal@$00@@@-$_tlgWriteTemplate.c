/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0244C30
 * Callers:
 *     ?RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProviderBase@@01I@Z@Z @ 0x1C0245784 (-RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProv.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C024586C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0247670 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 a7)
{
  _BYTE *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h]
  __int64 v13; // [rsp+58h] [rbp-40h]
  _BYTE *v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+6Ch] [rbp-2Ch]
  __int64 v17; // [rsp+70h] [rbp-28h]
  __int64 v18; // [rsp+78h] [rbp-20h]

  v17 = a7;
  v18 = 1LL;
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
    v7 = &unk_1C03206E9;
    v9 = 1;
  }
  v15 = v9;
  v12 = a5;
  v14 = v7;
  v16 = 0;
  v13 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, a2, 0LL, 0LL, 5u, &v11);
}
