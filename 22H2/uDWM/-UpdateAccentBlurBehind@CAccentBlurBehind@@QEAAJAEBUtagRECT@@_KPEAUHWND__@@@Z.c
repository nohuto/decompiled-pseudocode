/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800021F0
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x1800020C0 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800025FC (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x1800026A8 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BE34 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180010F0C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180014F58 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016F14 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018ACC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FEE0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002496C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002C690 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A2F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B520 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentBlurBehind::UpdateAccentBlurBehind(
        struct CBaseLegacyMilBrushProxy **this,
        const struct tagRECT *a2,
        unsigned __int64 a3,
        HWND a4)
{
  int inserted; // eax
  int v9; // ebx
  _QWORD *v10; // r15
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  unsigned int v12; // r8d
  bool v13; // r9
  char v14; // cl
  struct _LIST_ENTRY *Blink; // rbp
  HWND v16; // rax
  CBaseObject *v17; // r14
  struct _LIST_ENTRY **p_Blink; // r12
  HWND v19; // rdx
  struct _LIST_ENTRY *v20; // rax
  CTopLevelWindow *Flink; // r14
  unsigned __int8 v22; // cl
  CTopLevelWindow *v23; // rcx
  int RectangleGeometry; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // r9d
  int v28; // r8d
  int v29; // eax
  CBaseObject *v30; // rbp
  int v31; // eax
  int v33; // r9d
  unsigned int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+20h] [rbp-98h]
  void *v37; // [rsp+28h] [rbp-90h]
  char v38; // [rsp+30h] [rbp-88h]
  CBaseObject *v40; // [rsp+40h] [rbp-78h] BYREF
  HWND ShellWindowForDesktop; // [rsp+48h] [rbp-70h]
  CBaseObject *v42; // [rsp+50h] [rbp-68h] BYREF
  struct _LIST_ENTRY *v43; // [rsp+58h] [rbp-60h]
  tagRECT rcDst; // [rsp+60h] [rbp-58h] BYREF

  v42 = 0LL;
  CVisual::SetInterpolationMode(this, 1LL);
  inserted = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v36 = 1526;
LABEL_58:
    v33 = inserted;
    goto LABEL_61;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource((CAccentBlurBehind *)this, a2);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v36 = 1527;
    goto LABEL_58;
  }
  if ( !a4 )
    goto LABEL_48;
  inserted = VisualCollection::RemoveAll((VisualCollection *)(this + 4));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v36 = 1542;
    goto LABEL_58;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[46], 0LL, 0, 1);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v36 = 1543;
    goto LABEL_58;
  }
  inserted = CRenderDataVisual::ClearInstructions(this[46]);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v36 = 1544;
    goto LABEL_58;
  }
  inserted = VisualCollection::RemoveAll((struct CBaseLegacyMilBrushProxy *)((char *)this[45] + 32));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v36 = 1545;
    goto LABEL_58;
  }
  v10 = this + 36;
  *((_DWORD *)this + 78) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 36, 8LL);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                            a3);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           a3);
  v14 = 0;
  v43 = WindowListForDesktop;
  v38 = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_48;
  v16 = a4;
  while ( 1 )
  {
    v17 = 0LL;
    p_Blink = &Blink[2].Blink;
    v19 = (HWND)Blink[2].Blink;
    v40 = 0LL;
    if ( v19 == v16 )
    {
      v14 = 1;
      v38 = 1;
      goto LABEL_20;
    }
    if ( v14 )
      break;
LABEL_20:
    Blink = Blink->Blink;
    if ( Blink == v43 )
      goto LABEL_48;
  }
  if ( v19 != ShellWindowForDesktop )
  {
    v20 = Blink[33].Blink;
    if ( !v20 || (HWND)v20[2].Blink != ShellWindowForDesktop )
    {
      if ( *((_DWORD *)this + 78) >= 0xAu
        || (Flink = (CTopLevelWindow *)Blink[24].Flink) == 0LL
        || (v22 = (unsigned __int8)Blink[38].Flink, (v22 & 1) == 0)
        || ((unsigned __int8)~(v22 >> 2) & (unsigned __int8)~(BYTE4(Blink[38].Flink) >> 1) & 1) == 0
        || (HIDWORD(Blink[6].Flink) & 0x20000000) != 0
        || !v19
        || v19 == *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 84)
        || (CTopLevelWindow::GetActualWindowRect(Flink, &rcDst, 0, 1, 0), !IntersectRect(&rcDst, &rcDst, a2)) )
      {
LABEL_19:
        v14 = v38;
        v16 = a4;
        goto LABEL_20;
      }
      RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(Flink, 0, v12, v13, &v40);
      v9 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        v36 = 1608;
      }
      else
      {
        v17 = v40;
        RectangleGeometry = VisualCollection::InsertRelative(
                              (struct CBaseLegacyMilBrushProxy *)((char *)this[45] + 32),
                              v40,
                              0LL,
                              1,
                              1);
        v9 = RectangleGeometry;
        if ( RectangleGeometry >= 0 )
        {
          v34 = *((_DWORD *)this + 78);
          v12 = v34 + 1;
          if ( v34 + 1 >= v34 )
          {
            if ( v12 > *((_DWORD *)this + 77) )
            {
              v35 = DynArrayImpl<0>::AddMultipleAndSet(this + 36, 8LL, 1LL, &Blink[2].Blink);
              v9 = v35;
              if ( v35 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xC0u, v37);
              if ( v9 < 0 )
                goto LABEL_79;
            }
            else
            {
              v9 = 0;
              *(_QWORD *)(*v10 + 8LL * v34) = *p_Blink;
              *((_DWORD *)this + 78) = v12;
            }
LABEL_71:
            if ( v17 )
              CBaseObject::Release(v17);
            goto LABEL_19;
          }
          v9 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v37);
LABEL_79:
          v36 = 1611;
LABEL_82:
          v33 = v9;
LABEL_61:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, v36, v37);
          goto LABEL_48;
        }
        v36 = 1610;
      }
