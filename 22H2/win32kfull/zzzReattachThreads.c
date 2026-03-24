/*
 * XREFs of zzzReattachThreads @ 0x1C001194C
 * Callers:
 *     zzzAttachThreadInput @ 0x1C00115F8 (zzzAttachThreadInput.c)
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E638C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0011CEC (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C0011D8C (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C0011E6C (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 *     UnpackAffectedThreadList @ 0x1C001230C (UnpackAffectedThreadList.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0012370 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00124DC (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012504 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0034FEC (zzzInputFocusReceivedWindowEvent.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C003CA3C (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     SetNewForegroundQueue @ 0x1C003DB70 (SetNewForegroundQueue.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006DEA4 (zzzEndDeferWinEventNotify.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _GetNextQueueWindow @ 0x1C01F3918 (_GetNextQueueWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzReattachThreads(char a1, const struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  __int64 v3; // r15
  int v4; // esi
  int v7; // r12d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ *v22; // rdx
  int v23; // eax
  struct tagQMSG *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 NextQueueWindow; // rax
  struct tagTHREADINFO *v29; // [rsp+40h] [rbp-48h]
  char v30; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a1 & 2;
  v7 = 1;
  v8 = a1 & 1;
  v9 = *(_QWORD *)(gptiCurrent + 432LL);
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
  {
    v29 = *(struct tagTHREADINFO **)(v10 + 16);
    v3 = 0LL;
  }
  else
  {
    v29 = *(struct tagTHREADINFO **)(v9 + 96);
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v30);
  if ( v8 )
    goto LABEL_10;
  if ( a2 && a3 )
  {
    PackAffectedThreadList(a2, a3);
    goto LABEL_11;
  }
  if ( !v4 && !a3 )
  {
LABEL_10:
    UnpackAffectedThreadList();
    if ( v8 )
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
  if ( *(_DWORD *)(v11 + 392) == 1 )
    goto LABEL_15;
  ++*(_DWORD *)(v11 + 396);
LABEL_16:
  v12 = 0LL;
  if ( gpqForeground && (v13 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v12 = *(_QWORD *)(v14 + 656);
    if ( !v12 && !InAffectedThreadList((const struct tagTHREADINFO *)v14) )
      v12 = *(_QWORD *)(v15 + 432);
  }
  else
  {
    v7 = 0;
  }
  if ( gpqForegroundPrev )
  {
    v16 = *(_QWORD *)(gpqForegroundPrev + 128LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      v3 = *(_QWORD *)(v17 + 656);
      if ( !v3 && !InAffectedThreadList((const struct tagTHREADINFO *)v17) )
        v3 = *(_QWORD *)(v18 + 432);
    }
  }
  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    if ( RecalcPtiFromListEntry )
    {
      v22 = (struct tagQ *)*((_QWORD *)RecalcPtiFromListEntry + 82);
      if ( v22 == *((struct tagQ **)RecalcPtiFromListEntry + 54) )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 82) = 0LL;
      }
      else if ( v22 )
      {
        *((_QWORD *)RecalcPtiFromListEntry + 82) = 0LL;
        zzzAttachToQueue(RecalcPtiFromListEntry, v22);
      }
    }
  }
  RecalculateQueueInfo();
  if ( v11 )
  {
    v23 = *(_DWORD *)(v11 + 396);
    if ( !v23 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12461LL);
      v23 = *(_DWORD *)(v11 + 396);
    }
    v24 = *(struct tagQMSG **)(v11 + 24);
    *(_DWORD *)(v11 + 396) = v23 - 1;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_DWORD *)(v11 + 40) = 0;
    RedistributeInput(v24, (struct tagQ *)v11, v29);
    v25 = *(_DWORD *)(v11 + 392);
    if ( !v25 )
    {
      *(_DWORD *)(v11 + 392) = 1;
LABEL_45:
      zzzDestroyQueue(v11);
      goto LABEL_46;
    }
    v26 = *(_QWORD *)(v11 + 88);
    if ( v26 && v11 != *(_QWORD *)(v26 + 432) )
    {
      *(_DWORD *)(v11 + 392) = v25 + 1;
      zzzDestroyQueue(v11);
    }
    v27 = *(_QWORD *)(v11 + 96);
    if ( v27 && v11 != *(_QWORD *)(v27 + 432) )
    {
      ++*(_DWORD *)(v11 + 392);
      goto LABEL_45;
    }
  }
LABEL_46:
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
  {
    SetNewForegroundQueue(v12);
    gpqForegroundPrev = v3;
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(4LL);
    UnpackAffectedThreadList();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v30);
    zzzEndDeferWinEventNotify();
    if ( !gpqForeground && v7 )
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
    UserAtomicCheck::Detach((UserAtomicCheck *)&v30);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v30);
  }
}
