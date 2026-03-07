__int64 __fastcall CLegacyRemotingSwapChain::CheckOcclusionState(CLegacyRemotingSwapChain *this)
{
  int v1; // ebx

  v1 = *(_DWORD *)(*((_QWORD *)this + 9) + 1088LL);
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v1, 0xC8u, 0LL);
  }
  else if ( (unsigned int)DwmGetRemoteSessionOcclusionState() )
  {
    return 142213121;
  }
  return (unsigned int)v1;
}
