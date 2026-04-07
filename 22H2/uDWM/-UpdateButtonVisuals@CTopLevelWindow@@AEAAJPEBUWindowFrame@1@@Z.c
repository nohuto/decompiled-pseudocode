/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180024B24
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023290 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x1800099FC (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180024E94 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x180024F78 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180026338 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180026360 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18002648C (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180036DD0 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180086C4C (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CButton **this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  __int64 v10; // rbp
  int v11; // r14d
  int SystemMetricsForDpi; // r8d
  _DWORD *CurrentDefaultColorizationFlags; // rax
  __int64 WindowColorizationColor; // rax
  float v15; // xmm6_4
  char v16; // dl
  CButton *v17; // r10
  struct CBitmapSource **v18; // rbp
  int v19; // eax
  CButton *v20; // rcx
  int v21; // eax
  CButton *v22; // rcx
  int v23; // eax
  CButton *v24; // rcx
  unsigned int i; // edx
  int v27; // eax
  CVisual *v28; // rcx
  int v29; // eax
  CButton *v30; // rcx
  int v31; // eax
  CButton *v32; // rcx
  int v33; // eax
  CVisual *v34; // rcx
  CButton *v35; // rcx
  int v36; // eax
  char v37; // [rsp+70h] [rbp+18h] BYREF

  v4 = CTopLevelWindow::EnsureNonClientAreaButton(this, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x8F9u);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton(this, 2LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x8FAu);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton(this, 3LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x8FBu);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton(this, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x8FCu);
    return v5;
  }
  if ( *((_DWORD *)this + 172) == -1 )
  {
    v9 = *((_DWORD *)this[91] + 81);
    if ( v9 >= 192 )
      *((_DWORD *)this + 172) = 3;
    else
      *((_DWORD *)this + 172) = v9 >= MulDiv(96, 3, 2) ? 2 : v9 >= MulDiv(96, 5, 4);
    v10 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v11 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *((unsigned int *)this[91] + 81));
    if ( v11 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 172) + v10 + 216) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 172) = 0;
      for ( i = 0; i < 3; *((_DWORD *)this + 172) = i )
      {
        if ( v11 + *(_DWORD *)(**(_QWORD **)(320LL * (int)i + v10 + 536) + 28LL) > SystemMetricsForDpi )
          break;
        ++i;
      }
    }
  }
  if ( a2 )
  {
    CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v37);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(this, *CurrentDefaultColorizationFlags | 8u);
    if ( BYTE2(WindowColorizationColor)
       + 5 * BYTE1(WindowColorizationColor)
       + 2 * (unsigned int)(unsigned __int8)WindowColorizationColor <= 0x400
      && !CDesktopManager::IsHighContrastMode() )
    {
      IsPPIEdition();
    }
    v15 = FLOAT_1_0;
    if ( !CTopLevelWindow::TreatAsActiveWindow((CTopLevelWindow *)this) )
      v15 = FLOAT_0_40000001;
    v17 = this[62];
    v18 = &a2[40 * *((int *)this + 172) + 27];
    if ( v16 )
    {
      if ( v17 )
      {
        v19 = CButton::SetVisualStates(
                v17,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 148) & 0x800 | 0x200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v18 + (((_DWORD)this[74] & 0x40000) != 0 ? 128LL : 96LL)),
                a2[26],
                v15);
        v5 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x94Au);
          return v5;
        }
      }
      v20 = this[63];
      if ( v20 )
      {
        v21 = CButton::SetVisualStates(
                v20,
                (const struct CBitmapSourceArray *)(a2 + 1),
                (const struct CBitmapSourceArray *)((char *)v18 + (((_DWORD)this[74] & 0x20) != 0 ? 128LL : 64LL)),
                a2[26],
                v15);
        v5 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x956u);
          return v5;
        }
      }
      v22 = this[64];
      if ( v22 )
      {
        v23 = CButton::SetVisualStates(
                v22,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)(((_DWORD)this[74] & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)v18,
                a2[25],
                v15);
        v5 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x963u);
          return v5;
        }
        if ( (*((_BYTE *)this[91] + 608) & 0x40) != 0 )
        {
          v28 = this[64];
          *((_BYTE *)v28 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v28, 0x8000);
        }
      }
      v24 = this[61];
      if ( !v24 )
        return v5;
      v27 = CButton::SetVisualStates(
              v24,
              (const struct CBitmapSourceArray *)(a2 + 5),
              (const struct CBitmapSourceArray *)(v18 + 4),
              a2[26],
              v15);
      v5 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x972u);
        return v5;
      }
    }
    else
    {
      if ( v17 )
      {
        v29 = CButton::SetVisualStates(
                this[62],
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 148) & 0x800 | 0x1200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v18 + (((_DWORD)this[74] & 0x40000 | 0x200000uLL) >> 13)),
                a2[26],
                v15);
        v5 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x984u);
          return v5;
        }
      }
      v30 = this[63];
      if ( v30 )
      {
        v31 = CButton::SetVisualStates(
                v30,
                (const struct CBitmapSourceArray *)(a2 + 9),
                (const struct CBitmapSourceArray *)((char *)v18 + (((_DWORD)this[74] & 0x20) != 0 ? 288LL : 224LL)),
                a2[26],
                v15);
        v5 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x990u);
          return v5;
        }
      }
      v32 = this[64];
      if ( v32 )
      {
        v33 = CButton::SetVisualStates(
                v32,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)(((_DWORD)this[74] & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)(v18 + 20),
                a2[25],
                v15);
        v5 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x99Du);
          return v5;
        }
        if ( (*((_BYTE *)this[91] + 608) & 0x40) != 0 )
        {
          v34 = this[64];
          *((_BYTE *)v34 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v34, 0x8000);
        }
      }
      v35 = this[61];
      if ( !v35 )
        return v5;
      v36 = CButton::SetVisualStates(
              v35,
              (const struct CBitmapSourceArray *)(a2 + 13),
              (const struct CBitmapSourceArray *)(v18 + 24),
              a2[26],
              v15);
      v5 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x9ACu);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(this[61], (*((_DWORD *)this[91] + 89) & 8) != 0);
  }
  return v5;
}
