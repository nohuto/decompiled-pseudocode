__int64 __fastcall CCpuClipAntialiasSinkContext::SinkRenderParameters::SinkRenderParameters(
        __int64 a1,
        __int64 a2,
        float a3,
        int a4,
        __int64 a5,
        void (__fastcall ***a6)(_QWORD),
        char a7,
        char a8)
{
  wil::com_ptr_t<CCpuClipAntialiasDrawListEntry,wil::err_returncode_policy>::com_ptr_t<CCpuClipAntialiasDrawListEntry,wil::err_returncode_policy>();
  *(float *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  wil::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>(
    a1 + 16,
    a5);
  *(_QWORD *)(a1 + 24) = a6;
  if ( a6 )
    (**a6)(a6);
  *(_BYTE *)(a1 + 32) = a7;
  *(_BYTE *)(a1 + 33) = a8;
  return a1;
}
