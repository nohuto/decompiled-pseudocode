void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  PKDPC BufferChainingDpc; // rsi
  SINGLE_LIST_ENTRY *p_DpcListEntry; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD v16[104]; // [rsp+20h] [rbp-1B8h] BYREF

  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  p_DpcListEntry = &WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(p_DpcListEntry, 0LL);
  LODWORD(BufferChainingDpc) = BufferChainingDpc->DeferredRoutine;
  ExReleasePushLockSharedEx(p_DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)BufferChainingDpc == 2 )
  {
    v12 = *((_DWORD *)this + 6);
    if ( v12 == a2
      && (v12 != 2 || *((_DWORD *)this + 7) == a5)
      && CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(this, a4) )
    {
      memset(v16, 0, 0x198uLL);
      v16[6] = a6;
      v16[0] = 1;
      v16[2] = a2;
      *(struct tagPOINT *)&v16[3] = a3;
      v16[5] = a5;
      ApiSetAddMagnificationOutputTransform((__int64)&v16[3], v13, v14);
      SendMessageTo(4LL, (__int64)v16, 408LL, v15);
    }
  }
}
