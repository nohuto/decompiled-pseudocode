__int64 __fastcall CCompSwapChain::SetSize(CCompSwapChain *this, const struct D2D_SIZE_U *a2, int a3)
{
  unsigned int v6; // edi
  void (__fastcall ***v7)(_QWORD, __int64 *); // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (void (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8LL) + 16LL)
                                                + *((_QWORD *)this + 12)
                                                + 8LL);
  (**v7)(v7, &v18);
  if ( v18 != *a2 || *((_DWORD *)this + 30) != a3 )
  {
    v8 = *((_QWORD *)this + 12) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8LL) + 8LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(
      v8,
      ((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v9 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = 0LL;
    if ( v9 )
    {
      v10 = v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    CD3DDevice::Trim(*((CD3DDevice **)this + 9));
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, int))(**((_QWORD **)this + 10) + 104LL))(
            *((_QWORD *)this + 10),
            0LL,
            a2->width,
            a2->height,
            *((_DWORD *)this + 31),
            a3);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xDDu, 0LL);
    }
    else
    {
      v15 = CCompSwapChain::Initialize(this);
      v6 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE0u, 0LL);
      else
        *((_DWORD *)this + 30) = a3;
    }
  }
  return v6;
}
