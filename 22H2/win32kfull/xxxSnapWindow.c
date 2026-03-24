/*
 * XREFs of xxxSnapWindow @ 0x1C016040C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _SetClipboardData @ 0x1C002F474 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C002FDB0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C002FEF8 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00304B0 (ReferenceWindowStation.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BE7C (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     xxxPlayEventSound @ 0x1C011E880 (xxxPlayEventSound.c)
 *     xxxEmptyClipboard @ 0x1C0123900 (xxxEmptyClipboard.c)
 *     ClientNoMemoryPopup @ 0x1C022856C (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C024376C (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C0273230 (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C0275190 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(_QWORD *a1, int a2)
{
  HDC CompatibleDC; // r15
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rax
  PVOID v8; // rsi
  __int64 v9; // rbx
  bool v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  LONG v14; // r13d
  unsigned int v15; // r12d
  unsigned int v16; // ebx
  int v17; // edx
  __int64 DCEx; // rax
  __int64 v19; // rcx
  HDC v20; // r14
  __int64 Bitmap; // rax
  char *v22; // rsi
  __int64 v23; // rcx
  char *v24; // rdi
  __int64 v25; // rcx
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  int v31[4]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v32; // [rsp+78h] [rbp-41h]
  __int128 v33; // [rsp+80h] [rbp-39h] BYREF
  __int64 v34; // [rsp+90h] [rbp-29h]
  __int128 v35; // [rsp+98h] [rbp-21h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-11h]
  __int128 v37; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v38; // [rsp+C0h] [rbp+7h]
  int v39[18]; // [rsp+C8h] [rbp+Fh] BYREF
  char v41; // [rsp+130h] [rbp+77h]
  LONG v42; // [rsp+138h] [rbp+7Fh]

  Object = 0LL;
  v36 = 0LL;
  CompatibleDC = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v37 = 0LL;
  v33 = 0LL;
  v32 = gptiCurrent;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon )
  {
    v4 = 1;
    if ( ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) >= 0
      && (*((_DWORD *)Object + 16) & 4) == 0
      && *(PVOID *)(a1[3] + 40LL) == Object )
    {
      while ( (*(_BYTE *)(a1[5] + 31LL) & 0x40) != 0 )
        a1 = (_QWORD *)a1[13];
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        v27 = (void *)ReferenceDwmApiPort(v6, v5);
        if ( (int)DwmAsyncSnapshotWindow(v27) < 0 )
          return 0;
LABEL_33:
        xxxPlayEventSound(13LL);
        return v4;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v33 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v33;
      *((_QWORD *)&v33 + 1) = a1;
      HMLockObject(a1);
      v8 = Object;
      PushW32ThreadLock((__int64)Object, &v37, UserDereferenceObject);
      ObfReferenceObject(v8);
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
      *(_QWORD *)&v35 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v35;
      *((_QWORD *)&v35 + 1) = v9;
      if ( v9 )
        HMLockObject(v9);
      v10 = (unsigned int)OpenClipboard(v9, 0LL) != 0;
      ThreadUnlock1(v11);
      if ( v10 )
      {
        xxxEmptyClipboard((struct tagCLIP **)v8);
        v12 = a1[5];
        v13 = *gpDispInfo;
        *(_OWORD *)v31 = *(_OWORD *)(v12 + 88);
        *(_OWORD *)v39 = *(_OWORD *)(v13 + 24);
        if ( (unsigned int)IntersectRect(v31, v31, v39) )
        {
          v14 = v31[0];
          v15 = v31[3] - v31[1];
          v16 = v31[2] - v31[0];
          v42 = v31[1];
          if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
          {
            v14 -= *(_DWORD *)(v12 + 88);
            v42 = v17 - *(_DWORD *)(v12 + 92);
          }
          DCEx = _GetDCEx(a1, 0LL, 65537LL);
          v20 = (HDC)DCEx;
          if ( DCEx
            && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
            && (!*(_DWORD *)(gpsi + 2220LL)
              ? (Bitmap = GreCreateBitmap(v16, v15, 1LL))
              : (Bitmap = GreCreateCompatibleBitmapInternal(v20, v16, v15, 0, 0LL, 0LL)),
                (v22 = (char *)Bitmap) != 0LL || (v22 = (char *)GreCreateBitmap(v16, v15, 1LL)) != 0LL) )
          {
            *(_QWORD *)v31 = GreSelectBitmap(CompatibleDC, v22);
            if ( !a2
              && (v29 = *(_QWORD *)(v32 + 456), a1 == *(_QWORD **)(*(_QWORD *)(v29 + 8) + 24LL))
              && (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v29) )
            {
              v41 = 1;
              GreEnableAppContainerRestriction(0LL);
            }
            else
            {
              v41 = 0;
            }
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              if ( gdwInAtomicOperation )
              {
                v23 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v23);
              v4 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v16, v15, v20, v14, v42, 1087111200, 0, 4);
              EnterCrit(0LL, 1LL);
            }
            else
            {
              v4 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v16, v15, v20, v14, v42, 1087111200, 0, 0);
            }
            if ( v41 )
              GreEnableAppContainerRestriction(1LL);
            GreSelectBitmap(CompatibleDC, *(_QWORD *)v31);
            if ( v4 )
            {
              SetClipboardData(2u, v22, 0, 1);
              if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && (int)CreateScreenPalette(v20) >= 0 )
              {
                SetClipboardData(9u, 0LL, 0, 1);
                Win32FreePool(0LL);
              }
              v4 = 1;
            }
            else if ( v22 )
            {
              GreDeleteObject(v22);
            }
          }
          else
          {
            ClientNoMemoryPopup(v19);
            v4 = 0;
          }
          if ( v20 )
            _ReleaseDC(v20);
        }
        else
        {
          v4 = 0;
        }
        v24 = (char *)Object;
        xxxCloseClipboard((struct tagWINDOWSTATION *)Object);
        HMAssignmentUnlock(v24 + 112);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)&v37);
        ThreadUnlock1(v25);
        if ( !v4 )
          return v4;
        goto LABEL_33;
      }
      PopAndFreeW32ThreadLock((__int64)&v37);
      ThreadUnlock1(v28);
    }
  }
  return 0LL;
}
