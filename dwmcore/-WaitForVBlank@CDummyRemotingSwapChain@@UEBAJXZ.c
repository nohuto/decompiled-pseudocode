__int64 __fastcall CDummyRemotingSwapChain::WaitForVBlank(CDummyRemotingSwapChain *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
           *((_QWORD *)this + 3),
           0LL,
           0LL);
}
