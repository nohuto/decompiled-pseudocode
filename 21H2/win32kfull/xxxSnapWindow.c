/*
 * XREFs of xxxSnapWindow @ 0x1C023F848
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     xxxEmptyClipboard @ 0x1C00C9B80 (xxxEmptyClipboard.c)
 *     _OpenClipboard @ 0x1C00CCE18 (_OpenClipboard.c)
 *     xxxCloseClipboard @ 0x1C00CCFD0 (xxxCloseClipboard.c)
 *     ReferenceWindowStation @ 0x1C00CD2D0 (ReferenceWindowStation.c)
 *     xxxPlayEventSound @ 0x1C01088E0 (xxxPlayEventSound.c)
 *     _SetClipboardData @ 0x1C014613C (_SetClipboardData.c)
 *     ClientNoMemoryPopup @ 0x1C0222ACC (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C023F6E8 (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C02714B4 (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C0273000 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(_QWORD *a1, int a2)
{
  HDC CompatibleDC; // rdi
  char *v4; // r15
  __int64 v5; // rcx
  void *v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  int v17; // edx
  int v18; // r8d
  LONG v19; // edx
  __int64 DCEx; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  HDC v25; // r14
  __int64 Bitmap; // rax
  char *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  LONG v36; // [rsp+60h] [rbp-59h]
  __int128 v37; // [rsp+68h] [rbp-51h] BYREF
  __int64 v38; // [rsp+78h] [rbp-41h]
  __int128 v39; // [rsp+80h] [rbp-39h] BYREF
  __int64 v40; // [rsp+90h] [rbp-29h]
  __int128 v41; // [rsp+98h] [rbp-21h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-11h]
  __int128 v43; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v44; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v45; // [rsp+D0h] [rbp+17h]
  PVOID Object; // [rsp+130h] [rbp+77h] BYREF
  __int64 v48; // [rsp+138h] [rbp+7Fh] BYREF

  Object = 0LL;
  v40 = 0LL;
  CompatibleDC = 0LL;
  v42 = 0LL;
  v45 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  v44 = 0LL;
  v38 = gptiCurrent;
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
        v7 = 1;
LABEL_48:
        xxxPlayEventSound(13LL);
        return v7;
      }
      ThreadLock((__int64)a1, (__int64 *)&v44);
      PushW32ThreadLock((__int64)v4, &v41, UserDereferenceObject);
      ObfReferenceObject(v4);
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
      *(_QWORD *)&v39 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v39;
      *((_QWORD *)&v39 + 1) = v8;
      if ( v8 )
        HMLockObject(v8);
      if ( (unsigned int)OpenClipboard(v8, 0LL) )
      {
        ThreadUnlock1(v10, v9, v11);
        xxxEmptyClipboard((struct tagWINDOWSTATION *)v4);
        v12 = a1[5];
        v13 = *gpDispInfo;
        v37 = *(_OWORD *)(v12 + 88);
        v43 = *(_OWORD *)(v13 + 24);
        if ( !(unsigned int)IntersectRect(&v37, (int *)&v37, (int *)&v43) )
        {
          v7 = 0;
          goto LABEL_45;
        }
        v15 = DWORD2(v37) - v37;
        v16 = HIDWORD(v37) - DWORD1(v37);
        LODWORD(v48) = DWORD1(v37);
        v36 = v37;
        if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
        {
          v19 = v17 - *(_DWORD *)(v12 + 88);
          LODWORD(v48) = v18 - *(_DWORD *)(v12 + 92);
          v36 = v19;
        }
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        v25 = (HDC)DCEx;
        if ( DCEx
          && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx, v21, v23, v24)) != 0LL
          && (!*(_DWORD *)(gpsi + 2220LL)
            ? (Bitmap = GreCreateBitmap(v15, v16, 1LL, *(unsigned __int16 *)(gpDispInfo + 128LL), 0LL))
            : (Bitmap = GreCreateCompatibleBitmapInternal(v25, v15, v16, 0, 0LL, 0LL)),
              (v27 = (char *)Bitmap) != 0LL || (v27 = (char *)GreCreateBitmap(v15, v16, 1LL, 1LL, 0LL)) != 0LL) )
        {
          *(_QWORD *)&v37 = GreSelectBitmap(CompatibleDC, v27);
          if ( !a2
            && a1 == *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v38 + 456) + 8LL) + 24LL)
            && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
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
            UserSessionSwitchLeaveCrit(v28);
            v7 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v15, v16, v25, v36, v48, 1087111200, 0, 4);
            EnterCrit(1LL, 0LL);
          }
          else
          {
            v7 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v15, v16, v25, v36, v48, 1087111200, 0, 0);
          }
          if ( (_BYTE)Object )
            GreEnableAppContainerRestriction(1LL);
          GreSelectBitmap(CompatibleDC, v37);
          if ( v7 )
          {
            SetClipboardData(2u, v27, 0, 1);
            if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
            {
              v48 = 0LL;
              Object = 0LL;
              if ( (int)CreateScreenPalette(v25, &v48, (__int64 *)&Object) >= 0 )
              {
                SetClipboardData(9u, (char *)Object, 0, 1);
                Win32FreePool(v48);
              }
            }
            v7 = 1;
          }
          else if ( v27 )
          {
            GreDeleteObject(v27);
          }
        }
        else
        {
          ClientNoMemoryPopup(v22, v21, v23);
          v7 = 0;
          if ( !v25 )
            goto LABEL_45;
        }
        _ReleaseDC(v25);
LABEL_45:
        xxxCloseClipboard((struct tagWINDOWSTATION *)v4, v14);
        HMAssignmentUnlock(v4 + 112);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)&v41);
        ThreadUnlock1(v30, v29, v31);
        if ( !v7 )
          return v7;
        goto LABEL_48;
      }
      ThreadUnlock1(v10, v9, v11);
      PopAndFreeW32ThreadLock((__int64)&v41);
      ThreadUnlock1(v34, v33, v35);
    }
  }
  return 0LL;
}
