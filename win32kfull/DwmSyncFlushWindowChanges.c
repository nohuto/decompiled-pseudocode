/*
 * XREFs of DwmSyncFlushWindowChanges @ 0x1C0270A50
 * Callers:
 *     xxxSynchronizeDWMWindowChanges @ 0x1C01AE0C8 (xxxSynchronizeDWMWindowChanges.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x1C001D800 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C0270960 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 */

__int64 __fastcall DwmSyncFlushWindowChanges(PVOID Object)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rbp

  v2 = -1073741823;
  v3 = *(_QWORD *)(SGDGetSessionState(Object) + 32);
  v4 = *(_QWORD *)(v3 + 13248);
  if ( Object )
  {
    v2 = DwmSyncLPCAllowed();
    if ( v2 < 0 || *(_QWORD *)(v3 + 13256) == v4 )
    {
      ObfDereferenceObject(Object);
    }
    else
    {
      v2 = DwmSyncFlushForceRenderAndWaitForBatch(Object, 0);
      *(_QWORD *)(v3 + 13256) = v4;
    }
  }
  return (unsigned int)v2;
}
