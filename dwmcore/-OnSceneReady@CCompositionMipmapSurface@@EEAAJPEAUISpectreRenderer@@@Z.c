__int64 __fastcall CCompositionMipmapSurface::OnSceneReady(
        CCompositionMipmapSurface *this,
        struct ISpectreRenderer *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(struct ISpectreRenderer *, _QWORD, _QWORD, char *); // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(struct ISpectreRenderer *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v11);
  if ( *((_QWORD *)this + 4) != v11 )
  {
    *((_QWORD *)this + 4) = v11;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 10);
  }
  v4 = CCompositionMipmapSurface::EnsureMipmapSurface((struct _LUID *)this - 11);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x80u, 0LL);
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD, _QWORD, char *))(*(_QWORD *)a2 + 88LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
    v8 = v7(
           a2,
           *(_QWORD *)(*((_QWORD *)this + 10) + 112LL),
           *(_QWORD *)(*((_QWORD *)this + 10) + 184LL),
           (char *)this + 64);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x83u, 0LL);
  }
  return v6;
}
