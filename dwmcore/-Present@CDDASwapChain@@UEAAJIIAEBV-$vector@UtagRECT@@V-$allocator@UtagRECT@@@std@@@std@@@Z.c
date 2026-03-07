__int64 __fastcall CDDASwapChain::Present(__int64 a1)
{
  __int64 v2; // rcx
  CD3DDevice *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  CD3DDevice *v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v10 = 0LL;
  if ( v2
    && (v4 = *(int *)(*(_QWORD *)(v2 + 8) + 8LL) + v2 + 8,
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4),
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(&v10, v5),
        (v3 = v10) != 0LL) )
  {
    v6 = CD3DDevice::Present(v10, *(struct IDXGISwapChainDWM1 **)(a1 + 24));
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x64u, 0LL);
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, -2003304307, 0x68u, 0LL);
  }
  **(_DWORD **)(a1 + 80) = 0;
  if ( v3 )
    CD3DDevice::Release(v3);
  return v8;
}
