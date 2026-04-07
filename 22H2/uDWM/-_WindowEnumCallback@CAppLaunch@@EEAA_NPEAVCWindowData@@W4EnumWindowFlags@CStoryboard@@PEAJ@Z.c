/*
 * XREFs of ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x180007E94 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180009074 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000ADB8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016130 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18002B47C (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180034854 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800AEFF0 (-GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800B0C3C (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800B1DAC (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B47D0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppLaunch::_WindowEnumCallback(__int64 a1, struct tagRECT *a2, char a3, int *a4)
{
  __int64 right; // r8
  CBaseObject *v9; // rbx
  __int16 v10; // ax
  unsigned int v11; // eax
  int v12; // edi
  int v13; // eax
  __int16 v14; // r8
  int PVLTarget; // eax
  int v16; // eax
  __int16 v17; // r8
  int v18; // eax
  int v19; // eax
  struct tagRECT v20; // xmm6
  struct tagPOINT *v21; // rcx
  struct tagRECT *v22; // rcx
  char result; // al
  struct tagRECT v24; // [rsp+50h] [rbp-38h] BYREF
  CBaseObject *v25; // [rsp+98h] [rbp+10h] BYREF

  CGroupingStoryboard::_WindowEnumCallback();
  right = (unsigned int)a2[38].right;
  v9 = 0LL;
  v10 = a2[38].right;
  v25 = 0LL;
  v11 = v10 & 0xFFF;
  v12 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_27;
    if ( v11 == 1 )
    {
      *(_BYTE *)(a1 + 168) = 1;
    }
    else if ( v11 <= 2 || v11 > 4 )
    {
      goto LABEL_27;
    }
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_25;
  }
  if ( v11 == 1 )
    goto LABEL_7;
  if ( v11 <= 2 )
    goto LABEL_27;
  if ( v11 <= 4 )
    goto LABEL_7;
  if ( v11 != 22 )
  {
    if ( v11 != 30 )
      goto LABEL_27;
LABEL_7:
    v13 = CGroupingStoryboard::_Create3DComponent((CGroupingStoryboard *)a1, (struct CWindowData *)a2, right);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x94Eu);
    goto LABEL_27;
  }
  if ( !ContainsRect((const struct tagRECT *)(a1 + 152), a2 + 3) )
    goto LABEL_27;
  if ( *(_BYTE *)(a1 + 168) )
  {
    PVLTarget = CAppLaunch::GetPVLTarget(a1, v14);
    v16 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            PVLTarget,
            1,
            &v25);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x958u);
    goto LABEL_13;
  }
  if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2) )
    goto LABEL_27;
  v18 = CAppLaunch::GetPVLTarget(a1, v17);
  v19 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          (CStoryboard *)a1,
          (struct CWindowData *)a2,
          0,
          v18,
          0LL,
          0LL,
          0xFFFFFFFF,
          1,
          &v25);
  v12 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x95Eu);
LABEL_13:
    v9 = v25;
    goto LABEL_25;
  }
  v9 = v25;
  v21 = (struct tagPOINT *)*((_QWORD *)v25 + 5);
  v24 = *(struct tagRECT *)((char *)v25 + 88);
  v20 = v24;
  CAnimatedTransitionVisual::SetBeginRect(v21, &v24);
  v22 = (struct tagRECT *)*((_QWORD *)v9 + 5);
  v22[54] = v20;
  CVisual::SetDirtyFlags((CVisual *)&v22->right, 4096);
LABEL_25:
  if ( v9 )
    CBaseObject::Release(v9);
LABEL_27:
  result = 1;
  *a4 = v12;
  return result;
}
