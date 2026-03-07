__int64 __fastcall Microsoft::WRL::ComPtr<ID3D11Texture2D>::As<IDXGIResource1>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v2, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, a2);
}
