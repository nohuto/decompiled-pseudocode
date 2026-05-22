/*
 * XREFs of ?ManualDragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FA284
 * Callers:
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z @ 0x1800FB858 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoDragAreaClientProxy@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028B34 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029560 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333@Z @ 0x1800F6770 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 */

char __fastcall InputETW::DragNDrop::ManualDragStarted(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // r14
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+78h] [rbp-9h] BYREF
  __int64 v16; // [rsp+80h] [rbp-1h] BYREF
  __int64 v17; // [rsp+88h] [rbp+7h] BYREF
  __int64 v18; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+98h] [rbp+17h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+B8h] [rbp+37h] BYREF

  v7 = (unsigned int)a1;
  LOBYTE(v10) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v10 )
  {
    v10 = wil::details::static_lazy<InputETW>::get(
            v11,
            _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v10[1] > 5u )
    {
      LOBYTE(v10) = tlgKeywordOn(v10[1], 1LL);
      if ( (_BYTE)v10 )
      {
        v15 = a6;
        v16 = a5;
        v17 = a4[1];
        v18 = *a4;
        v19 = a3[1];
        v20 = *a3;
        v21 = a2[1];
        v22 = *a2;
        v23 = v7;
        LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                        v13,
                        byte_1801CE725,
                        v12,
                        v13,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17,
                        (__int64)&v16,
                        (__int64)&v15);
      }
    }
  }
  return (char)v10;
}
