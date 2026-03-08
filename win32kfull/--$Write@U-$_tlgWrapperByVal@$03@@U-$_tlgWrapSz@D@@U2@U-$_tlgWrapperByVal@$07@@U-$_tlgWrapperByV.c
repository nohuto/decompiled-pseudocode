/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0244B38
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0245130 (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02452F0 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0246C50 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0246E60 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  _BYTE *v14; // rdx
  int v15; // ecx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-51h] BYREF
  __int64 v18; // [rsp+50h] [rbp-31h]
  __int64 v19; // [rsp+58h] [rbp-29h]
  _BYTE *v20; // [rsp+60h] [rbp-21h]
  int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+6Ch] [rbp-15h]
  _BYTE *v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  __int64 v28; // [rsp+90h] [rbp+Fh]
  __int64 v29; // [rsp+98h] [rbp+17h]

  v28 = a9;
  v10 = -1LL;
  v26 = a8;
  v29 = 1LL;
  v27 = 8LL;
  v11 = *a7;
  if ( *a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v11 = &unk_1C03206E9;
    v13 = 1;
  }
  v24 = v13;
  v23 = v11;
  v25 = 0;
  v14 = *a6;
  if ( *a6 )
  {
    do
      ++v10;
    while ( v14[v10] );
    v15 = v10 + 1;
  }
  else
  {
    v14 = &unk_1C03206E9;
    v15 = 1;
  }
  v18 = a5;
  v20 = v14;
  v21 = v15;
  v22 = 0;
  v19 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, a2, 0LL, 0LL, 7u, &v17);
}
