/*
 * XREFs of ?UnqueuePTPMouseEvent@CPTPProcessor@@CA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C00E8C6E
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00E8B10 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 */

char __fastcall CPTPProcessor::UnqueuePTPMouseEvent(struct tagPTPMOUSEEVENT *a1, struct tagPTPMOUSEEVENT *a2, bool *a3)
{
  unsigned int v6; // r9d
  char v7; // bl
  char v8; // dl
  unsigned __int64 v9; // rcx
  bool v10; // zf
  unsigned int v11; // r9d
  unsigned __int64 v12; // rdx

  RIMLockExclusive((__int64)&CPTPProcessor::s_queueLock);
  v6 = CPTPProcessor::s_dwPTPMouseEvents;
  *a3 = 0;
  if ( v6 )
  {
    v8 = CPTPProcessor::s_dwPTPQueueHead;
    v7 = 1;
    v9 = (unsigned __int64)(((_BYTE)CPTPProcessor::s_dwPTPQueueHead - (_BYTE)v6 + 1) & 0x3F) << 7;
    v10 = v6 == 1;
    v11 = v6 - 1;
    CPTPProcessor::s_dwPTPMouseEvents = v11;
    *(_OWORD *)a1 = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v9);
    *((_OWORD *)a1 + 1) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v9 + 16);
    *((_OWORD *)a1 + 2) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v9 + 32);
    *((_OWORD *)a1 + 3) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v9 + 48);
    *((_OWORD *)a1 + 4) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v9 + 64);
    *((_OWORD *)a1 + 5) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v9 + 80);
    *((_OWORD *)a1 + 6) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v9 + 96);
    *((_OWORD *)a1 + 7) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v9 + 112);
    if ( !v10 )
    {
      *a3 = 1;
      v12 = (unsigned __int64)((v8 - (_BYTE)v11 + 1) & 0x3F) << 7;
      *(_OWORD *)a2 = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v12);
      *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v12 + 16);
      *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v12 + 32);
      *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v12 + 48);
      *((_OWORD *)a2 + 4) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v12 + 64);
      *((_OWORD *)a2 + 5) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v12 + 80);
      *((_OWORD *)a2 + 6) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v12 + 96);
      *((_OWORD *)a2 + 7) = *(_OWORD *)((char *)&CPTPProcessor::s_PTPMouseEventQueue + v12 + 112);
    }
  }
  else
  {
    v7 = 0;
  }
  qword_1C029A1D8 = 0LL;
  ExReleasePushLockExclusiveEx(&CPTPProcessor::s_queueLock, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
