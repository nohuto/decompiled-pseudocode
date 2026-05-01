/*
 * XREFs of ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x180268190
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x180267DB4 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     WINRT_HeapFree @ 0x180090C7A (WINRT_HeapFree.c)
 *     FormatMessageW_0 @ 0x180090CAA (FormatMessageW_0.c)
 *     GetProcessHeap_0 @ 0x180090D52 (GetProcessHeap_0.c)
 *     SysFreeString_0 @ 0x1800915D0 (SysFreeString_0.c)
 *     SysStringLen_0 @ 0x1800952B7 (SysStringLen_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1802682F8 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 */

__int64 __fastcall winrt::hresult_error::message(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  UINT v5; // eax
  BSTR v6; // rdx
  DWORD v7; // r8d
  DWORD v8; // eax
  void *v9; // rdi
  HANDLE ProcessHeap_0; // rax
  BSTR v12; // [rsp+40h] [rbp-10h] BYREF
  WCHAR Buffer[4]; // [rsp+48h] [rbp-8h] BYREF
  int v14; // [rsp+70h] [rbp+20h] BYREF
  BSTR pbstr; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+88h] [rbp+38h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v14 = 0;
    v12 = 0LL;
    pbstr = 0LL;
    bstrString = 0LL;
    if ( !(*(unsigned int (__fastcall **)(__int64, BSTR *, int *, BSTR *, BSTR *))(*(_QWORD *)v3 + 24LL))(
            v3,
            &v12,
            &v14,
            &pbstr,
            &bstrString)
      && v14 == *(_DWORD *)(a1 + 12) )
    {
      if ( pbstr )
      {
        v5 = SysStringLen_0(pbstr);
        v6 = pbstr;
      }
      else
      {
        v5 = SysStringLen_0(v12);
        v6 = v12;
      }
      winrt::impl::trim_hresult_message(a2, v6, v5);
      if ( bstrString )
      {
        SysFreeString_0(bstrString);
        bstrString = 0LL;
      }
      if ( pbstr )
      {
        SysFreeString_0(pbstr);
        pbstr = 0LL;
      }
      if ( v12 )
        SysFreeString_0(v12);
      return a2;
    }
    if ( bstrString )
    {
      SysFreeString_0(bstrString);
      bstrString = 0LL;
    }
    if ( pbstr )
    {
      SysFreeString_0(pbstr);
      pbstr = 0LL;
    }
    if ( v12 )
      SysFreeString_0(v12);
  }
  v7 = *(_DWORD *)(a1 + 12);
  *(_QWORD *)Buffer = 0LL;
  v8 = FormatMessageW_0(0x1300u, 0LL, v7, 0x400u, Buffer, 0, 0LL);
  winrt::impl::trim_hresult_message(a2, *(_QWORD *)Buffer, v8);
  v9 = *(void **)Buffer;
  if ( *(_QWORD *)Buffer )
  {
    ProcessHeap_0 = GetProcessHeap_0();
    WINRT_HeapFree(ProcessHeap_0, 0, v9);
  }
  return a2;
}
