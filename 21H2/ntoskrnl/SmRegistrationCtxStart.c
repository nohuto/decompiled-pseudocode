/*
 * XREFs of SmRegistrationCtxStart @ 0x1407D1948
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmGetRegistrationInfo @ 0x1407CF3BC (SmGetRegistrationInfo.c)
 *     SmcCacheCreatePrepare @ 0x14092A874 (SmcCacheCreatePrepare.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SmCreateEvent @ 0x1407D19A0 (SmCreateEvent.c)
 */

__int64 __fastcall SmRegistrationCtxStart(struct _DMA_ADAPTER **a1)
{
  int v2; // ebx
  struct _DMA_ADAPTER *v3; // rcx
  struct _DMA_ADAPTER *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = SmCreateEvent(a1, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    HalPutDmaAdapter(v3);
  return (unsigned int)v2;
}
