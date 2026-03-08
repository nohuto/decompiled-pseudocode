/*
 * XREFs of ?CheckOcclusionState@CDummyRemotingSwapChain@@UEBAJXZ @ 0x180295B80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::CheckOcclusionState(CDummyRemotingSwapChain *this)
{
  int v1; // ebx

  v1 = *(_DWORD *)(*((_QWORD *)this + 2) + 1088LL);
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v1, 0xB6u, 0LL);
  }
  else if ( (unsigned int)DwmGetRemoteSessionOcclusionState() )
  {
    return 142213121;
  }
  return (unsigned int)v1;
}
