int __fastcall CChannel::Initialize(CChannel *this)
{
  HANDLE EventW; // rax
  const char *v3; // r9
  __int64 v5; // rcx
  int DwmChannel; // eax
  unsigned int v7; // r8d
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 96,
    EventW);
  if ( ((*((_QWORD *)this + 12) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x41,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
             v3);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_DWORD *)this + 18) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
    return 0;
  }
  DwmChannel = NtDCompositionCreateDwmChannel((char *)this + 72);
  if ( DwmChannel >= 0 )
    return 0;
  return wil::details::in1diag3::Return_NtStatus(retaddr, (void *)0x4A, v7, (const char *)(unsigned int)DwmChannel, v8);
}
