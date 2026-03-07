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
      WdLogSingleEntry1(1LL, 1317LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsListEmpty(&pCrossAdapterSyncObject->m_DxgSyncObjectSyncObjectListHead)",
        1317LL,
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
