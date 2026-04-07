/*
 * XREFs of ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000B028 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012A20 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180013320 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180013BCC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015F18 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001681C (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180019500 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002AE7C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180041270 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     floor_0 @ 0x18005814A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     PixelAligningFactor @ 0x180098BCC (PixelAligningFactor.c)
 *     McTemplateU0pddddd_EtwEventWriteTransfer @ 0x18009A804 (McTemplateU0pddddd_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CWindowList::DPIChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // edi
  struct CWindowData *v5; // rbx
  int v6; // r14d
  struct CWindowData *v7; // rbp
  int v8; // ebp
  __int64 v9; // rax
  bool v10; // r9
  int v11; // r8d
  BOOL v12; // r14d
  CTopLevelWindow *v13; // rcx
  double v14; // xmm6_8
  char v15; // r15
  double v16; // xmm10_8
  float v17; // xmm1_4
  int v18; // esi
  float v19; // xmm8_4
  CWindowList *v20; // rcx
  int v22; // eax
  CWindowList *v23; // rcx
  CTopLevelWindow *v24; // rcx
  HWND v25; // rdx
  CWindowData *v26; // rax
  CWindowData *v27; // rax
  int v28; // eax
  int v29; // esi
  int v30; // r12d
  int v31; // esi
  int v32; // r12d
  double v33; // xmm11_8
  __int64 v34; // rcx
  double v35; // xmm0_8
  double v36; // xmm1_8
  float v37; // xmm2_4
  float v38; // xmm1_4
  double v39[2]; // [rsp+40h] [rbp-A8h] BYREF
  double v40; // [rsp+F8h] [rbp+10h] BYREF
  struct tagPOINT v41; // [rsp+100h] [rbp+18h] BYREF
  double v42; // [rsp+108h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v26 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( !v26 || (v27 = CWindowData::CWindowData(v26), (v7 = v27) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x88Bu);
    v8 = -2147024882;
    goto LABEL_51;
  }
  *((_QWORD *)v27 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v27);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v28 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v28;
  if ( v28 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x88Fu);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x14D1u);
    goto LABEL_35;
  }
  if ( v5 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
    v10 = *((double *)v5 + 39) != *(double *)v9
       || *((_DWORD *)v5 + 80) != *(_DWORD *)(v9 + 8)
       || *((_DWORD *)v5 + 81) != *(_DWORD *)(v9 + 12);
    v12 = 1;
    if ( *((_DWORD *)v5 + 82) == *(_DWORD *)(v9 + 16)
      && *((_DWORD *)v5 + 83) == *(_DWORD *)(v9 + 20)
      && *((_DWORD *)v5 + 84) == *(_DWORD *)(v9 + 24)
      && *((_DWORD *)v5 + 85) == *(_DWORD *)(v9 + 28) )
    {
      v11 = *((_DWORD *)v5 + 87);
      if ( (((unsigned __int8)v11 ^ *(_BYTE *)(v9 + 36)) & 1) == 0
        && (((unsigned __int8)v11 ^ (unsigned __int8)*(_DWORD *)(v9 + 36)) & 2) == 0
        && *((_DWORD *)v5 + 86) == *(_DWORD *)(v9 + 32) )
      {
        v12 = 0;
      }
    }
    v13 = (CTopLevelWindow *)*((_QWORD *)v5 + 48);
    *(_OWORD *)((char *)v5 + 312) = *(_OWORD *)v9;
    *(_OWORD *)((char *)v5 + 328) = *(_OWORD *)(v9 + 16);
    *((_QWORD *)v5 + 43) = *(_QWORD *)(v9 + 32);
    v14 = *(double *)v9;
    *((_QWORD *)v5 + 37) = *(_QWORD *)v9;
    if ( v13 && v10 )
    {
      CTopLevelWindow::OnSettingsUpdated(v13, 1);
      v14 = *((double *)v5 + 37);
    }
    v15 = 0;
    v8 = 0;
    v16 = v14;
    v17 = v14;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 76) - v17) & _xmm) > 0.0000011920929 )
    {
      *((float *)v5 + 76) = v17;
      v15 = 1;
    }
    if ( v14 == 1.0 )
    {
      if ( *((float *)v5 + 43) != 1.0 || *((float *)v5 + 44) != 1.0 )
      {
        *((_DWORD *)v5 + 44) = 1065353216;
        v15 = 1;
        *((_DWORD *)v5 + 43) = 1065353216;
      }
    }
    else
    {
      v29 = 0;
      v30 = 0;
      if ( *((_DWORD *)v5 + 47) - *((_DWORD *)v5 + 45) >= 0 )
        v29 = *((_DWORD *)v5 + 47) - *((_DWORD *)v5 + 45);
      v31 = v29 - *((_DWORD *)v5 + 62) - *((_DWORD *)v5 + 61);
      if ( *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46) >= 0 )
        v30 = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
      v32 = v30 - *((_DWORD *)v5 + 64) - *((_DWORD *)v5 + 63);
      if ( v32 && v31 )
      {
        v33 = PixelAligningFactor(v13, (unsigned int)v31, &v42, &v40);
        v35 = PixelAligningFactor(v34, (unsigned int)v32, v39, &v41);
        if ( v40 <= 0.02 && *(double *)&v41 <= 0.02 )
        {
          v36 = ((double)v31 / (double)v32 - v42 / v39[0]) / ((double)v31 / (double)v32);
          if ( v36 < 0.0 )
            *(_QWORD *)&v36 ^= _xmm;
          if ( v36 <= 0.02 )
          {
            v14 = v33;
            v16 = v35;
          }
        }
        v37 = v14;
        v38 = v16;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 43) - v37) & _xmm) > 0.0000011920929
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 44) - v38) & _xmm) > 0.0000011920929 )
        {
          *((float *)v5 + 43) = v37;
          v15 = 1;
          *((float *)v5 + 44) = v38;
        }
      }
    }
    v18 = *((_DWORD *)v5 + 47) - *((_DWORD *)v5 + 45);
    if ( v18 < 0 )
      v18 = 0;
    if ( *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46) >= 0 )
      v4 = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
    v19 = *((float *)v5 + 76);
    if ( v19 != 1.0 )
    {
      v18 = (int)floor_0((float)((float)v18 * v19) + 0.5);
      v4 = (int)floor_0((float)((float)v4 * v19) + 0.5);
    }
    *((_DWORD *)v5 + 14) = v18 + *((_DWORD *)v5 + 12);
    v20 = (CWindowList *)(unsigned int)(v4 + *((_DWORD *)v5 + 13));
    *((_DWORD *)v5 + 15) = (_DWORD)v20;
    if ( *((_QWORD *)v5 + 48) && (v22 = CWindowData::OnWindowSizeUpdated(v5), v8 = v22, v22 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0xD5Cu);
    }
    else if ( v15 || v12 )
    {
      CWindowList::OnClientMarginsChange(v20, v5);
      CWindowList::OnClientGlassChange(v23, v5);
      v24 = (CTopLevelWindow *)*((_QWORD *)v5 + 48);
      if ( v24 )
        CTopLevelWindow::OnWindowScaleUpdated(v24);
      v25 = (HWND)*((_QWORD *)v5 + 5);
      v41 = *(struct tagPOINT *)((char *)v5 + 48);
      LOBYTE(v40) = 0;
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
        v25,
        &v41);
      CAnimationScheduler::OnWindowPositionChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
        v5,
        v41,
        (bool *)&v40);
      if ( !LOBYTE(v40) )
        CWindowList::OnPositionChange(this, v5, 1);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x14EEu);
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0pddddd_EtwEventWriteTransfer(
        (_DWORD)v20,
        *((_DWORD *)v5 + 82),
        *((_QWORD *)v5 + 5),
        *((_DWORD *)v5 + 80),
        *((_DWORD *)v5 + 82),
        *((_DWORD *)v5 + 83),
        *((_DWORD *)v5 + 84),
        *((_DWORD *)v5 + 85));
    }
  }
LABEL_35:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v8;
}
