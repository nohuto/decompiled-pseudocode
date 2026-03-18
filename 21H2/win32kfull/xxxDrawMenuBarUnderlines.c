/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C011CE5C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C022D580 (xxxEndMenuLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     GreSetViewportOrg @ 0x1C00BD02C (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C00BD238 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00BE738 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C00BF45C (MNIsOwnerDrawItem.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0247410 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0250058 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025BA88 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C025D454 (xxxPSMGetTextExtent.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 NonChildAncestor; // rax
  const struct tagWND *v7; // r13
  __int64 v9; // rdx
  BOOL v10; // r14d
  int v11; // ecx
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 DCEx; // rax
  __int64 v15; // rcx
  HDC v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 *DPIMETRICS; // rax
  int v25; // r8d
  int v26; // edx
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // rax
  int v32; // r15d
  unsigned int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ebx
  int DpiForSystem; // eax
  int v38; // edx
  int v39; // ebx
  __int64 v40; // rcx
  _DWORD *v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  _BYTE *v44; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 *v51[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A8h]
  __int64 v53; // [rsp+68h] [rbp-A0h]
  __int64 v54; // [rsp+70h] [rbp-98h]
  __int64 v55; // [rsp+78h] [rbp-90h]
  __int64 v56; // [rsp+80h] [rbp-88h]
  __int64 v57; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+90h] [rbp-78h]
  __int128 v59; // [rsp+98h] [rbp-70h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-60h]
  __int128 v61; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-48h]
  _BYTE v63[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v51, 0LL);
  v52 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v56 = 0LL;
  v58 = ThreadWin32Thread;
  if ( (gdwPUDFlags & 0x20000) == 0 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000 )
  {
    v5 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(v5 + 632) > 0x400u || (*(_DWORD *)(v5 + 648) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v7 = (const struct tagWND *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v9 = *(_QWORD *)(NonChildAncestor + 168);
          v52 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=((__int64)v51, v9);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v51) )
          {
            v10 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
               && (*(_DWORD *)(*(_QWORD *)(*v51[0] + 40) + 40LL) & 1) == 0;
            v11 = *(_DWORD *)(*(_QWORD *)(*v51[0] + 40) + 40LL);
            if ( v2 )
            {
              if ( (v11 & 4) != 0 )
                return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v51);
              v12 = *(_QWORD *)(gpsi + 4752LL);
              *(_DWORD *)(*(_QWORD *)(*v51[0] + 40) + 40LL) |= 4u;
            }
            else
            {
              if ( (v11 & 4) == 0 )
                return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v51);
              if ( *(_QWORD *)(*(_QWORD *)(*v51[0] + 40) + 24LL) )
              {
                v12 = *(_QWORD *)(*(_QWORD *)(*v51[0] + 40) + 24LL);
              }
              else if ( v10 )
              {
                v12 = *(_QWORD *)(gpsi + 4936LL);
              }
              else
              {
                v12 = *(_QWORD *)(gpsi + 4728LL);
              }
              *(_DWORD *)(*(_QWORD *)(*v51[0] + 40) + 40LL) &= ~4u;
            }
            v54 = v12;
            v13 = *(_QWORD *)(*v51[0] + 88);
            DCEx = _GetDCEx(v7, 0LL, 65539LL);
            v15 = v52;
            v16 = (HDC)DCEx;
            if ( !v52 )
              v15 = *v51[0];
            *(_DWORD *)(*(_QWORD *)(v15 + 40) + 40LL) |= 0x200u;
            ThreadLock(v15, (__int64 *)&v61);
            LODWORD(v53) = 0;
            if ( *(_DWORD *)(*(_QWORD *)(*v51[0] + 40) + 44LL) )
            {
              do
              {
                v19 = v52;
                if ( !v52 )
                  v19 = *v51[0];
                if ( (unsigned int)MNGetpItemIndex(v19, v13) == -1 )
                  break;
                v20 = v52;
                if ( !v52 )
                  v20 = *v51[0];
                v23 = MNIsOwnerDrawItem(v20, (_DWORD **)v13);
                v57 = *(_QWORD *)(v13 + 88);
                v55 = *(_QWORD *)(v13 + 24);
                if ( v55 || v23 )
                {
                  if ( v23 )
                  {
                    DPIMETRICS = (__int64 *)GetDPIMETRICS(v7);
                    GreSelectFontInternal(v16, *DPIMETRICS, 1);
                    v25 = 0;
                    v26 = 0;
                  }
                  else
                  {
                    v27 = (__int64 *)GetDPIMetrics(v22, v21);
                    GreSelectFontInternal(v16, *v27, 1);
                    v25 = *(_DWORD *)(*(_QWORD *)v13 + 68LL);
                    v26 = *(_DWORD *)(*(_QWORD *)v13 + 64LL);
                  }
                  GreSetViewportOrg(v16, v26, v25);
                  if ( v2 && (*(_DWORD *)(*(_QWORD *)v13 + 4LL) & 0x100) != 0 )
                    v28 = *(_QWORD *)(gpsi + 4904LL);
                  else
                    v28 = v12;
                  GreSelectBrush(v16, v28);
                  if ( v23 )
                  {
                    xxxSendMenuDrawItemMessage((__int64)v16, 1, v51, v13, 0, 0, 0LL);
                  }
                  else
                  {
                    v31 = (_DWORD *)GetDPIMetrics(v30, v29);
                    v32 = v31[5];
                    if ( *(_DWORD *)(*(_QWORD *)v13 + 76LL) - v31[3] - v32 != 1 )
                      v32 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v13 + 76LL) - v31[3] - v32 - 1) >> 1;
                    v33 = v31[2];
                    if ( (**(_DWORD **)v13 & 0x2000) != 0 )
                    {
                      xxxPSMGetTextExtent(v16);
                      v34 = v52;
                      if ( !v52 )
                        v34 = *v51[0];
                      if ( (unsigned int)MNGetpItemIndex(v34, v13) == -1 || v57 != *(_QWORD *)(v13 + 88) )
                        break;
                      v36 = *(_DWORD *)(*(_QWORD *)v13 + 72LL);
                      DpiForSystem = GetDpiForSystem(v35, v17);
                      v33 = v36 - *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) - v56 + v33 - 2;
                    }
                    if ( (unsigned int)CALL_LPK(v58) )
                    {
                      if ( a2 )
                      {
                        v38 = *(_DWORD *)(gpsi + 4596LL);
                      }
                      else if ( v10 )
                      {
                        v38 = *(_DWORD *)(gpsi + 4688LL);
                      }
                      else
                      {
                        v38 = *(_DWORD *)(gpsi + 4584LL);
                      }
                      v39 = GreSetTextColor(v16, v38);
                      xxxPSMTextOut(v16, *(_DWORD *)(*(_QWORD *)v13 + 48LL), 0x200000);
                      v40 = v52;
                      if ( !v52 )
                        v40 = *v51[0];
                      if ( (unsigned int)MNGetpItemIndex(v40, v13) == -1 || v57 != *(_QWORD *)(v13 + 88) )
                        break;
                      GreSetTextColor(v16, v39);
                    }
                    else
                    {
                      v60 = 0LL;
                      v41 = *(_DWORD **)v13;
                      v59 = 0LL;
                      v42 = v41[12];
                      if ( v42 < 0xFF )
                      {
                        v44 = v63;
                      }
                      else
                      {
                        v43 = Win32AllocPoolZInit(2LL * (v42 + 1), 1953657685LL);
                        v44 = (_BYTE *)v43;
                        if ( !v43 )
                          break;
                        PushW32ThreadLock(v43, &v59, (__int64)Win32FreePool);
                        v41 = *(_DWORD **)v13;
                      }
                      PrefixCount = GetPrefixCount(v55, (unsigned int)v41[12], v44, (unsigned int)v41[12]);
                      xxxDrawItemUnderline(v51, v13, v16, v33, v32, v44, PrefixCount);
                      if ( v44 != v63 )
                        PopAndFreeAlwaysW32ThreadLock((__int64)&v59);
                    }
                    v2 = a2;
                  }
                }
                v46 = v52;
                v47 = v53 + 1;
                LODWORD(v53) = v53 + 1;
                if ( !v52 )
                  v46 = *v51[0];
                v48 = MNGetpItemFromIndex(v46, v47);
                v12 = v54;
                v13 = v48;
              }
              while ( (unsigned int)v17 < *(_DWORD *)(*(_QWORD *)(*v51[0] + 40) + 44LL) );
            }
            v49 = *(_QWORD *)(*((_QWORD *)&v61 + 1) + 40LL);
            *(_DWORD *)(v49 + 40) &= ~0x200u;
            ThreadUnlock1(v49, v17, v18);
            _ReleaseDC(v16);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v51);
}
