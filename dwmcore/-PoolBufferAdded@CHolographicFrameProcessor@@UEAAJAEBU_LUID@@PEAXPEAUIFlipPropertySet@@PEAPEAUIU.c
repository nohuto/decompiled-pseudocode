__int64 __fastcall CHolographicFrameProcessor::PoolBufferAdded(
        CHolographicFrameProcessor *this,
        const struct _LUID *a2,
        void *a3,
        struct IFlipPropertySet *a4,
        struct IUnknown **a5)
{
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
  v15 = 0LL;
  v8 = **v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  v9 = v8(v5, &GUID_77db970f_6276_48ba_ba28_070143b4392c, &v15);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xBAu, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, void *, GUID *, struct IUnknown **))(**((_QWORD **)this + 8) + 384LL))(
            *((_QWORD *)this + 8),
            a3,
            &GUID_00000000_0000_0000_c000_000000000046,
            a5);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xBBu, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return v11;
}
