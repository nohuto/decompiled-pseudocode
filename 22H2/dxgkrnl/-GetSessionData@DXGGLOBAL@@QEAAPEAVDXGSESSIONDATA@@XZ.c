/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01C0434
 * Callers:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0005520 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000AEEC (-IsTokenManagerReady@@YAHXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000B2C0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000B474 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C000B530 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgNotifyVSyncCB @ 0x1C000BD40 (DxgNotifyVSyncCB.c)
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C000D470 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURC.c)
 *     DxgkGetSessionTokenManager @ 0x1C00108B0 (DxgkGetSessionTokenManager.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0011E24 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 CurrentProcessSessionId; // rsi
  __int64 v4; // rbx
  DXGFASTMUTEX *v6; // [rsp+50h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp-10h]

  v1 = *((_QWORD *)this + 118);
  v2 = 0LL;
  if ( v1 )
  {
    v7 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
    v6 = (DXGFASTMUTEX *)(v1 + 88);
    if ( v1 == -88 )
    {
      WdLogSingleEntry1(1LL, 592LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((struct _KTHREAD **)v6 + 3) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 599LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGFASTMUTEX::Acquire(v6);
    v7 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v1 + 80) )
    {
      DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v6);
    }
    else
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v1 + 48) + 8 * CurrentProcessSessionId);
      v7 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v6);
      return (struct DXGSESSIONDATA *)v4;
    }
  }
  return (struct DXGSESSIONDATA *)v2;
}
