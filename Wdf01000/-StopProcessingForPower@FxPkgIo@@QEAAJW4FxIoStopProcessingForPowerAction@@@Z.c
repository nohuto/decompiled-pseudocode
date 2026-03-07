__int64 __fastcall FxPkgIo::StopProcessingForPower(FxPkgIo *this, FxIoStopProcessingForPowerAction Action)
{
  const void *id; // rax
  unsigned int flags; // edx
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  _SINGLE_LIST_ENTRY *Next; // rdi
  _SINGLE_LIST_ENTRY *v11; // rbx
  _SINGLE_LIST_ENTRY *v12; // rsi
  _SINGLE_LIST_ENTRY *v13; // r14
  const _GUID *v15; // [rsp+20h] [rbp-38h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  id = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_Lq(this->m_Globals, flags, v6, v7, v15, flags, id);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v8);
  this->m_PowerStateOn = 0;
  if ( Action == FxIoStopProcessingForPowerPurgeManaged || Action == FxIoStopProcessingForPowerPurgeNonManaged )
    this->m_QueuesAreShuttingDown = 1;
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)2);
  FxNonPagedObject::Unlock(this, irql, v9);
  Next = queueList.Next;
  if ( Action == FxIoStopProcessingForPowerHold )
  {
    v11 = queueList.Next;
    if ( !queueList.Next )
      return 0LL;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v11[-116]);
      v11 = v11->Next;
    }
    while ( v11 );
  }
  if ( Next )
  {
    v12 = Next->Next;
    while ( 1 )
    {
      v13 = v12;
      FxIoQueue::StopProcessingForPower((FxIoQueue *)&Next[-116], Action);
      Next->Next = 0LL;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))Next[-116].Next[2].Next)(
        &Next[-116],
        1702326128LL,
        1249LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( !v12 )
        break;
      v12 = v12->Next;
      Next = v13;
    }
  }
  return 0LL;
}
