/*
 * XREFs of ??0?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@AEAA@$$QEAV?$function@$$A6AJPEAUD3D12Resources@CD3DDevice@@@Z@std@@@Z @ 0x180288DE8
 * Callers:
 *     CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x180288B2C (CAsyncTask_CD3DDevice--D3D12Resources_--Start__lambda_88358cf897930614284adb3422b4c545___.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncTask<CD3DDevice::D3D12Resources>::CAsyncTask<CD3DDevice::D3D12Resources>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 64) = (**v3)(v3, a1 + 8);
  *(_QWORD *)(a1 + 72) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 100) = 0;
  return result;
}
