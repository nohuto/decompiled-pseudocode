__int64 __fastcall CConversionSwapChain::EnsureTargetBitmap(CConversionSwapChain *this)
{
  unsigned int v2; // edi
  CD3DDevice *v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD, char *); // rcx
  const struct D2D_SIZE_U *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  struct IRenderTargetBitmap *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(char *, __int64, __int64 *); // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v22; // [rsp+40h] [rbp-20h] BYREF
  int v23; // [rsp+48h] [rbp-18h]
  struct IRenderTargetBitmap *v24; // [rsp+90h] [rbp+30h] BYREF
  __int64 v25; // [rsp+98h] [rbp+38h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF
  char v27; // [rsp+A8h] [rbp+48h] BYREF

  if ( *((_QWORD *)this + 47) )
  {
    return 0;
  }
  else
  {
    v3 = (CD3DDevice *)*((_QWORD *)this + 10);
    v24 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v24);
    v4 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)this + 16)
                                                  + 8LL
                                                  + *(int *)(*(_QWORD *)(*((_QWORD *)this + 16) + 8LL) + 16LL));
    v5 = (const struct D2D_SIZE_U *)(**v4)(v4, &v27);
    v23 = 37;
    v22 = "Conversion intermediate target bitmap";
    v6 = CD3DDevice::CreateRenderTargetBitmap(
           v3,
           (const struct CResourceTag *)&v22,
           v5,
           (CConversionSwapChain *)((char *)this + 384),
           (CConversionSwapChain *)((char *)this + 88),
           0,
           &v24);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1C7u, 0LL);
    }
    else
    {
      v8 = v24;
      v9 = *(int *)(*((_QWORD *)v24 + 1) + 16LL);
      v10 = *(_QWORD *)((char *)v24 + v9 + 8);
      v25 = 0LL;
      v11 = *(__int64 (__fastcall **)(char *, __int64, __int64 *))(v10 + 48);
      v12 = (**(__int64 (__fastcall ***)(struct IRenderTargetBitmap *, const char **))v24)(v24, &v22);
      v13 = v11((char *)v8 + v9 + 8, v12, &v25);
      v2 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1CBu, 0LL);
      }
      else
      {
        v26 = 0LL;
        v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v25 + 8) + 4LL) + v25 + 8);
        v16 = (**v15)(v15, &GUID_77778ec0_8ef7_4222_bede_336213c916e3, &v26);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v16, 0x1CEu, 0LL);
        }
        else
        {
          LOBYTE(v17) = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 24LL))(v26, v17);
          v19 = *((_QWORD *)this + 47);
          v24 = 0LL;
          *((_QWORD *)this + 47) = v8;
          if ( v19 )
          {
            v20 = v19 + 8 + *(int *)(*(_QWORD *)(v19 + 8) + 4LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
  }
  return v2;
}
