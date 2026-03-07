__int64 __fastcall CD3DDevice::InitSystemDevice(CD3DDevice *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  char v9; // bl
  enum D3D11_FENCE_FLAG v10; // ebx
  int SharedHandleFence; // eax
  __int64 v12; // rcx
  const char *v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]

  v1 = (_QWORD *)((char *)this + 544);
  v3 = *((_QWORD *)this + 68);
  *v1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 67))(
         *((_QWORD *)this + 67),
         &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
         v1);
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x54u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 72);
    v9 = ~(unsigned __int8)*((_DWORD *)this + 226);
    *((_QWORD *)this + 72) = 0LL;
    v10 = v9 & 8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v14 = "TokenThreadRenderFence";
    v15 = 22;
    SharedHandleFence = CD3DDevice::CreateSharedHandleFence(
                          this,
                          (const struct CResourceTag *)&v14,
                          v6,
                          (struct ID3D11Fence **)this + 72,
                          (void **)this + 117,
                          v10);
    v7 = SharedHandleFence;
    if ( SharedHandleFence < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, SharedHandleFence, 0x5Bu, 0LL);
  }
  return v7;
}
