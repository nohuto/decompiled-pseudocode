__int64 __fastcall CHolographicFrameProcessor::ContentUpdated(
        CHolographicFrameProcessor *this,
        struct IFlipPropertySet *a2,
        struct IUnknown *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v15 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
           a3,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v15);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xCBu, 0LL);
    }
    else
    {
      v8 = *((_QWORD *)this + 3);
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, v15);
      v9 = *((_QWORD *)this + 9);
      ++*((_QWORD *)this + 14);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 1176LL))(v9, *((_QWORD *)this + 13));
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xD4u, 0LL);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct IUnknown *))(**((_QWORD **)this + 12) + 48LL))(
                *((_QWORD *)this + 12),
                *((_QWORD *)this + 13),
                *((_QWORD *)this + 14),
                a3);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xD5u, 0LL);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
  return v3;
}
