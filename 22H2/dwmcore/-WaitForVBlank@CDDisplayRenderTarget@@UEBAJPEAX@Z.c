/*
 * XREFs of ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z @ 0x180173720
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z @ 0x18023ACDC (-WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::WaitForVBlank(CDDisplayRenderTarget *this, void *a2)
{
  CDDisplaySwapChain *v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = (CDDisplaySwapChain *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = CDDisplaySwapChain::WaitForVBlank(v2, a2);
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xC1u, 0LL);
  }
  else
  {
    v5 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0xC5u, 0LL);
  }
  return v5;
}
