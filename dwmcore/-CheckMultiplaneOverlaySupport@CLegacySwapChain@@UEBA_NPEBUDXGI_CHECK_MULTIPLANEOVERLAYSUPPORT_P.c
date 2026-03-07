bool __fastcall CLegacySwapChain::CheckMultiplaneOverlaySupport(
        CLegacySwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  CCheckMPOCache *v4; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  DWORD v12; // edi
  bool v13; // di
  __int64 v14; // rsi
  CCheckMPOCache *v15; // rax
  bool v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  void *v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0LL;
  *a4 = 0;
  v17 = 0;
  if ( *((_QWORD *)this + 28) && *((int *)this + 52) >= 1 )
  {
    if ( CD3DDevice::CheckMPOCache(*((CD3DDevice **)this + 10), a2, a3, &v17) )
    {
      *a4 = 1;
    }
    else
    {
      v9 = *((_QWORD *)this + 28);
      v18 = 0;
      v19 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, int *))(*(_QWORD *)v9 + 176LL))(
              v9,
              a3,
              a2,
              &v18,
              &v19);
      v12 = v10;
      if ( v10 >= 0 )
      {
        v13 = v17;
        if ( v18 )
          v13 = 1;
        v17 = v13;
        if ( v19 )
          *a4 = 1;
        v14 = *((_QWORD *)this + 10);
        v15 = (CCheckMPOCache *)operator new(0x3F0uLL);
        if ( v15 )
          v4 = CCheckMPOCache::CCheckMPOCache(v15, a2);
        v20[0] = v4;
        std::vector<std::unique_ptr<ICheckMPOCache>>::emplace_back<std::unique_ptr<CCheckMPOCache>>(
          (char **)(v14 + 1448),
          (__int64 *)v20);
        std::unique_ptr<CCheckMPOCache>::~unique_ptr<CCheckMPOCache>(v20);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x384u, 0LL);
        if ( v12 == -2005270527 || v12 == -2147024809 )
        {
          memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
          pExceptionRecord.ExceptionCode = v12;
          RaiseFailFastException(&pExceptionRecord, 0LL, 0);
        }
      }
    }
  }
  return v17;
}
