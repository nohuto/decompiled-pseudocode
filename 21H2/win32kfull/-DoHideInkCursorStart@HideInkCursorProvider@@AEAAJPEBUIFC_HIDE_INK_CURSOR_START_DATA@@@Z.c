/*
 * XREFs of ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C0253ACC
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0254080 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01DA87C (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0253718 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStart(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_START_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  int v6; // eax
  const char *v8; // [rsp+50h] [rbp-18h] BYREF
  int v9; // [rsp+70h] [rbp+8h] BYREF
  const struct IFC_HIDE_INK_CURSOR_START_DATA *v10; // [rsp+78h] [rbp+10h] BYREF
  HideInkCursorProvider *v11; // [rsp+80h] [rbp+18h] BYREF
  void *v12; // [rsp+88h] [rbp+20h] BYREF

  v10 = a2;
  v4 = *((_DWORD *)this + 14);
  if ( !v4 )
  {
    Feedback::ForceHidePenCursor((Feedback *)1);
    v4 = *((_DWORD *)this + 14);
  }
  v6 = v4 + 1;
  *((_DWORD *)this + 14) = v6;
  if ( (unsigned int)dword_1C032B288 > 4 )
  {
    v9 = 0;
    LODWORD(v10) = v6;
    v12 = (void *)*((_QWORD *)this + 6);
    v8 = "Added hide cursor request";
    v11 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_1C02F45C2,
      a3,
      a4,
      (__int64)&v9,
      (void **)&v8,
      &v12,
      (__int64)&v11,
      (__int64)&v10);
  }
  return 0LL;
}
