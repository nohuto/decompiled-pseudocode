/*
 * XREFs of ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C0350AEC
 * Callers:
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C0010640 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0010900 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0010CF0 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x1C00121C0 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 *     ?NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C035D6A0 (-NotifyVailSessionCallback@DXGVAILOBJECT@@SAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0371F08 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
        DXGSESSIONMGR *this,
        unsigned int a2,
        struct _KPROCESS **a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdi
  void *v8; // rdi
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v6 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( (unsigned int)v3 < *((_DWORD *)this + 20)
    && (v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3)) != 0
    && (v8 = *(void **)(v7 + 18648)) != 0LL )
  {
    ObfReferenceObject(v8);
    *a3 = (struct _KPROCESS *)v8;
  }
  else
  {
    v6 = -1073741275;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v6;
}
