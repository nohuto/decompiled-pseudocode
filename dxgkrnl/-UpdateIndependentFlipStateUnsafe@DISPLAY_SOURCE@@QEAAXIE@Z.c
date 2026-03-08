/*
 * XREFs of ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C02BB578
 * Callers:
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C02BB4F4 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C019C1C0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C01D7898 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 */

void __fastcall DISPLAY_SOURCE::UpdateIndependentFlipStateUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  int v4; // esi
  __int64 v5; // rdi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  v4 = a3;
  v5 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9582LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9582LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 940) )
  {
    WdLogSingleEntry1(1LL, 9583LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PlaneIndex < m_MaxPlanesUsed", 9583LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( IsDisplayPlaneConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 168 * v5 + 1144)) )
  {
    WdLogSingleEntry1(1LL, 9584LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!IsDisplayPlaneConfigQueueEmpty(&m_PlaneConfigurationQueue[PlaneIndex])",
      9584LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, v5);
  if ( LatestPlaneConfigInternal )
    *((_DWORD *)LatestPlaneConfigInternal + 2) ^= (*((_DWORD *)LatestPlaneConfigInternal + 2) ^ (8 * v4)) & 8;
}
