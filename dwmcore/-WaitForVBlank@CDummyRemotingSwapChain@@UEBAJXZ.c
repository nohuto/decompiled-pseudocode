/*
 * XREFs of ?WaitForVBlank@CDummyRemotingSwapChain@@UEBAJXZ @ 0x180296530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyRemotingSwapChain::WaitForVBlank(CDummyRemotingSwapChain *this)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
           *((_QWORD *)this + 3),
           0LL,
           0LL);
}
