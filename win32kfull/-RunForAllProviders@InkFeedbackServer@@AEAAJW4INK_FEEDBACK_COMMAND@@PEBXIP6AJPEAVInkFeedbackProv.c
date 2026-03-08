/*
 * XREFs of ?RunForAllProviders@InkFeedbackServer@@AEAAJW4INK_FEEDBACK_COMMAND@@PEBXIP6AJPEAVInkFeedbackProviderBase@@01I@Z@Z @ 0x1C0245784
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0241300 (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0244C30 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate.c)
 */

__int64 __fastcall InkFeedbackServer::RunForAllProviders(
        _QWORD **a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int (__fastcall *a5)(_QWORD *, _QWORD, __int64, _QWORD))
{
  _QWORD *v5; // rbx
  unsigned int v6; // ebp
  int v11; // [rsp+40h] [rbp-28h] BYREF
  const char *v12; // [rsp+48h] [rbp-20h] BYREF
  char v13; // [rsp+70h] [rbp+8h] BYREF

  v5 = *a1;
  v6 = a4;
  if ( *a1 != a1 )
  {
    while ( a5(v5 - 1, a2, a3, v6) < 0 )
    {
      v5 = (_QWORD *)*v5;
      if ( v5 == a1 )
        goto LABEL_4;
    }
    return 0LL;
  }
LABEL_4:
  if ( a2 == 2 || a2 == 4 )
    return 0LL;
  if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v13 = a2;
    v12 = "Command not serviced";
    v11 = -1073741823;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
      (__int64)&v11,
      byte_1C031F4AD,
      a3,
      a4,
      (__int64)&v11,
      (void **)&v12,
      (__int64)&v13);
  }
  return 3221225473LL;
}
