/*
 * XREFs of ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180046384
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800157E0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018ACC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x1800464BC (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x1800476F8 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047C48 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 */

__int64 __fastcall CWindowList::DesktopCreate(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  bool v6; // r15
  CWindowList *v7; // rcx
  int RootVisualForDesktop; // eax
  unsigned int v9; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  CContactManager *v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+28h] [rbp-29h]
  __int64 Buffer; // [rsp+38h] [rbp-19h] BYREF
  struct CVisual *v16; // [rsp+40h] [rbp-11h]
  __int128 v17; // [rsp+48h] [rbp-9h]
  __int128 v18; // [rsp+58h] [rbp+7h]
  __int128 v19; // [rsp+68h] [rbp+17h]
  __int64 v20; // [rsp+78h] [rbp+27h]
  char v21; // [rsp+80h] [rbp+2Fh]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v21 = 0;
  v4 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 8)) == 0;
  v17 = 0LL;
  v5 = *(_QWORD *)((char *)a2 + 4);
  v6 = v4;
  v19 = 0LL;
  v16 = 0LL;
  v20 = -1LL;
  v18 = 0LL;
  Buffer = v5;
  RootVisualForDesktop = CWindowList::CreateRootVisualForDesktop(
                           v7,
                           (struct CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY *)&Buffer);
  v9 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v14 = 6426;
LABEL_10:
    v13 = RootVisualForDesktop;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v14);
    goto LABEL_7;
  }
  RootVisualForDesktop = VisualCollection::InsertRelative(
                           (VisualCollection *)(*((_QWORD *)this + 10) + 32LL),
                           v16,
                           0LL,
                           0,
                           1);
  v9 = RootVisualForDesktop;
  if ( RootVisualForDesktop < 0 )
  {
    v14 = 6427;
    goto LABEL_10;
  }
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer, 0x60u, 0LL) )
  {
    v9 = -2147024882;
    v14 = 6430;
    v13 = -2147024882;
    goto LABEL_12;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *(_QWORD *)((char *)a2 + 4));
  WindowListForDesktop->Blink = WindowListForDesktop;
  WindowListForDesktop->Flink = WindowListForDesktop;
  if ( v6 )
    CContactManager::ForceAtlasInitialize(v11, *(_QWORD *)((char *)a2 + 4));
  CWindowList::GetGlobalLightSetForDesktop(this, *(_QWORD *)((char *)a2 + 4));
LABEL_7:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v9;
}
