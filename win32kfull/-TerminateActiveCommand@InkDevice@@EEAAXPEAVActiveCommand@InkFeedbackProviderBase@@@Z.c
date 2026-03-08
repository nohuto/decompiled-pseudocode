/*
 * XREFs of ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C0247460
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0228D08 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C024635C (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 */

void __fastcall InkDevice::TerminateActiveCommand(
        InkDevice *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+40h] [rbp+8h] BYREF
  const char *v5; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_BYTE *)this - 20) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
    {
      v4 = *((_DWORD *)a2 + 5);
      InkDevice::DoSuperWetInkStop((InkDevice *)((char *)this - 32), (const struct IFC_SUPERWET_INK_STOP_DATA *)&v4);
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    v4 = -1073741823;
    v5 = "Device not opened";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (__int64)&dword_1C03570E0,
      byte_1C031EF8B,
      a3,
      a4,
      (__int64)&v4,
      (void **)&v5);
  }
}
