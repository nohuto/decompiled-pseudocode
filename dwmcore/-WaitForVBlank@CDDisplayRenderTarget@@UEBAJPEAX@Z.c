/*
 * XREFs of ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z @ 0x1801C7360
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z @ 0x180288808 (-WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::WaitForVBlank(CDDisplayRenderTarget *this, void *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( *((_QWORD *)this + 5) )
  {
    v2 = CDDisplaySwapChain::WaitForVBlank(this, a2);
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xE8u, 0LL);
  }
  else
  {
    v4 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003304442, 0xECu, 0LL);
  }
  return v4;
}
