/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C00E1F30
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0233D00 (xxxEndMenuLoop.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C00389C8 (GetNonChildAncestor.c)
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0044B0C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     MNGetpItemFromIndex @ 0x1C0048164 (MNGetpItemFromIndex.c)
 *     MNGetpItemIndex @ 0x1C0048370 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0048C58 (MNIsOwnerDrawItem.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     GetDPIMetrics @ 0x1C00E0DEC (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C00E1310 (GetAppCompatFlags2.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockMenuNoModify @ 0x1C010280C (ThreadLockMenuNoModify.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010748C (GetOemBitmapInfoForDpi.c)
 *     GreSetViewportOrg @ 0x1C010C7B8 (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0124E68 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     CALL_LPK @ 0x1C01594AC (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BFE4 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C025306C (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025EE64 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C02607E4 (xxxPSMGetTextExtent.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 NonChildAncestor; // rax
  struct tagWND *v6; // r13
  BOOL v8; // r14d
  int v9; // ecx
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 DCEx; // rax
  __int64 v13; // rcx
  HDC v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *DPIMetrics; // rax
  int v23; // r15d
  unsigned int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  unsigned int DpiForSystem; // eax
  int v29; // edx
  int v30; // ebx
  __int64 v31; // rcx
  _DWORD *v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rax
  _BYTE *v35; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 **v43[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h]
  PCWSTR SourceString; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+80h] [rbp-88h]
  __int64 v49; // [rsp+88h] [rbp-80h]
  __int64 v50; // [rsp+90h] [rbp-78h]
  __int128 v51; // [rsp+98h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h]
  __int128 v53; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-48h]
  _BYTE v55[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v43, 0LL);
  v44 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v48 = 0LL;
  v50 = ThreadWin32Thread;
  if ( (gdwPUDFlags & 0x20000) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000
    && (GetAppCompatFlags2(0x400u) & 2) == 0 )
  {
    NonChildAncestor = GetNonChildAncestor(a1);
    v6 = (struct tagWND *)NonChildAncestor;
    if ( NonChildAncestor )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
      {
        SmartObjStackRefBase<tagMENU>::operator=(v43);
        if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v43) )
        {
          v8 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
            && (*(_DWORD *)((*v43[0])[5] + 40) & 1) == 0;
          v9 = *(_DWORD *)((*v43[0])[5] + 40);
          if ( v2 )
          {
            if ( (v9 & 4) != 0 )
              return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
            v10 = *(_QWORD *)(gpsi + 4752LL);
            *(_DWORD *)((*v43[0])[5] + 40) |= 4u;
          }
          else
          {
            if ( (v9 & 4) == 0 )
              return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
            if ( *(_QWORD *)((*v43[0])[5] + 24) )
            {
              v10 = *(_QWORD *)((*v43[0])[5] + 24);
            }
            else if ( v8 )
            {
              v10 = *(_QWORD *)(gpsi + 4936LL);
            }
            else
            {
              v10 = *(_QWORD *)(gpsi + 4728LL);
            }
            *(_DWORD *)((*v43[0])[5] + 40) &= ~4u;
          }
          v46 = v10;
          v11 = (*v43[0])[11];
          DCEx = _GetDCEx(v6, 0LL, 65539LL);
          v13 = v44;
          v14 = (HDC)DCEx;
          if ( !v44 )
            v13 = (__int64)*v43[0];
          ThreadLockMenuNoModify(v13, &v53);
          LODWORD(v45) = 0;
          if ( *(_DWORD *)((*v43[0])[5] + 44) )
          {
            do
            {
              v15 = v44;
              if ( !v44 )
                v15 = (__int64)*v43[0];
              if ( (unsigned int)MNGetpItemIndex(v15, v11) == -1 )
                break;
              v17 = v44;
              if ( !v44 )
                v17 = (__int64)*v43[0];
              v19 = MNIsOwnerDrawItem(v17, (_DWORD **)v11, v16);
              v49 = *(_QWORD *)(v11 + 88);
              SourceString = *(PCWSTR *)(v11 + 24);
              if ( SourceString || v19 )
              {
                if ( v19 )
                  GetDPIMETRICS(v6);
                else
                  GetDPIMetrics(v18);
                GreSelectFont(v14);
                GreSetViewportOrg(v14);
                if ( v2 && (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 0x100) != 0 )
                  v20 = *(_QWORD *)(gpsi + 4904LL);
                else
                  v20 = v10;
                GreSelectBrush(v14, v20);
                if ( v19 )
                {
                  xxxSendMenuDrawItemMessage((__int64)v14, 1, v43, (__int64 *)v11, 0, 0, 0LL);
                }
                else
                {
                  DPIMetrics = (_DWORD *)GetDPIMetrics(v21);
                  v23 = DPIMetrics[5];
                  if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) - DPIMetrics[3] - v23 != 1 )
                    v23 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - DPIMetrics[3] - v23 - 1) >> 1;
                  v24 = DPIMetrics[2];
                  if ( (**(_DWORD **)v11 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(v14);
                    v25 = v44;
                    if ( !v44 )
                      v25 = (__int64)*v43[0];
                    if ( (unsigned int)MNGetpItemIndex(v25, v11) == -1 || v49 != *(_QWORD *)(v11 + 88) )
                      break;
                    v27 = *(_DWORD *)(*(_QWORD *)v11 + 72LL);
                    DpiForSystem = GetDpiForSystem(v26);
                    v24 = v27 - *(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4) - v48 + v24 - 2;
                  }
                  if ( (unsigned int)CALL_LPK(v50) )
                  {
                    if ( a2 )
                    {
                      v29 = *(_DWORD *)(gpsi + 4596LL);
                    }
                    else if ( v8 )
                    {
                      v29 = *(_DWORD *)(gpsi + 4688LL);
                    }
                    else
                    {
                      v29 = *(_DWORD *)(gpsi + 4584LL);
                    }
                    v30 = GreSetTextColor(v14, v29);
                    xxxPSMTextOut(v14, v24, v23, SourceString, *(_DWORD *)(*(_QWORD *)v11 + 48LL), 0x200000);
                    v31 = v44;
                    if ( !v44 )
                      v31 = (__int64)*v43[0];
                    if ( (unsigned int)MNGetpItemIndex(v31, v11) == -1 || v49 != *(_QWORD *)(v11 + 88) )
                      break;
                    GreSetTextColor(v14, v30);
                  }
                  else
                  {
                    v52 = 0LL;
                    v32 = *(_DWORD **)v11;
                    v51 = 0LL;
                    v33 = v32[12];
                    if ( v33 < 0xFF )
                    {
                      v35 = v55;
                    }
                    else
                    {
                      v34 = Win32AllocPool(2LL * (v33 + 1), 1953657685LL);
                      v35 = (_BYTE *)v34;
                      if ( !v34 )
                        break;
                      PushW32ThreadLock(v34, &v51, (__int64)Win32FreePool);
                      v32 = *(_DWORD **)v11;
                    }
                    PrefixCount = GetPrefixCount(SourceString, (unsigned int)v32[12], v35, (unsigned int)v32[12]);
                    xxxDrawItemUnderline(v43, v11, v14, v24, v23, v35, PrefixCount);
                    if ( v35 != v55 )
                      PopAndFreeAlwaysW32ThreadLock((__int64)&v51);
                  }
                  v2 = a2;
                }
              }
              v37 = v44;
              v38 = v45 + 1;
              LODWORD(v45) = v45 + 1;
              if ( !v44 )
                v37 = (__int64)*v43[0];
              v39 = MNGetpItemFromIndex(v37, v38);
              v10 = v46;
              v11 = v39;
            }
            while ( v40 < *(_DWORD *)((*v43[0])[5] + 44) );
          }
          v41 = *(_QWORD *)(*((_QWORD *)&v53 + 1) + 40LL);
          *(_DWORD *)(v41 + 40) &= ~0x200u;
          ThreadUnlock1(v41);
          _ReleaseDC(v14);
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
}
