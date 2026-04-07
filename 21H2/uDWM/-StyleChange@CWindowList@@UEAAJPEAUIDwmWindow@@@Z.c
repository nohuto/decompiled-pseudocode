/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F570
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18000D0EC (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000F940 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800106F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabShell@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180013884 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180013D98 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015F18 (--0CWindowData@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016B00 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001930C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18003E5E8 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18003F440 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004506C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081394 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  struct CWindowData *v6; // rbx
  int v7; // ebx
  int v8; // r13d
  int v9; // eax
  bool v10; // r8
  int v11; // ebp
  char v12; // al
  char v13; // al
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  CWindowIconic *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  bool v21; // al
  char v22; // si
  bool v23; // r14
  struct _RTL_GENERIC_TABLE *v24; // r15
  char v25; // r12
  char v26; // si
  unsigned __int8 v27; // si
  __int64 v28; // r8
  __int64 v30; // r8
  int v31; // eax
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *i; // r14
  CWindowData *v34; // rax
  CWindowData *v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // eax
  int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 Buffer; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v34 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( !v34 || (v35 = CWindowData::CWindowData(v34), (v6 = v35) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x88Bu);
    v7 = -2147024882;
    goto LABEL_57;
  }
  *((_QWORD *)v35 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v35);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v36 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v36;
  if ( v36 >= 0 )
LABEL_2:
    v4 = (__int64)v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x88Fu);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_57:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xDE7u);
    goto LABEL_29;
  }
  if ( !v4 )
    goto LABEL_29;
  v8 = *(_DWORD *)(v4 + 100);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = v9;
  if ( (v8 & 0x20000000) != 0 )
  {
    if ( (v9 & 0x20000000) == 0 )
    {
      CWindowData::ClearSnapshot((CWindowData *)v4, 0, v10, 0);
      if ( *(_QWORD *)(v4 + 400) )
      {
        LOBYTE(v30) = 1;
        v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 65)
                                                                 + 72LL))(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
                *(_QWORD *)(v4 + 40),
                v30);
        if ( v37 < 0 )
        {
          v38 = 3572LL;
LABEL_62:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v38,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v37,
            v43);
        }
      }
    }
  }
  else if ( (v9 & 0x20000000) != 0 )
  {
    if ( *(_QWORD *)(v4 + 400) )
    {
      v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 65)
                                                              + 72LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
              *(_QWORD *)(v4 + 40),
              0LL);
      if ( v37 < 0 )
      {
        v38 = 3579LL;
        goto LABEL_62;
      }
    }
  }
  *(_DWORD *)(v4 + 100) = v11;
  *(_DWORD *)(v4 + 104) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *(_DWORD *)(v4 + 108) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
  *(_BYTE *)(v4 + 608) &= ~8u;
  *(_BYTE *)(v4 + 608) |= 8 * (v12 & 1);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
  *(_BYTE *)(v4 + 608) &= ~0x80u;
  v14 = *(_QWORD *)(v4 + 384);
  *(_BYTE *)(v4 + 608) |= v13 << 7;
  if ( !v14 )
    goto LABEL_17;
  v15 = *(_DWORD *)(v14 + 80);
  if ( (v15 & 0x8000) == 0 )
  {
    v16 = *(_QWORD *)(v14 + 24);
    for ( *(_DWORD *)(v14 + 80) = v15 | 0x8000; v16; v16 = *(_QWORD *)(v16 + 24) )
    {
      if ( (*(_BYTE *)(v16 + 80) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    }
  }
  v17 = *(_QWORD *)(v14 + 824);
  v7 = 0;
  if ( v17 )
  {
    v39 = *(_QWORD *)(v14 + 728);
    if ( v39 )
    {
      v40 = 3LL;
      if ( *(_QWORD *)(v39 + 368) || *(char *)(v39 + 609) >= 0 || (*(_DWORD *)(v39 + 104) & 0x200000) != 0 )
        v40 = 1LL;
      v41 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v40);
      v7 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x16ACu);
LABEL_72:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5CEu);
        goto LABEL_13;
      }
      v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 24LL)
                                              + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 24LL));
      v7 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x16ADu);
        goto LABEL_72;
      }
    }
  }
LABEL_13:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1D19u);
  }
  else
  {
    v18 = *(CWindowIconic **)(v4 + 424);
    if ( v18 )
    {
      v31 = CWindowIconic::OnWindowStyleUpdated(v18, 1);
      v7 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x1D1Eu);
    }
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xE07u);
    goto LABEL_29;
  }
  v19 = CTopLevelWindow3D::OnWindowStyleUpdated(*(CTopLevelWindow3D **)(v4 + 392));
  v7 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xE08u);
    goto LABEL_29;
  }
LABEL_17:
  v20 = *(_QWORD *)(v4 + 536);
  v21 = v20 && (*(_BYTE *)(v20 + 610) & 1) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR((CWindowData *)v4);
  if ( ((*(_BYTE *)(v4 + 610) & 2) != 0) != v21 )
    CWindowData::UpdateOwnerLists((CWindowData *)v4, (*(_BYTE *)(v4 + 610) & 2) == 0);
  v22 = *(_BYTE *)(v4 + 609);
  v23 = (*(_DWORD *)(v4 + 100) & 0x11000000) == 0x11000000 && *(_QWORD *)(v4 + 32);
  v24 = (struct _RTL_GENERIC_TABLE *)((char *)this + 392);
  v25 = RtlIsGenericTableEmpty(v24) == 0;
  *(_BYTE *)(v4 + 609) &= ~2u;
  v26 = v22 & 2;
  *(_BYTE *)(v4 + 609) |= 2 * v23;
  if ( !v23 )
  {
    if ( !v26 )
      goto LABEL_25;
LABEL_38:
    if ( !v23 )
    {
      Buffer = v4;
      RtlDeleteElementGenericTable(v24, &Buffer);
    }
    goto LABEL_25;
  }
  if ( v26 )
    goto LABEL_38;
  CGenericSet<CWindowData *>::Add(v24, v4);
LABEL_25:
  v27 = RtlIsGenericTableEmpty(v24) == 0;
  if ( v25 != v27 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)(v4 + 120));
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v27;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE1(i[38].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v27, 0LL);
      }
    }
  }
  if ( ((v8 ^ v11) & 0x20000000) != 0 )
    CWindowData::NotifyRepresentationChanged((CWindowData *)v4);
  LOBYTE(v28) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabShell>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TabShell>::GetImpl'::`2'::impl,
    0LL,
    v28);
LABEL_29:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v7;
}
