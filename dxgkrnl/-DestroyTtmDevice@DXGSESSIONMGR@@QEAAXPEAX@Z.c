/*
 * XREFs of ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C03504A0
 * Callers:
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C03C4C30 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C001C948 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0201C88 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDevice(CSERIALIZEDWORKQUEUE ***this, char *a2)
{
  bool v4; // zf
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // [rsp+50h] [rbp-18h] BYREF
  char v9; // [rsp+58h] [rbp-10h]

  if ( a2 && *((_DWORD *)a2 + 10) == 1299018836 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v8,
      (struct DXGPUSHLOCKFAST *)(a2 + 888));
    v4 = v9 == 0;
    a2[912] = 1;
    if ( !v4 )
    {
      v5 = v8;
      *(_QWORD *)(v8 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
    }
    v6 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
           this + 47,
           (void (*)(void *))DXGSESSIONMGR::DestroyTtmDeviceWorker,
           a2);
    if ( v6 < 0 )
    {
      v7 = v6;
      WdLogSingleEntry3(2LL, *((unsigned int *)a2 + 20), *((_QWORD *)a2 + 8), v6);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to queue a Serialized work item to destroy TTM device for target 0x%I64x on adapter 0x%I64x, (St"
                  "atus = 0x%I64x).",
        *((unsigned int *)a2 + 20),
        *((_QWORD *)a2 + 8),
        v7,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified invalid TTM device 0x%I64x.",
      (__int64)a2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
