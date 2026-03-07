_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 NonChildAncestor; // rax
  const struct tagWND *v8; // r13
  __int64 v10; // rdx
  BOOL v11; // r14d
  int v12; // ecx
  __int64 v13; // r15
  _QWORD *v14; // rdi
  __int64 DCEx; // rax
  __int64 v16; // rcx
  HDC v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rax
  _DWORD *v26; // r8
  int v27; // r15d
  unsigned int v28; // r12d
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ebx
  int DpiForSystem; // eax
  __int64 v33; // rdx
  unsigned int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  _BYTE *v39; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v41; // rcx
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned int v44; // edx
  _QWORD v46[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  __int64 v50; // [rsp+78h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-88h] BYREF
  __int64 v52; // [rsp+88h] [rbp-80h]
  struct tagTHREADINFO *v53; // [rsp+90h] [rbp-78h]
  __int128 v54; // [rsp+98h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-60h]
  __int128 v56; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-48h]
  _BYTE v58[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v46, 0LL);
  v47 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v5 = PtiCurrentShared(v4);
  v51 = 0LL;
  v53 = v5;
  if ( (gdwPUDFlags & 0x20000) == 0 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( *(_DWORD *)(ThreadWin32Thread + 632) > 0x400u || (*(_DWORD *)(ThreadWin32Thread + 648) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v8 = (const struct tagWND *)NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v10 = *(_QWORD *)(NonChildAncestor + 168);
          v47 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v46, v10);
          if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v46) )
          {
            v11 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
               && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 40LL) + 40LL) & 1) == 0;
            v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 40LL) + 40LL);
            if ( v2 )
            {
              if ( (v12 & 4) != 0 )
                return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v46);
              v13 = *(_QWORD *)(gpsi + 4752LL);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 40LL) + 40LL) |= 4u;
            }
            else
            {
              if ( (v12 & 4) == 0 )
                return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v46);
              if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 40LL) + 24LL) )
              {
                v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 40LL) + 24LL);
              }
              else if ( v11 )
              {
                v13 = *(_QWORD *)(gpsi + 4936LL);
              }
              else
              {
                v13 = *(_QWORD *)(gpsi + 4728LL);
              }
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 40LL) + 40LL) &= ~4u;
            }
            v49 = v13;
            v14 = *(_QWORD **)(*(_QWORD *)v46[0] + 88LL);
            DCEx = _GetDCEx(v8, 0LL, 65539LL);
            v16 = v47;
            v17 = (HDC)DCEx;
            if ( !v47 )
              v16 = *(_QWORD *)v46[0];
            *(_DWORD *)(*(_QWORD *)(v16 + 40) + 40LL) |= 0x200u;
            ThreadLock(v16, &v56);
            LODWORD(v48) = 0;
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 40LL) + 44LL) )
            {
              do
              {
                v18 = v47;
                if ( !v47 )
                  v18 = *(_QWORD *)v46[0];
                if ( (unsigned int)MNGetpItemIndex(v18, (__int64)v14) == -1 )
                  break;
                v19 = v47;
                if ( !v47 )
                  v19 = *(_QWORD *)v46[0];
                v21 = MNIsOwnerDrawItem(v19, v14);
                v52 = v14[11];
                v50 = v14[3];
                if ( v50 || v21 )
                {
                  if ( v21 )
                    DPIMETRICS = GetDPIMETRICS(v8);
                  else
                    DPIMETRICS = (const struct tagDPIMETRICS *)GetDPIMetrics(v20);
                  GreSelectFontInternal(v17, *(_QWORD *)DPIMETRICS, 1LL);
                  GreSetViewportOrg(v17);
                  if ( v2 && (*(_DWORD *)(*v14 + 4LL) & 0x100) != 0 )
                    v23 = *(_QWORD *)(gpsi + 4904LL);
                  else
                    v23 = v13;
                  GreSelectBrush(v17, v23);
                  if ( v21 )
                  {
                    xxxSendMenuDrawItemMessage((_DWORD)v17, 1, (unsigned int)v46, (_DWORD)v14, 0, 0, 0LL);
                  }
                  else
                  {
                    v25 = (_DWORD *)GetDPIMetrics(v24);
                    v26 = (_DWORD *)*v14;
                    v27 = v25[5];
                    if ( *(_DWORD *)(*v14 + 76LL) - v25[3] - v27 != 1 )
                      v27 += (unsigned int)(*(_DWORD *)(*v14 + 76LL) - v25[3] - v27 - 1) >> 1;
                    v28 = v25[2];
                    if ( (*v26 & 0x2000) != 0 )
                    {
                      xxxPSMGetTextExtent(v17, v50, (unsigned int)v26[12], &v51);
                      v29 = v47;
                      if ( !v47 )
                        v29 = *(_QWORD *)v46[0];
                      if ( (unsigned int)MNGetpItemIndex(v29, (__int64)v14) == -1 || v52 != v14[11] )
                        break;
                      v31 = *(_DWORD *)(*v14 + 72LL);
                      DpiForSystem = GetDpiForSystem(v30);
                      v28 = v31 - *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) - v51 + v28 - 2;
                    }
                    if ( (unsigned int)CALL_LPK(v53) )
                    {
                      if ( a2 )
                      {
                        v33 = *(unsigned int *)(gpsi + 4596LL);
                      }
                      else if ( v11 )
                      {
                        v33 = *(unsigned int *)(gpsi + 4688LL);
                      }
                      else
                      {
                        v33 = *(unsigned int *)(gpsi + 4584LL);
                      }
                      v34 = GreSetTextColor(v17, v33);
                      xxxPSMTextOut(v17, *(_DWORD *)(*v14 + 48LL), 0x200000);
                      v35 = v47;
                      if ( !v47 )
                        v35 = *(_QWORD *)v46[0];
                      if ( (unsigned int)MNGetpItemIndex(v35, (__int64)v14) == -1 || v52 != v14[11] )
                        break;
                      GreSetTextColor(v17, v34);
                    }
                    else
                    {
                      v55 = 0LL;
                      v36 = *v14;
                      v54 = 0LL;
                      v37 = *(_DWORD *)(v36 + 48);
                      if ( v37 < 0xFF )
                      {
                        v39 = v58;
                      }
                      else
                      {
                        v38 = Win32AllocPoolZInit(2LL * (v37 + 1), 1953657685LL);
                        v39 = (_BYTE *)v38;
                        if ( !v38 )
                          break;
                        PushW32ThreadLock(v38, &v54, (__int64)Win32FreePool);
                      }
                      PrefixCount = GetPrefixCount(
                                      v50,
                                      *(unsigned int *)(*v14 + 48LL),
                                      v39,
                                      *(unsigned int *)(*v14 + 48LL));
                      xxxDrawItemUnderline(v46, v14, v17, v28, v27, v39, PrefixCount);
                      if ( v39 != v58 )
                        PopAndFreeAlwaysW32ThreadLock((__int64)&v54);
                    }
                    v2 = a2;
                  }
                }
                v41 = v47;
                v42 = v48 + 1;
                LODWORD(v48) = v48 + 1;
                if ( !v47 )
                  v41 = *(_QWORD *)v46[0];
                v43 = MNGetpItemFromIndex(v41, v42);
                v13 = v49;
                v14 = (_QWORD *)v43;
              }
              while ( v44 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v46[0] + 40LL) + 44LL) );
            }
            ThreadUnlockMenuNoModify(&v56);
            _ReleaseDC(v17);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v46);
}
