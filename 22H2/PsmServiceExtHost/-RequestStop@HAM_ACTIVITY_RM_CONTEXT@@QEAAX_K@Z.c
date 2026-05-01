/*
 * XREFs of ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x180080514
 * Callers:
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800727C0 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002808 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@44@Z @ 0x1800802A0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U2@@-$_tl.c)
 */

void __fastcall HAM_ACTIVITY_RM_CONTEXT::RequestStop(HAM_ACTIVITY_RM_CONTEXT *this, __int64 a2)
{
  __int64 v4; // rsi
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  _BYTE v9[4]; // [rsp+50h] [rbp-58h] BYREF
  int v10; // [rsp+54h] [rbp-54h] BYREF
  __int64 v11; // [rsp+58h] [rbp-50h] BYREF
  __int64 v12; // [rsp+60h] [rbp-48h] BYREF
  __int64 v13; // [rsp+68h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+70h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_1800A19D5,
      0LL,
      0LL,
      2u,
      &v14);
  HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)this + 1) + 80LL), 0);
  v4 = *((_QWORD *)this + 2);
  if ( a2 == v4 )
  {
    HampActRequestStopEx(*((_QWORD *)this + 1), 1u, 1, 0, 6912, 0, 0LL);
    v5 = 0;
  }
  else
  {
    v5 = -1073740007;
  }
  HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)this + 1) + 80LL));
  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
    {
      v8 = *((_QWORD *)this + 1);
      v9[0] = *(_BYTE *)(v8 + 548);
      v11 = v4;
      v12 = a2;
      v13 = *(_QWORD *)(v8 + 40);
      v10 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        byte_1800A1A63,
        v6,
        v7,
        (__int64)&v10,
        (__int64)&v13,
        (__int64)v9,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
