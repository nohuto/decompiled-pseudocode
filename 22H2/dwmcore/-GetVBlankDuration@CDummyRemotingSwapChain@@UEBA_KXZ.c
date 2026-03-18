/*
 * XREFs of ?GetVBlankDuration@CDummyRemotingSwapChain@@UEBA_KXZ @ 0x1802997C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __fastcall CDummyRemotingSwapChain::GetVBlankDuration(CDummyRemotingSwapChain *this)
{
  return g_qpcFrequency.QuadPart * *((unsigned int *)this + 16) / *((unsigned int *)this + 15);
}
