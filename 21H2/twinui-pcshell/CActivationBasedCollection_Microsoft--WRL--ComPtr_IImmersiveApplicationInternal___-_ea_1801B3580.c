/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_d353c244007572bd2dd605324d11ed33___ @ 0x1801B3580
 * Callers:
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1801BBF30 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_d353c244007572bd2dd605324d11ed33___(
        __int64 a1,
        __int64 a2)
{
  _DWORD *result; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 i; // rbx
  __int64 v7; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v3; ++i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 320LL))(
           v7,
           *(_QWORD *)(a2 + 8),
           0LL) )
    {
      **(_DWORD **)a2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 16) + 64LL))(
                          *(_QWORD *)(a2 + 16),
                          v7);
    }
    result = *(_DWORD **)a2;
    if ( **(int **)a2 < 0 )
      break;
  }
  return result;
}
