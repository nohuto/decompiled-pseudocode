__int64 __fastcall CChannel::WindowNodeSetCompositionSurface(CChannel *this, unsigned int a2, void *a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  const char *v8; // r9
  unsigned int LastError; // ebx
  int v10; // eax
  __m128i si128; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  HANDLE TargetHandle; // [rsp+80h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v13, this);
  CChannel::CheckHandle((__int64)this, a2, 204);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  if ( a3 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TargetHandle,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v7 = GetCurrentProcess();
    if ( !DuplicateHandle(v7, a3, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x706,
                    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
                    v8);
LABEL_7:
      CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v13);
      CDummyRemotingSwapChain::CPresentStats::~CPresentStats(&TargetHandle);
      return LastError;
    }
    si128.m128i_i64[1] = (__int64)TargetHandle;
  }
  v10 = CChannel::SendCommand(this, &si128, 0x10u);
  LastError = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70B,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_7;
  }
  TargetHandle = 0LL;
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v13);
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TargetHandle);
  return 0LL;
}
