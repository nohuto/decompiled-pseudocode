__int64 __fastcall CCompositionSwapchainStatistics::Initialize(
        CCompositionSwapchainStatistics *this,
        void *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v11,
    0LL);
  v7 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = OpenFlipConsumer(a2, (char *)this + 64, &v11);
  v3 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x30u, 0LL);
  else
LABEL_6:
    *((_QWORD *)this + 9) = a3;
  CDummyRemotingSwapChain::CPresentStats::~CPresentStats(&v11);
  return v3;
}
