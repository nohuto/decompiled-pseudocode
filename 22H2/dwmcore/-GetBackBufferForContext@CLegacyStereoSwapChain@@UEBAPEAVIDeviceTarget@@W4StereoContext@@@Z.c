/*
 * XREFs of ?GetBackBufferForContext@CLegacyStereoSwapChain@@UEBAPEAVIDeviceTarget@@W4StereoContext@@@Z @ 0x18024D930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::GetBackBufferForContext(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = 0LL;
  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v3 = *(_QWORD *)(a1 - 200);
    }
    else
    {
      if ( a2 != 2 )
        return result;
      v3 = *(_QWORD *)(a1 + 16);
    }
    if ( v3 )
      return *(int *)(*(_QWORD *)(v3 + 8) + 24LL) + v3 + 8;
  }
  return result;
}
