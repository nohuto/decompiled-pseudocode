/*
 * XREFs of ?UnregisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x180005110
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ @ 0x1800051BC (-GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ.c)
 *     ?UpdateAutoForwardPolicy@ForegroundManager@@UEAAX_K0@Z @ 0x180013E60 (-UpdateAutoForwardPolicy@ForegroundManager@@UEAAX_K0@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x180104640 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall ForegroundManager::UnregisterActivationController(
        ForegroundManager *this,
        struct ActivationControllerBamoProxy *a2)
{
  char *v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 Cookie; // rbx
  __int64 *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  unsigned __int64 v13; // rax
  __int64 v14[7]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v2 = (char *)a2 + 8;
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  Cookie = ActivationControllerBamoProxy::GetCookie(a2);
  v7 = (__int64 *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 48LL))(v2);
  v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))(v2);
  v10 = wil::details::static_lazy<InputTraceLogging>::get(
          v9,
          _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v10 + 8) > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v10 + 8), 0x8000LL) )
  {
    v17 = *v7;
    v15 = v5;
    v16 = Cookie;
    v14[0] = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v11,
      (unsigned int)&unk_1801CECD7,
      v11,
      v12,
      (__int64)v14,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  if ( (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 56LL))(v2) )
  {
    v13 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))(v2);
    ForegroundManager::UpdateAutoForwardPolicy(this, v13, 0LL);
  }
}
