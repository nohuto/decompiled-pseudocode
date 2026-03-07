__int64 __fastcall CCaptureRenderTarget::Present(struct CD3DDevice **this)
{
  CCaptureRenderTarget *v2; // rsi
  int v3; // ebx
  struct CD3DDevice *D3DDeviceNoRef; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  char v16; // [rsp+20h] [rbp-29h]
  unsigned int v17; // [rsp+50h] [rbp+7h] BYREF
  __int64 v18; // [rsp+58h] [rbp+Fh] BYREF
  int v19; // [rsp+60h] [rbp+17h]
  int v20; // [rsp+64h] [rbp+1Bh]
  __int128 v21; // [rsp+68h] [rbp+1Fh] BYREF
  int v22; // [rsp+78h] [rbp+2Fh]
  __int64 *v23; // [rsp+80h] [rbp+37h]

  v2 = (CCaptureRenderTarget *)(this - 264);
  v3 = 0;
  v17 = 0;
  D3DDeviceNoRef = CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
                     this - 30,
                     (const struct _LUID *)this - 29,
                     *(this - 18));
  if ( D3DDeviceNoRef && CCaptureRenderTarget::GetCurrentFrameBuffer(v2) )
  {
    v5 = *((unsigned int *)this - 44);
    v6 = *((_QWORD *)*(this - 262) + 76);
    v19 = *((_DWORD *)this - 502);
    v20 = *((_DWORD *)this - 501);
    v18 = v6;
    v7 = (__int64)*(this - 17);
    v23 = &v18;
    v21 = xmmword_180383C40;
    v22 = 16;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           *((_QWORD *)*(this - 12) + v5),
           1LL,
           &v21);
    v17 = v8;
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x278u, 0LL);
    }
    else
    {
      v10 = (__int64)*(this - 21);
      *(this - 20) = (struct CD3DDevice *)((char *)*(this - 20) + 1);
      *((_BYTE *)D3DDeviceNoRef + 1507) = 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)D3DDeviceNoRef + 28) + 152LL))(
              *((_QWORD *)D3DDeviceNoRef + 28),
              v10);
      v17 = v11;
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x27Cu, 0LL);
      }
      else
      {
        v16 = 0;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, _DWORD, _QWORD, _QWORD))(*(_QWORD *)*(this - 18) + 72LL))(
                *(this - 18),
                *(this - 21),
                *(this - 20),
                0LL,
                v16,
                0,
                0LL,
                0LL);
        v17 = v13;
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x286u, 0LL);
      }
    }
  }
  if ( CCaptureRenderTarget::GetCurrentFrameBuffer(v2) )
  {
    *((_DWORD *)this - 44) = -1;
    (*(void (**)(void))(*(_QWORD *)v2 + 272LL))();
  }
  if ( v3 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v3, 0, &v17);
    return v17;
  }
  return (unsigned int)v3;
}
