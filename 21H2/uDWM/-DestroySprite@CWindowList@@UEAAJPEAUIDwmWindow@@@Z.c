/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18000D0EC (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000F434 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180011594 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180012DC4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180014810 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180019374 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  CTopLevelWindow3D *v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-28h]
  CWindowData *v10; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v9 = 2269;
    goto LABEL_21;
  }
  v6 = v10;
  if ( v10 )
  {
    v7 = (CTopLevelWindow3D *)*((_QWORD *)v10 + 49);
    LOBYTE(v10) = 1;
    if ( !v7 )
      goto LABEL_6;
    SyncedWindowData = CTopLevelWindow3D::BeginDestroySprite(v7, (bool *)&v10);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v9 = 2275;
      goto LABEL_21;
    }
    if ( !(_BYTE)v10 )
    {
      *((_BYTE *)v6 + 608) |= 4u;
      if ( !*((_QWORD *)v6 + 52) && !CWindowData::IsImmersiveWindow(v6) && (int)CWindowData::SnapshotWindow(v6) >= 0 )
      {
        SyncedWindowData = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 5)
                                                                           + 16LL)
                                                             + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 5)
                                                                                + 16LL));
        v5 = SyncedWindowData;
        if ( SyncedWindowData < 0 )
        {
          v9 = 2298;
          goto LABEL_21;
        }
      }
      SyncedWindowData = CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 280), (__int64)v6);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v9 = 2302;
LABEL_21:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowData, v9);
        goto LABEL_8;
      }
    }
    else
    {
LABEL_6:
      CWindowList::ImmediateDestroySprite(this, v6);
    }
    if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    {
      SyncedWindowData = CWindowList::DestroyWindow(this, a2);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v9 = 2307;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0x8DEu);
  }
LABEL_8:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v5;
}
