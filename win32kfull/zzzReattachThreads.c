/*
 * XREFs of zzzReattachThreads @ 0x1C00CD3A8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     zzzAttachThreadInput @ 0x1C00CCFE8 (zzzAttachThreadInput.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01BC76C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0014278 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C002EF28 (zzzEndDeferWinEventNotify.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C009B35C (zzzInputFocusReceivedWindowEvent.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00CD304 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00CD7AC (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00CD8D0 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00CD940 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00CDE04 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C00CE1A4 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     UnpackAffectedThreadList @ 0x1C00CE1E4 (UnpackAffectedThreadList.c)
 *     SetNewForegroundQueue @ 0x1C00CE270 (SetNewForegroundQueue.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00CE3D0 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00CE524 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     Feature_KIDV2__private_IsEnabledDeviceUsage @ 0x1C012C6EC (Feature_KIDV2__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  int v3; // r15d
  int v4; // edi
  int v5; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // r12
  __int64 v11; // rbx
  tagQ *v12; // rsi
  __int64 v13; // rax
  const struct tagTHREADINFO *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  const struct tagTHREADINFO *v18; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  tagQ *v22; // rcx
  struct tagQMSG *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 NextQueueWindow; // rax
  __int64 v30; // [rsp+40h] [rbp-48h]
  char v31; // [rsp+90h] [rbp+8h] BYREF
  int v32; // [rsp+A8h] [rbp+20h]

  v3 = 1;
  v30 = 0LL;
  v4 = a1 & 1;
  v5 = a1 & 2;
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  v9 = *(_QWORD *)(v8 + 120);
  if ( v9 )
    v10 = *(struct tagTHREADINFO **)(v9 + 16);
  else
    v10 = *(struct tagTHREADINFO **)(v8 + 104);
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v31);
  if ( v4 )
    goto LABEL_10;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_11;
  }
  if ( !v5 && !a3 )
  {
LABEL_10:
    UnpackAffectedThreadList();
    if ( v4 )
    {
LABEL_15:
      v11 = 0LL;
      goto LABEL_16;
    }
  }
LABEL_11:
  zzzRecalcThreadAttachment();
  v11 = gpqForeground;
  if ( !gpqForeground )
    v11 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( tagQ::IsSingleThreadAttached((tagQ *)v11) )
    goto LABEL_15;
  ++*(_DWORD *)(v11 + 400);
LABEL_16:
  v12 = 0LL;
  if ( gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 128LL)) != 0 )
  {
    v14 = *(const struct tagTHREADINFO **)(v13 + 16);
    v12 = (tagQ *)*((_QWORD *)v14 + 82);
    if ( !v12 && !InAffectedThreadList(v14) )
      v12 = *(tagQ **)(*(_QWORD *)(*(_QWORD *)(gpqForeground + 128LL) + 16LL) + 432LL);
    if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
    {
      v15 = *(__int64 **)(gpqForeground + 120LL);
      if ( v15 )
        v30 = *v15;
    }
  }
  else
  {
    v3 = 0;
  }
  v16 = 0LL;
  if ( gpqForegroundPrev )
  {
    v17 = *(_QWORD *)(gpqForegroundPrev + 136LL);
    if ( v17 )
    {
      v18 = *(const struct tagTHREADINFO **)(v17 + 16);
      v16 = *((_QWORD *)v18 + 82);
      if ( !v16 && !InAffectedThreadList(v18) )
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gpqForegroundPrev + 136LL) + 16LL) + 432LL);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v22 = (tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 82);
      if ( v22 == *((tagQ **)RecalcPtiFromListEntry + 54) )
      {
        tagTHREADINFO::AssignAttachQueue(RecalcPtiFromListEntry, 0LL);
      }
      else if ( v22 )
      {
        tagQ::zzzAttachToQueue(v22, RecalcPtiFromListEntry, (struct tagQ *)v11, v12 == v22);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v11 )
  {
    if ( !*(_DWORD *)(v11 + 400) )
    {
      v32 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11812LL);
    }
    v23 = *(struct tagQMSG **)(v11 + 24);
    --*(_DWORD *)(v11 + 400);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_DWORD *)(v11 + 40) = 0;
    RedistributeInput(v23, (struct tagQ *)v11, v10);
    if ( !tagQ::IsAnyThreadAttached((tagQ *)v11) )
    {
      v25 = 0LL;
LABEL_48:
      zzzDestroyQueue(v24, v25);
      goto LABEL_49;
    }
    v26 = *(_QWORD *)(v11 + 96);
    if ( v26 && v11 != *(_QWORD *)(v26 + 432) )
      zzzDestroyQueue(v24, v26);
    v25 = *(_QWORD *)(v11 + 104);
    if ( v25 && v11 != *(_QWORD *)(v25 + 432) )
    {
      v24 = v11;
      goto LABEL_48;
    }
  }
LABEL_49:
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    if ( !(unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() || (tagQ *)gpqForeground != v12 )
    {
      SetNewForegroundQueue(v12);
      gpqForegroundPrev = v16;
      if ( gpqForeground )
      {
        if ( *(_QWORD *)(gpqForeground + 120LL) )
        {
          if ( !(unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage()
            || ((v27 = *(__int64 **)(gpqForeground + 120LL)) != 0LL ? (v28 = *v27) : (v28 = 0LL), v30 != v28) )
          {
            zzzInputFocusReceivedWindowEvent(4u);
          }
        }
      }
    }
    UnpackAffectedThreadList();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v31);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v3 )
    {
      NextQueueWindow = GetNextQueueWindow(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL) + 112LL),
                          0LL,
                          0LL);
      if ( NextQueueWindow )
        PostEventMessageEx(
          *(struct tagTHREADINFO **)(NextQueueWindow + 16),
          *(struct tagQ **)(*(_QWORD *)(NextQueueWindow + 16) + 432LL),
          6u,
          0LL,
          0,
          0LL,
          *(_QWORD *)NextQueueWindow,
          0LL);
    }
    GenerateMouseMove(0LL);
  }
  else
  {
    UnpackAffectedThreadList();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v31);
    zzzEndDeferWinEventNotify();
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v31);
  }
}
