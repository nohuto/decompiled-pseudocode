/*
 * XREFs of DirtyVisRgnTrackers @ 0x1C00F319C
 * Callers:
 *     InternalInvalidate3 @ 0x1C0034D50 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C005A330 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00645A0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00649F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxGetSystemMenu @ 0x1C0067088 (xxxGetSystemMenu.c)
 *     SelectWindowRgn @ 0x1C0077C08 (SelectWindowRgn.c)
 *     xxxDoPaint @ 0x1C008BD2C (xxxDoPaint.c)
 *     NtUserEndPaint @ 0x1C00964C0 (NtUserEndPaint.c)
 *     xxxSetClassData @ 0x1C00ADD68 (xxxSetClassData.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C85B8 (DecomposeWindowIfNeeded.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     CreateVisRgnTracker @ 0x1C00CD0F8 (CreateVisRgnTracker.c)
 *     xxxBeginPaint @ 0x1C00CDA00 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00CE0C0 (xxxInternalDoSyncPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00CE8F8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ComposeWindowIfNeeded @ 0x1C00D3A58 (ComposeWindowIfNeeded.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     OffsetChildren @ 0x1C00F147C (OffsetChildren.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C010ACC0 (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0118654 (xxxSimpleDoSyncPaint.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 *     xxxEnableMenuItem @ 0x1C0221F90 (xxxEnableMenuItem.c)
 * Callees:
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00A609C (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00F3470 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

void __fastcall DirtyVisRgnTrackers(__int64 a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rcx
  char v12; // r14
  __int64 v13; // rax
  CVisRgnTrackerProp *Prop; // rax
  __int64 v15; // rdi
  __int64 AlignmentRequirement_low; // r15
  PERESOURCE *v17; // rax
  int v18; // esi
  tagObjLock **v19; // rdi
  __int64 v20; // rdi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v22; // rax
  struct tagWND *i; // rdi
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  char v25; // [rsp+60h] [rbp-20h]
  char v26; // [rsp+68h] [rbp-18h]

  if ( a1 )
  {
    v1 = (struct tagWND *)a1;
    v2 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v2 )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(v2 + 8) + 64LL) & 1) != 0 && (*(_DWORD *)(a1 + 320) & 0x2000000) != 0 )
      {
        v3 = *(_QWORD **)(a1 + 104);
        v4 = v3;
        if ( v3 )
        {
          while ( 1 )
          {
            v5 = v4[5];
            v6 = *(_BYTE *)(v5 + 31);
            if ( (v6 & 0x10) == 0 || (v6 & 0x20) != 0 && v4 != v3 )
              break;
            if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0x29D )
            {
              v4 = (_QWORD *)v4[13];
              if ( v4 )
                continue;
            }
            goto LABEL_11;
          }
        }
        else
        {
LABEL_11:
          EtwTraceDwmVisRgnDirty(*(_QWORD *)v1, *v3);
          v9 = *((_QWORD *)v1 + 13);
          v10 = (__int64 *)((char *)v1 + 24);
          if ( !v9 )
            goto LABEL_17;
          v11 = *v10;
          v7 = 0LL;
          if ( *v10 )
          {
            v11 = *(_QWORD *)(v11 + 8);
            if ( v11 )
              v7 = *(_QWORD *)(v11 + 24);
          }
          if ( v9 == v7 )
          {
            v12 = 1;
          }
          else
          {
LABEL_17:
            v11 = *v10;
            v12 = 0;
            if ( (!*v10 || (v13 = *(_QWORD *)(v11 + 8)) == 0 || v1 != *(struct tagWND **)(v13 + 24))
              && (*(_BYTE *)(v3[5] + 31LL) & 2) != 0 )
            {
              Prop = (CVisRgnTrackerProp *)GetProp((__int64)v3, LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1LL, v8);
              if ( Prop )
                CVisRgnTrackerProp::MarkDirty(Prop);
            }
          }
          v15 = *((_QWORD *)v1 + 18);
          AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
          v24 = 0LL;
          v25 = 0;
          v26 = 0;
          v17 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v11, v7, v9, v8);
          if ( ExIsResourceAcquiredExclusiveLite(*v17) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
          {
            v26 = 1;
            if ( v15 == gObjDummyLock )
              v15 = 0LL;
            *(_QWORD *)&v24 = v15;
            v18 = 0;
            v19 = (tagObjLock **)&v24;
            do
            {
              if ( *v19 )
                tagObjLock::LockExclusive(*v19);
              ++v18;
              ++v19;
            }
            while ( !v18 );
            v25 = 1;
          }
          v20 = RealGetProp(*((_QWORD *)v1 + 18), AlignmentRequirement_low, 1LL);
          if ( v26 && v25 )
          {
            if ( (_QWORD)v24 )
              tagObjLock::UnLockExclusive((tagObjLock *)v24);
            v25 = 0;
          }
          if ( v20 && !*(_BYTE *)(v20 + 73) )
          {
            *(_BYTE *)(v20 + 73) = 1;
            Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            v22 = (struct _LIST_ENTRY *)(v20 + 24);
            if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
              __fastfail(3u);
            v22->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
            *(_QWORD *)(v20 + 32) = &CVisRgnTrackerProp::s_DirtyList;
            Flink->Blink = v22;
            CVisRgnTrackerProp::s_DirtyList.Flink = (struct _LIST_ENTRY *)(v20 + 24);
          }
          for ( i = (struct tagWND *)*((_QWORD *)v1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
            MarkDirtyWorker(i);
          if ( !v12 )
          {
            while ( 1 )
            {
              v1 = (struct tagWND *)*((_QWORD *)v1 + 11);
              if ( !v1 )
                break;
              if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 31LL) & 0x14) == 0x14 )
                MarkDirtyWorker(v1);
            }
          }
        }
      }
    }
  }
}
