/*
 * XREFs of ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C01D0CB0
 * Callers:
 *     ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0012920 (-ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRAC.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::NotifyDeferredDestructionComplete(
        ADAPTER_RENDER *this,
        struct DXGTERMINATIONTRACKER *a2)
{
  char *v3; // rsi
  char v5; // di

  v3 = (char *)this + 1312;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  if ( *((_BYTE *)this + 1368) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)this + 173) )
      WdLogSingleEntry5(0LL, 275LL, 31LL, this, 0LL, 0LL);
  }
  *((_QWORD *)a2 + 7) = *((_QWORD *)this + 163);
  *((_QWORD *)this + 163) = (char *)a2 + 56;
  *((_BYTE *)this + 1368) = 1;
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 24LL));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 1336), DelayedWorkQueue);
  }
}
