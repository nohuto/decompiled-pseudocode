/*
 * XREFs of xxxSnapWindow @ 0x1C02281E8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxCloseClipboard @ 0x1C0011320 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00113CC (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00187B0 (ReferenceWindowStation.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     xxxPlayEventSound @ 0x1C00A7E50 (xxxPlayEventSound.c)
 *     xxxEmptyClipboard @ 0x1C00B935C (xxxEmptyClipboard.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     _SetClipboardData @ 0x1C01FDC4C (_SetClipboardData.c)
 *     ClientNoMemoryPopup @ 0x1C0205D40 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C0228088 (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C026BD8C (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C026DB7C (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(_QWORD *a1, int a2)
{
  __int64 CompatibleDC; // rdi
  char *v4; // r15
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // r12d
  unsigned int v18; // r13d
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  __int64 DCEx; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  HDC v26; // r14
  __int64 Bitmap; // rax
  char *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // [rsp+60h] [rbp-59h]
  __int128 v42; // [rsp+68h] [rbp-51h] BYREF
  __int64 v43; // [rsp+78h] [rbp-41h]
  __int128 v44; // [rsp+80h] [rbp-39h] BYREF
  __int64 v45; // [rsp+90h] [rbp-29h]
  __int128 v46; // [rsp+98h] [rbp-21h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-11h]
  __int128 v48; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v49; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v50; // [rsp+D0h] [rbp+17h]
  PVOID Object; // [rsp+130h] [rbp+77h] BYREF
  void *v53; // [rsp+138h] [rbp+7Fh] BYREF

  Object = 0LL;
  v45 = 0LL;
  CompatibleDC = 0LL;
  v47 = 0LL;
  v50 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v49 = 0LL;
  v43 = gptiCurrent;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon
    && ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) >= 0 )
  {
    v4 = (char *)Object;
    if ( (*((_DWORD *)Object + 16) & 4) == 0 && *(PVOID *)(a1[3] + 40LL) == Object )
    {
      while ( (*(_BYTE *)(a1[5] + 31LL) & 0x40) != 0 )
        a1 = (_QWORD *)a1[13];
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v6 = (void *)ReferenceDwmApiPort(v5);
        if ( (int)DwmAsyncSnapshotWindow(v6) < 0 )
          return 0;
        v10 = 1;
LABEL_48:
        xxxPlayEventSound(13LL, v7, v8, v9);
        return v10;
      }
      ThreadLock(a1, &v49);
      PushW32ThreadLock((__int64)v4, &v46, UserDereferenceObject);
      ObfReferenceObject(v4);
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
      *(_QWORD *)&v44 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v44;
      *((_QWORD *)&v44 + 1) = v11;
      if ( v11 )
        HMLockObject(v11);
      if ( (unsigned int)OpenClipboard(v11, 0LL) )
      {
        ThreadUnlock1(v13, v12, v14);
        xxxEmptyClipboard((void **)v4);
        v15 = a1[5];
        v16 = *gpDispInfo;
        v42 = *(_OWORD *)(v15 + 88);
        v48 = *(_OWORD *)(v16 + 24);
        if ( !(unsigned int)IntersectRect(&v42, (int *)&v42, (int *)&v48) )
        {
          v10 = 0;
          goto LABEL_45;
        }
        v17 = DWORD2(v42) - v42;
        v18 = HIDWORD(v42) - DWORD1(v42);
        LODWORD(v53) = DWORD1(v42);
        v41 = v42;
        if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
        {
          v21 = v19 - *(_DWORD *)(v15 + 88);
          LODWORD(v53) = v20 - *(_DWORD *)(v15 + 92);
          v41 = v21;
        }
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        v26 = (HDC)DCEx;
        if ( DCEx
          && (CompatibleDC = GreCreateCompatibleDC(DCEx)) != 0
          && (!*(_DWORD *)(gpsi + 2220LL)
            ? (Bitmap = GreCreateBitmap(v17, v18, 1LL, *(unsigned __int16 *)(gpDispInfo + 128LL), 0LL))
            : (Bitmap = GreCreateCompatibleBitmapInternal((__int64)v26, v17, v18, 0, 0LL, 0LL)),
              (v28 = (char *)Bitmap) != 0LL || (v28 = (char *)GreCreateBitmap(v17, v18, 1LL, 1LL, 0LL)) != 0LL) )
        {
          *(_QWORD *)&v42 = GreSelectBitmap(CompatibleDC, v28);
          if ( !a2
            && (v29 = *(_QWORD *)(v43 + 456), a1 == *(_QWORD **)(*(_QWORD *)(v29 + 8) + 24LL))
            && (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v29) )
          {
            LOBYTE(Object) = 1;
            GreEnableAppContainerRestriction(0LL);
          }
          else
          {
            LOBYTE(Object) = 0;
          }
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
            v10 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v17, v18, v26, v41, (int)v53, 1087111200, 0, 4);
            EnterCrit(1LL, 0LL);
          }
          else
          {
            v10 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v17, v18, v26, v41, (int)v53, 1087111200, 0, 0);
          }
          if ( (_BYTE)Object )
            GreEnableAppContainerRestriction(1LL);
          GreSelectBitmap(CompatibleDC, v42);
          if ( v10 )
          {
            SetClipboardData(2u, v28, 0, 1);
            if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
            {
              v53 = 0LL;
              Object = 0LL;
              if ( (int)CreateScreenPalette(v26, &v53, (__int64 *)&Object) >= 0 )
              {
                SetClipboardData(9u, (char *)Object, 0, 1);
                Win32FreePool(v53);
              }
            }
            v10 = 1;
          }
          else if ( v28 )
          {
            GreDeleteObject(v28);
          }
        }
        else
        {
          ClientNoMemoryPopup(v24, v23, v25);
          v10 = 0;
          if ( !v26 )
            goto LABEL_45;
        }
        _ReleaseDC(v26);
LABEL_45:
        xxxCloseClipboard((struct tagWINDOWSTATION *)v4);
        HMAssignmentUnlock(v4 + 112);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)&v46);
        ThreadUnlock1(v35, v34, v36);
        if ( !v10 )
          return v10;
        goto LABEL_48;
      }
      ThreadUnlock1(v13, v12, v14);
      PopAndFreeW32ThreadLock((__int64)&v46);
      ThreadUnlock1(v39, v38, v40);
    }
  }
  return 0LL;
}
