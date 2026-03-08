/*
 * XREFs of ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C0244DFC
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02452F0 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01AE6CC (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0244A40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStart(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_START_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // eax
  const char *v7; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+8h] BYREF
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v9; // [rsp+78h] [rbp+10h] BYREF
  HideInkCursorProvider *v10; // [rsp+80h] [rbp+18h] BYREF
  void *v11; // [rsp+88h] [rbp+20h] BYREF

  v9 = a2;
  if ( !*((_DWORD *)this + 14) )
    Feedback::ForceHidePenCursor((Feedback *)1);
  v5 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v5;
  if ( (unsigned int)dword_1C03570E0 > 4 )
  {
    v8 = 0;
    LODWORD(v9) = v5;
    v11 = (void *)*((_QWORD *)this + 6);
    v7 = "Added hide cursor request";
    v10 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_1C031F57A,
      a3,
      a4,
      (__int64)&v8,
      (void **)&v7,
      &v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  return 0LL;
}
