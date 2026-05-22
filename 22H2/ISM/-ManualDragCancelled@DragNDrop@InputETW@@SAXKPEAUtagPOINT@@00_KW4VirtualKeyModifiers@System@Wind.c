/*
 * XREFs of ?ManualDragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FA15C
 * Callers:
 *     ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVDragAreaClientProxy@@@Z @ 0x1800F8CCC (-CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVDragAreaClientProxy@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028B34 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029560 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333@Z @ 0x1800F6770 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 */

char __fastcall InputETW::DragNDrop::ManualDragCancelled(__int64 a1, int *a2, int *a3, int *a4, __int64 a5)
{
  __int64 v6; // r14
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // [rsp+78h] [rbp+7h] BYREF
  __int64 v16; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+17h] BYREF
  __int64 v18; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+98h] [rbp+27h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+A8h] [rbp+37h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+3Fh] BYREF

  v6 = (unsigned int)a1;
  LOBYTE(v9) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v9 )
  {
    v9 = wil::details::static_lazy<InputETW>::get(
           v10,
           _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v9[1] > 5u )
    {
      LOBYTE(v9) = tlgKeywordOn(v9[1], 1LL);
      if ( (_BYTE)v9 )
      {
        v13 = a4[1];
        a5 = 0LL;
        v15 = 0LL;
        v16 = v13;
        v17 = *a4;
        v18 = a3[1];
        v19 = *a3;
        v20 = a2[1];
        v21 = *a2;
        v22 = v6;
        LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                       v12,
                       byte_1801CE49E,
                       v11,
                       v12,
                       (__int64)&v22,
                       (__int64)&v21,
                       (__int64)&v20,
                       (__int64)&v19,
                       (__int64)&v18,
                       (__int64)&v17,
                       (__int64)&v16,
                       (__int64)&v15,
                       (__int64)&a5);
      }
    }
  }
  return (char)v9;
}
