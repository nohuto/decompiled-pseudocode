/*
 * XREFs of ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x180074278
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180016010 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180074220 (-OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x180074334 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180045B70 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::QueueMessage(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v5; // rax
  _QWORD *v6; // rcx
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1 + 1312;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v5[4] = a2;
    v6 = *(_QWORD **)(v3 + 8);
    *((_QWORD *)v5 + 1) = v6;
    *(_QWORD *)v5 = v3;
    *v6 = v5;
    *(_QWORD *)(v3 + 8) = v5;
    ++*(_QWORD *)(v3 + 16);
  }
  result = SetEvent(*(HANDLE *)(a1 + 1304));
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_1800B31E0, 1LL);
    if ( result )
    {
      v11 = a1;
      v12 = a2;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v8,
               byte_18009D93D,
               v9,
               v10,
               (__int64)&v12,
               (__int64)&v11);
    }
  }
  return result;
}
