/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180033B74
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800339A0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18003675C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180008AB0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x180033CB0 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McTemplateU0pddddq_EtwEventWriteTransfer @ 0x1800ABCA0 (McTemplateU0pddddq_EtwEventWriteTransfer.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  struct tagRECT rcMonitor; // xmm6
  int v5; // ecx
  __int64 v6; // rcx
  char v7; // al
  int v8; // edx
  int v9; // ecx
  HMONITOR v10; // rax
  int v11; // ecx
  struct tagRECT v12; // xmm0
  struct tagRECT v13; // [rsp+48h] [rbp-9h] BYREF
  struct tagRECT v14; // [rsp+58h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+17h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  rcMonitor = 0LL;
  v13 = 0LL;
  if ( !v2 )
  {
    v10 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v10, &mi) )
    {
      rcMonitor = mi.rcMonitor;
      goto LABEL_4;
    }
    v12 = *(struct tagRECT *)((char *)a2 + 88);
LABEL_15:
    v14 = v12;
    CTransitionVisualController::GetMonitorRectFromRectImpl(&v14, &v13);
    rcMonitor = v13;
    goto LABEL_5;
  }
  v5 = v2 - 1;
  if ( v5 )
  {
    v11 = v5 - 1;
    if ( !v11 )
    {
      rcMonitor = *(struct tagRECT *)((char *)a2 + 104);
      goto LABEL_4;
    }
    if ( v11 != 1 )
      goto LABEL_5;
    v12 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 848LL);
    goto LABEL_15;
  }
  rcMonitor = *(struct tagRECT *)((char *)a2 + 88);
LABEL_4:
  v13 = rcMonitor;
LABEL_5:
  v6 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v6 + 978) )
  {
    v7 = CTransitionVisualController::_SetAnimationClipRegion(
           (CTransitionVisualController *)-v6,
           (struct CVisual *)((v6 + 8) & -(__int64)(v6 != 0)),
           &v13);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddq_EtwEventWriteTransfer(
        v9,
        v8,
        *((_QWORD *)a2 + 2),
        _mm_cvtsi128_si32((__m128i)rcMonitor),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 4)),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 8)),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)),
        v7);
  }
  *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 832LL) = rcMonitor;
}