LABEL_60:
      v33 = RectangleGeometry;
      goto LABEL_61;
    }
  }
  v23 = (CTopLevelWindow *)Blink[24].Flink;
  if ( v23 )
  {
    RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(v23, 0, v12, v13, &v40);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v36 = 1579;
      goto LABEL_60;
    }
    v17 = v40;
    RectangleGeometry = VisualCollection::InsertRelative(
                          (struct CBaseLegacyMilBrushProxy *)((char *)this[45] + 32),
                          v40,
                          0LL,
                          1,
                          1);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v36 = 1581;
      goto LABEL_60;
    }
    v25 = *((_DWORD *)this + 78);
    v12 = v25 + 1;
    if ( v25 + 1 < v25 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v37);
LABEL_81:
      v36 = 1582;
      goto LABEL_82;
    }
    if ( v12 <= *((_DWORD *)this + 77) )
    {
      v9 = 0;
      *(_QWORD *)(*v10 + 8LL * *((unsigned int *)this + 78)) = *p_Blink;
      *((_DWORD *)this + 78) = v12;
    }
    else
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet(this + 36, 8LL, 1LL, &Blink[2].Blink);
      v9 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u, v37);
      if ( v9 < 0 )
        goto LABEL_81;
    }
    if ( v17 )
    {
      CBaseObject::Release(v17);
      v17 = 0LL;
    }
  }
  if ( *p_Blink != (struct _LIST_ENTRY *)ShellWindowForDesktop )
    goto LABEL_71;
  if ( ((__int64)Blink[38].Flink & 1) != 0 && (BYTE1(Blink[38].Flink) & 0x20) != 0 && *((_DWORD *)this + 78) )
  {
    RectangleGeometry = (*(__int64 (__fastcall **)(struct CBaseLegacyMilBrushProxy *))(*(_QWORD *)this[45] + 64LL))(this[45]);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v36 = 1619;
      goto LABEL_60;
    }
    v27 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v27 = a2->bottom - a2->top;
    v28 = 0;
    if ( a2->right - a2->left >= 0 )
      v28 = a2->right - a2->left;
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(0, 0, v28, v27, this + 43);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v36 = 1624;
      goto LABEL_60;
    }
    v29 = CDrawGeometryInstruction::Create(this[42], this[43], &v42);
    v30 = v42;
    v9 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x65Eu, v37);
    }
    else
    {
      v31 = CRenderDataVisual::AddInstruction(this[46], v42);
      v9 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x660u, v37);
    }
    if ( v30 )
      CBaseObject::Release(v30);
  }
LABEL_48:
  if ( v9 < 0 )
  {
    VisualCollection::RemoveAll((struct CBaseLegacyMilBrushProxy *)((char *)this[45] + 32));
    *((_DWORD *)this + 78) = 0;
    DynArrayImpl<0>::ShrinkToSize(this + 36, 8LL);
  }
  return (unsigned int)v9;
}
