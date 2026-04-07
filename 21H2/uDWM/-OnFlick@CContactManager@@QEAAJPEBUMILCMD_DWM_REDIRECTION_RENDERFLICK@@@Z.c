/*
 * XREFs of ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x18009E88C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003540C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180049C18 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z @ 0x18009CDF0 (--$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800A63C4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 */

__int64 __fastcall CContactManager::OnFlick(CContactManager *this, const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *a2)
{
  CContactManager *v4; // rcx
  unsigned int v5; // ebx
  struct CVisual **v6; // rdi
  struct CTouchVisual *v7; // rbx
  unsigned int v8; // r14d
  int Touch; // eax
  CContactManager *v10; // rcx
  unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)a2 + 1) <= 0x14u )
  {
    v6 = (struct CVisual **)((char *)this + 312);
    v7 = (struct CTouchVisual *)*((_QWORD *)this + 39);
    CContactManager::StopAndRemoveFromRootNode(v4, v7);
    if ( v7 )
      CBaseObject::Release(v7);
    v8 = *((_DWORD *)this + 80);
    *v6 = 0LL;
    *((_DWORD *)this + 80) = v8 + 1;
    GetDesktopID(1LL, &v12);
    Touch = CreateTouchVisual<CFlickVisual>(v12, (CTouchVisual **)this + 39);
    v5 = Touch;
    if ( Touch >= 0 )
    {
      CContactManager::AddToTouchNode(v10, v12, *v6);
      CFlickVisual::Start(*v6, (char *)a2 + 8, *((unsigned int *)a2 + 1), v8);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x33Du);
    }
  }
  else
  {
    v5 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v5;
}
