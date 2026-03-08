/*
 * XREFs of ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C024635C
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0246E60 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C0247460 (-TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0244A40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0245E40 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStop(InkDevice *this, const struct IFC_SUPERWET_INK_STOP_DATA *a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v9; // [rsp+50h] [rbp-19h] BYREF
  int v10; // [rsp+54h] [rbp-15h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-11h] BYREF
  void *v12; // [rsp+60h] [rbp-9h] BYREF
  const char *v13; // [rsp+68h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+70h] [rbp+7h] BYREF
  int *v15; // [rsp+90h] [rbp+27h]
  int v16; // [rsp+98h] [rbp+2Fh]
  int v17; // [rsp+9Ch] [rbp+33h]

  v4 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 2u, (__int64)a2, 4u);
  v7 = v4;
  if ( v4 >= 0 )
  {
    if ( (unsigned int)dword_1C03570E0 > 4 )
    {
      v9 = *(_DWORD *)a2;
      v12 = (void *)*((_QWORD *)this + 10);
      v10 = 0;
      v13 = "Stopped super-wet ink";
      v11 = ((unsigned __int64)this + 32) & -(__int64)(this != 0LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v11,
        byte_1C031F64C,
        v5,
        v6,
        (__int64)&v10,
        (void **)&v13,
        &v12,
        (__int64)&v11,
        (__int64)&v9);
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v17 = 0;
    v9 = v4;
    v16 = 4;
    v15 = &v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v14);
  }
  return v7;
}
