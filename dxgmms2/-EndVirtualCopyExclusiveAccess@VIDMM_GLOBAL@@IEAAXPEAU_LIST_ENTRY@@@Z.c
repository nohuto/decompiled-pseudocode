void __fastcall VIDMM_GLOBAL::EndVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v6; // rdi
  struct _LIST_ENTRY *v7; // rbx

  if ( byte_1C00769C1 < 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerExit, a3, 8018);
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v6 = Flink;
    v7 = Flink;
    Flink = Flink->Flink;
    VidSchSuspendResumeDevice((_KEVENT *)v6[-10].Flink, 0, 0, 2);
    v7->Flink = 0LL;
    v6->Blink = 0LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 11132);
  ExReleasePushLockSharedEx((char *)this + 44512, 0LL);
  KeLeaveCriticalRegion();
}
