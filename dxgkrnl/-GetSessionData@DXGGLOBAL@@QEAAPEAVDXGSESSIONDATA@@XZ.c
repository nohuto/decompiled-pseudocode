/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01C97C4
 * Callers:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0003F70 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0007690 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DB30 (DxgkGetSessionTokenManager.c)
 *     ?IsTokenManagerReady@@YAHXZ @ 0x1C000DE1C (-IsTokenManagerReady@@YAHXZ.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x1C000E5F0 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgNotifyVSyncCB @ 0x1C000ECB0 (DxgNotifyVSyncCB.c)
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0010350 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURC.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00125F4 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x1C0016DE4 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessSessionId; // rsi
  __int64 v7; // rbx
  DXGFASTMUTEX *v9; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+58h] [rbp-10h]

  v4 = *((_QWORD *)this + 118);
  v5 = 0LL;
  if ( v4 )
  {
    v10 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
    v9 = (DXGFASTMUTEX *)(v4 + 88);
    if ( v4 == -88 )
    {
      WdLogSingleEntry1(1LL, 592LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((struct _KTHREAD **)v9 + 3) == KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 599LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGFASTMUTEX::Acquire(v9);
    v10 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v4 + 80) )
    {
      DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v9);
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8 * CurrentProcessSessionId);
      v10 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v9);
      return (struct DXGSESSIONDATA *)v7;
    }
  }
  return (struct DXGSESSIONDATA *)v5;
}
