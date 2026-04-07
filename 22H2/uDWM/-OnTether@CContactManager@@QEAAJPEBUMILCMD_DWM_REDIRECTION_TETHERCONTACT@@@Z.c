/*
 * XREFs of ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18009F6D4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800157E0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180034BCC (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180047FE0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180049B68 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x18009D0A8 (--$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800A12F4 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800A52F0 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800A53D8 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800A5838 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CContactManager::OnTether(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *a2)
{
  unsigned int v4; // ebx
  CBaseObject *v5; // r14
  int v6; // ecx
  __int64 v7; // r9
  __int64 v9; // rdi
  CTetherVisual *v10; // r9
  int v11; // eax
  CContactManager *v12; // rcx
  int v13; // eax
  int v14; // eax
  CContactManager *v15; // rcx
  __int64 v16; // rax
  CBaseObject *v17; // r14
  char v18; // r8
  __int64 v19; // rcx
  CDirectTouchVisual **v20; // rdx
  int Touch; // eax
  CContactManager *v22; // rcx
  __int64 v23; // r9
  unsigned int v24; // eax
  unsigned int v25; // edx
  CContactManager *v26; // rcx
  int v27; // eax
  volatile signed __int32 *v28; // rdx
  CBaseObject *v29; // rcx
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v32; // [rsp+80h] [rbp+40h] BYREF
  CTetherVisual *v33; // [rsp+88h] [rbp+48h] BYREF

  v30 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v32 = 0LL;
  GetDesktopID(1LL, &v31);
  v6 = 0;
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_5;
  v7 = *((_QWORD *)this + 7);
  while ( *(_DWORD *)(112LL * (unsigned int)v6 + v7) != *((_DWORD *)a2 + 1) )
  {
    if ( (unsigned int)++v6 >= *((_DWORD *)this + 20) )
      goto LABEL_5;
  }
  if ( v6 < 0 || (v9 = 112LL * (unsigned int)v6, *(_DWORD *)(v9 + v7 + 4) != 1) )
  {
LABEL_5:
    v4 = -2147024809;
    goto LABEL_6;
  }
  v10 = *(CTetherVisual **)(v7 + v9 + 72);
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( v10 )
    {
      CTetherVisual::UpdatePosition(v10, (const struct tagPOINT *)((char *)a2 + 12), 0LL);
      goto LABEL_6;
    }
    v11 = CreateTouchVisual<CTetherVisual>(v31, &v32);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3C9u);
      v5 = v32;
      goto LABEL_43;
    }
    v5 = v32;
    v13 = CContactManager::AddToTouchNode(v12, v31, v32);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3CAu);
LABEL_43:
      if ( v5 )
        CBaseObject::Release(v5);
      goto LABEL_6;
    }
    v14 = CTetherVisual::Start(
            v5,
            (const struct tagPOINT *)((char *)a2 + 12),
            (const struct tagPOINT *)(v9 + *((_QWORD *)this + 7) + 8LL));
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3CBu);
      goto LABEL_43;
    }
    *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = v5;
    v16 = *((_QWORD *)this + 7);
    v17 = *(CBaseObject **)(v9 + v16 + 88);
    if ( v17 )
    {
      CContactManager::StopAndRemoveFromRootNode(v15, *(struct CTouchVisual **)(v9 + v16 + 88));
      CBaseObject::Release(v17);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 88) = 0LL;
      *(_BYTE *)(v9 + *((_QWORD *)this + 7) + 104) = 0;
      v18 = *((_BYTE *)this + 324);
      if ( v18 || *(_DWORD *)(v9 + *((_QWORD *)this + 7) + 40) )
      {
        v19 = *((_QWORD *)this + 7);
        v20 = (CDirectTouchVisual **)(v19 + v9 + 48);
        if ( !*v20 && !*(_QWORD *)(v19 + v9 + 96) )
        {
          Touch = CreateTouchVisual<CDirectTouchVisual>(v31, v20);
          v4 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x3DDu);
            goto LABEL_6;
          }
          CContactManager::AddToTouchNode(v22, v31, *(struct CVisual **)(v9 + *((_QWORD *)this + 7) + 48));
          v18 = *((_BYTE *)this + 324);
          v19 = *((_QWORD *)this + 7);
        }
        v23 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
        if ( !v18 )
          v23 = *(unsigned int *)(v19 + v9 + 40);
        CDirectTouchVisual::StartDown(*(_QWORD *)(v19 + v9 + 48), v19 + v9 + 8, v19 + v9 + 24, v23);
      }
    }
  }
  else
  {
    if ( !v10 )
    {
      v4 = -2147024809;
      goto LABEL_43;
    }
    v33 = v10;
    v24 = *((_DWORD *)this + 44);
    v25 = v24 + 1;
    if ( v24 + 1 >= v24 )
    {
      if ( v25 > *((_DWORD *)this + 43) )
      {
        v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v33);
        LODWORD(v5) = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC0u);
      }
      else
      {
        v26 = (CContactManager *)*((unsigned int *)this + 44);
        *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v26) = v10;
        *((_DWORD *)this + 44) = v25;
      }
    }
    else
    {
      LODWORD(v5) = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v28 = *(volatile signed __int32 **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( (int)v5 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v26, (struct CTouchVisual *)v28);
    }
    else
    {
      _InterlockedIncrement(v28 + 2);
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v9 + *((_QWORD *)this + 7) + 72));
    }
    v29 = *(CBaseObject **)(v9 + *((_QWORD *)this + 7) + 72);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *(_QWORD *)(v9 + *((_QWORD *)this + 7) + 72) = 0LL;
    }
  }
LABEL_6:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v30);
  return v4;
}
