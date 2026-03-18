/*
 * XREFs of ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0351614
 * Callers:
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0348F30 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C0352D3C (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0392D80 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C034ED40 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SignalFence(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = (_QWORD *)(a1 + 296);
  if ( (*(_DWORD *)(a1 + 204) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(a1 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    if ( (_QWORD *)*v4 == v4 )
    {
      WdLogSingleEntry1(1LL, 1334LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsListEmpty(&pCrossAdapterSyncObject->m_DxgSyncObjectSyncObjectListHead)",
        1334LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = (_QWORD *)*v4;
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    v10 = (__int64)(v9 - 6);
  }
  else
  {
    v10 = a1 + 296;
  }
  return DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v10, a1, a2, a3, a4);
}
