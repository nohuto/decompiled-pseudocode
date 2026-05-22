/*
 * XREFs of ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B2044
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800B33A0 (std--_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE__ea_1800B33A0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008701C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA?AU_MIT_INPUT_INTEROP_MESSAGE@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800AF23C (-ConstructInputInteropMessageFromMouseInputMessageForWheel@@YA-AU_MIT_INPUT_INTEROP_MESSAGE@@AEB.c)
 *     ?ConstructInputNotificationFromMouseInputMessage@@YA?AU_InputMessageNotification@@AEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800AF358 (-ConstructInputNotificationFromMouseInputMessage@@YA-AU_InputMessageNotification@@AEBU_MIT_MOUSE.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800B0040 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B0730 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800B0B9C (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N2@Z @ 0x1800B14BC (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::ProcessMouseInputMessage(Win32kInterop *this, const struct _MIT_MOUSE_INPUT_MESSAGE *a2)
{
  unsigned int v4; // edi
  LPVOID v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // bl
  struct _MIT_MOUSE_INPUT_MESSAGE *v9; // rdx
  int v10; // eax
  _OWORD *v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  __int64 v15; // r9
  struct _MIT_MOUSE_INPUT_MESSAGE *v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h]
  int *v23; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall ***v24)(); // [rsp+90h] [rbp-70h]
  __int64 (__fastcall **v25)(); // [rsp+98h] [rbp-68h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall ***v27)(); // [rsp+D0h] [rbp-30h]
  _BYTE v28[312]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v29; // [rsp+210h] [rbp+110h] BYREF
  int *v30; // [rsp+220h] [rbp+120h]
  int v31[4]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v32; // [rsp+240h] [rbp+140h]
  int v33; // [rsp+248h] [rbp+148h]
  __int128 v34; // [rsp+288h] [rbp+188h]
  __int64 v35; // [rsp+298h] [rbp+198h]
  char v36; // [rsp+2ADh] [rbp+1ADh]
  char v37; // [rsp+2AEh] [rbp+1AEh]
  char v38; // [rsp+2B0h] [rbp+1B0h] BYREF
  _OWORD v39[15]; // [rsp+3E0h] [rbp+2E0h] BYREF

  v16 = a2;
  v4 = *(_DWORD *)a2;
  v5 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)this,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v5 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 512LL) )
  {
    v19 = *((unsigned int *)a2 + 48);
    *(_QWORD *)&v29 = *((_QWORD *)a2 + 5);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v6,
      byte_1801CB64A,
      v6,
      v7,
      (__int64)&v29,
      (__int64)&v19);
  }
  v8 = 1;
  if ( v4 )
  {
    if ( v4 != -1 && !Win32kInterop::IsDeviceAttached(this, v4, 1) )
    {
      InputTraceLogging::ISM::DropMouseInput(v16);
      return;
    }
  }
  else
  {
    v4 = -1;
  }
  memset_0(v31, 0, 0x1B0uLL);
  v33 = 432;
  v31[1] = v4;
  v31[0] = 4096;
  v9 = v16;
  v31[2] = *((_DWORD *)v16 + 8);
  v32 = *((_QWORD *)v16 + 5);
  v34 = *(_OWORD *)((char *)v16 + 8);
  v35 = *((_QWORD *)v16 + 3);
  v10 = *((_DWORD *)v16 + 19);
  if ( v10 == 1 || v10 == 2 )
  {
    v36 = 1;
    v10 = *((_DWORD *)v16 + 19);
  }
  if ( v10 == 3 )
  {
    v37 = 1;
    v11 = (_OWORD *)ConstructInputInteropMessageFromMouseInputMessageForWheel((__int64)v28, (__int64)v16);
    v12 = &v38;
    v13 = 2LL;
    do
    {
      *(_OWORD *)v12 = *v11;
      *((_OWORD *)v12 + 1) = v11[1];
      *((_OWORD *)v12 + 2) = v11[2];
      *((_OWORD *)v12 + 3) = v11[3];
      *((_OWORD *)v12 + 4) = v11[4];
      *((_OWORD *)v12 + 5) = v11[5];
      *((_OWORD *)v12 + 6) = v11[6];
      v12 += 128;
      *((_OWORD *)v12 - 1) = v11[7];
      v11 += 8;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v12 = *v11;
    *((_OWORD *)v12 + 1) = v11[1];
    *((_OWORD *)v12 + 2) = v11[2];
    v9 = v16;
  }
  v17 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)this + 6) + 88LL))(
    *((_QWORD *)this + 6),
    (__int64)v9 + 72,
    *((_QWORD *)this + 33),
    &v17);
  v20 = *((_QWORD *)v16 + 21);
  v18 = *((_DWORD *)v16 + 44);
  *(_QWORD *)&v29 = &v16;
  *((_QWORD *)&v29 + 1) = v31;
  v25 = off_1801B1618;
  v26 = v29;
  v27 = &v25;
  *(_QWORD *)&v29 = &v17;
  *((_QWORD *)&v29 + 1) = &v20;
  v30 = &v18;
  v21 = off_1801B15B8;
  v22 = v29;
  v23 = &v18;
  v24 = &v21;
  Win32kInterop::DeliverToContextualProcessing((__int64)this, v31, (__int64)&v21, (__int64)&v25);
  if ( !IsEdition(253345LL)
    || *((_DWORD *)v16 + 19) != 1
    || !*((_WORD *)v16 + 90) && !*((_WORD *)v16 + 91)
    || v17 == *((_QWORD *)this + 33) )
  {
    v8 = 0;
  }
  if ( *((_DWORD *)v16 + 19) == 2 || v8 )
  {
    v14 = (_OWORD *)ConstructInputNotificationFromMouseInputMessage((__int64)v28, (__int64 *)v16);
    v39[0] = *v14;
    v39[1] = v14[1];
    v39[2] = v14[2];
    v39[3] = v14[3];
    v39[4] = v14[4];
    v39[5] = v14[5];
    v39[6] = v14[6];
    v39[7] = v14[7];
    v14 += 8;
    v39[8] = *v14;
    v39[9] = v14[1];
    v39[10] = v14[2];
    v39[11] = v14[3];
    v39[12] = v14[4];
    v39[13] = v14[5];
    v39[14] = v14[6];
    LODWORD(v29) = 0;
    *((_QWORD *)&v29 + 1) = *(_QWORD *)(v15 + 48);
    Win32kInterop::ProcessInputMessage(
      this,
      (const struct Win32kInterop::InputMessageContext *)&v29,
      (const struct _InputMessageNotification *)v39,
      v8,
      *(_DWORD *)(v15 + 188) != 0);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
}
