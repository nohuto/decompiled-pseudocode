struct IDeviceTarget *__fastcall CLegacyRemotingSwapChain::GetCurrentBackBuffer(CLegacyRemotingSwapChain *this)
{
  return (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
}
