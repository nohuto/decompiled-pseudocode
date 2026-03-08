/*
 * XREFs of ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180016EB0
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18003226C (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1801A343C (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 *     ?InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801ADF1C (-InputTransparencyEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1801AE0CC (-MarkForFurtherEvaluation@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800E9994 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444444444@Z @ 0x18019FF74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(const struct CInteraction *a1)
{
  int v1; // ebx
  int *v3; // rsi
  int *v4; // r14
  int *v5; // r15
  int *v6; // r12
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  int v16; // [rsp+C4h] [rbp-7Ch] BYREF
  int v17; // [rsp+C8h] [rbp-78h] BYREF
  int v18; // [rsp+CCh] [rbp-74h] BYREF
  int v19; // [rsp+D0h] [rbp-70h] BYREF
  int v20; // [rsp+D4h] [rbp-6Ch] BYREF
  int v21; // [rsp+D8h] [rbp-68h] BYREF
  int v22; // [rsp+DCh] [rbp-64h] BYREF
  int v23; // [rsp+E0h] [rbp-60h] BYREF
  int v24; // [rsp+E4h] [rbp-5Ch] BYREF
  int v25; // [rsp+E8h] [rbp-58h] BYREF
  int v26; // [rsp+ECh] [rbp-54h] BYREF
  int v27; // [rsp+F0h] [rbp-50h] BYREF
  int v28; // [rsp+F4h] [rbp-4Ch] BYREF
  int v29; // [rsp+F8h] [rbp-48h] BYREF
  const struct CInteraction *v30; // [rsp+100h] [rbp-40h] BYREF
  int v31; // [rsp+150h] [rbp+10h] BYREF
  int v32; // [rsp+158h] [rbp+18h] BYREF
  int v33; // [rsp+160h] [rbp+20h] BYREF
  int v34; // [rsp+168h] [rbp+28h] BYREF

  v1 = 0;
  if ( *((_DWORD *)a1 + 116) )
    v3 = (int *)*((_QWORD *)a1 + 55);
  else
    v3 = 0LL;
  if ( *((_DWORD *)a1 + 156) )
    v4 = (int *)*((_QWORD *)a1 + 75);
  else
    v4 = 0LL;
  if ( *((_DWORD *)a1 + 196) )
    v5 = (int *)*((_QWORD *)a1 + 95);
  else
    v5 = 0LL;
  if ( *((_DWORD *)a1 + 236) )
    v6 = (int *)*((_QWORD *)a1 + 115);
  else
    v6 = 0LL;
  anonymous_namespace_::GetTemporaryConfigWithMask((char *)a1 + 1624, &v32, &v31);
  v8 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                      v7,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v8 > 4u && (unsigned __int8)tlgKeywordOn(v8, 2048LL) )
  {
    v19 = v31;
    v20 = v32;
    v21 = *((_DWORD *)a1 + 248);
    if ( v6 )
    {
      v31 = v6[1];
      v32 = *v6;
      v12 = v6[2];
    }
    else
    {
      v31 = 0;
      v12 = 0;
      v32 = 0;
    }
    v22 = v12;
    v23 = *((_DWORD *)a1 + 236);
    if ( v5 )
    {
      v33 = v5[1];
      v34 = *v5;
      v13 = v5[2];
    }
    else
    {
      v33 = 0;
      v13 = 0;
      v34 = 0;
    }
    v24 = v13;
    v25 = *((_DWORD *)a1 + 196);
    if ( v4 )
    {
      v15 = v4[1];
      v16 = *v4;
      v14 = v4[2];
    }
    else
    {
      v15 = 0;
      v14 = 0;
      v16 = 0;
    }
    v26 = v14;
    v27 = *((_DWORD *)a1 + 156);
    if ( v3 )
    {
      v1 = v3[2];
      v17 = v3[1];
      v18 = *v3;
    }
    else
    {
      v17 = 0;
      v18 = 0;
    }
    v29 = *((_DWORD *)a1 + 116);
    v28 = v1;
    v30 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_18037AAEA,
      v10,
      v11,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
}
