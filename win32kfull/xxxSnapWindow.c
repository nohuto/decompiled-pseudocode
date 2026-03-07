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
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  __int64 DCEx; // rax
  __int64 v20; // rcx
  HDC v21; // r14
  __int64 Bitmap; // rax
  char *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // [rsp+60h] [rbp-59h]
  __int128 v34; // [rsp+68h] [rbp-51h] BYREF
  __int64 v35; // [rsp+78h] [rbp-41h]
  __int128 v36; // [rsp+80h] [rbp-39h] BYREF
  __int64 v37; // [rsp+90h] [rbp-29h]
  __int128 v38; // [rsp+98h] [rbp-21h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-11h]
  __int128 v40; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v41; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v42; // [rsp+D0h] [rbp+17h]
  PVOID Object; // [rsp+130h] [rbp+77h] BYREF
  void *v45; // [rsp+138h] [rbp+7Fh] BYREF

  Object = 0LL;
  v37 = 0LL;
  CompatibleDC = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v35 = gptiCurrent;
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
      ThreadLock(a1, &v41);
      PushW32ThreadLock((__int64)v4, &v38, UserDereferenceObject);
      ObfReferenceObject(v4);
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
      *(_QWORD *)&v36 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v36;
      *((_QWORD *)&v36 + 1) = v8;
      if ( v8 )
        HMLockObject(v8);
      if ( (unsigned int)OpenClipboard(v8, 0LL) )
      {
        ThreadUnlock1(v10, v9, v11);
        xxxEmptyClipboard((void **)v4);
        v12 = a1[5];
        v13 = *gpDispInfo;
        v34 = *(_OWORD *)(v12 + 88);
        v40 = *(_OWORD *)(v13 + 24);
        if ( !(unsigned int)IntersectRect(&v34, (int *)&v34, (int *)&v40) )
        {
          v7 = 0;
          goto LABEL_45;
        }
        v14 = DWORD2(v34) - v34;
        v15 = HIDWORD(v34) - DWORD1(v34);
        LODWORD(v45) = DWORD1(v34);
        v33 = v34;
        if ( a1 != (_QWORD *)GetDesktopWindow((__int64)a1) )
        {
          v18 = v16 - *(_DWORD *)(v12 + 88);
          LODWORD(v45) = v17 - *(_DWORD *)(v12 + 92);
          v33 = v18;
        }
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        v21 = (HDC)DCEx;
        if ( DCEx
          && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
          && (!*(_DWORD *)(gpsi + 2220LL)
            ? (Bitmap = GreCreateBitmap(v14, v15, 1LL, *(unsigned __int16 *)(gpDispInfo + 128LL), 0LL))
            : (Bitmap = GreCreateCompatibleBitmapInternal((__int64)v21, v14, v15, 0, 0LL, 0LL)),
              (v23 = (char *)Bitmap) != 0LL || (v23 = (char *)GreCreateBitmap(v14, v15, 1LL, 1LL, 0LL)) != 0LL) )
        {
          *(_QWORD *)&v34 = GreSelectBitmap(CompatibleDC, v23);
          if ( !a2
            && (v24 = *(_QWORD *)(v35 + 456), a1 == *(_QWORD **)(*(_QWORD *)(v24 + 8) + 24LL))
            && (unsigned int)UserIsCurrentProcessImmersiveAppContainer(v24) )
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
            UserSessionSwitchLeaveCrit(v25);
            v7 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v14, v15, (__int64)v21, v33, (int)v45, 1087111200, 0, 4);
            EnterCrit(1LL, 0LL);
          }
          else
          {
            v7 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v14, v15, (__int64)v21, v33, (int)v45, 1087111200, 0, 0);
          }
          if ( (_BYTE)Object )
            GreEnableAppContainerRestriction(1LL);
          GreSelectBitmap(CompatibleDC, v34);
          if ( v7 )
          {
            SetClipboardData(2LL, v23, 0, 1);
            if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
            {
              v45 = 0LL;
              Object = 0LL;
              if ( (int)CreateScreenPalette(v21, &v45, (__int64 *)&Object) >= 0 )
              {
                SetClipboardData(9LL, (char *)Object, 0, 1);
                Win32FreePool(v45);
              }
            }
            v7 = 1;
          }
          else if ( v23 )
          {
            GreDeleteObject(v23);
          }
        }
        else
        {
          ClientNoMemoryPopup(v20);
          v7 = 0;
          if ( !v21 )
            goto LABEL_45;
        }
        _ReleaseDC(v21);
LABEL_45:
        xxxCloseClipboard((struct tagWINDOWSTATION *)v4);
        HMAssignmentUnlock(v4 + 112);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)&v38);
        ThreadUnlock1(v27, v26, v28);
        if ( !v7 )
          return v7;
        goto LABEL_48;
      }
      ThreadUnlock1(v10, v9, v11);
      PopAndFreeW32ThreadLock((__int64)&v38);
      ThreadUnlock1(v31, v30, v32);
    }
  }
  return 0LL;
}
