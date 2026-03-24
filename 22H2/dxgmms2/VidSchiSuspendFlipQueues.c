/*
 * XREFs of VidSchiSuspendFlipQueues @ 0x1C00CF510
 * Callers:
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ADE5C (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00D02F0 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002F9B4 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C002FC38 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

__int64 __fastcall VidSchiSuspendFlipQueues(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx

  result = *(unsigned int *)(a1 + 40);
  for ( i = 0LL; (unsigned int)i < (unsigned int)result; i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a2, i) )
    {
      v6 = *(_QWORD *)(a1 + 8 * i + 3104);
      if ( v6 )
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo(a1, v6, 0);
    }
    result = *(unsigned int *)(a1 + 40);
  }
  v7 = 0LL;
  if ( (_DWORD)result )
  {
    do
    {
      if ( _bittest(&a2, v7) )
      {
        v8 = *(_QWORD *)(a1 + 8 * v7 + 3104);
        if ( v8 )
          result = VidSchiFlushPendingHWSubmittedFlips(a1, v8);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *(_DWORD *)(a1 + 40) );
  }
  return result;
}
