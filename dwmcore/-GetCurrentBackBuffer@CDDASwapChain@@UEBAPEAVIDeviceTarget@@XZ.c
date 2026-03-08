/*
 * XREFs of ?GetCurrentBackBuffer@CDDASwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180131690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CDDASwapChain::GetCurrentBackBuffer(CDDASwapChain *this)
{
  __int64 v1; // rdx
  struct IDeviceTarget *result; // rax

  v1 = *((_QWORD *)this + 4);
  result = 0LL;
  if ( v1 )
    return (struct IDeviceTarget *)(*(int *)(*(_QWORD *)(v1 + 8) + 24LL) + v1 + 8);
  return result;
}
