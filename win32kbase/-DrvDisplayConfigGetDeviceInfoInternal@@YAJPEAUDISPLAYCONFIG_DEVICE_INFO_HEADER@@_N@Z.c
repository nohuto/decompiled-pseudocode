__int64 __fastcall DrvDisplayConfigGetDeviceInfoInternal(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 DxgkWin32kInterface; // rax
  unsigned int *v11; // r14
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // [rsp+50h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, *(int *)a1);
  v5 = 0;
  if ( !DispConfigTypes::AllowInAnySession(*(_DWORD *)a1) && !(unsigned int)DrvIsWddmDriverPresent(v4) )
    return 3221225659LL;
  if ( (unsigned int)DispConfigTypes::GetGetterTypeSize(*(_DWORD *)a1) != *((_DWORD *)a1 + 1) )
    return 3221225485LL;
  v9 = (_DWORD *)((char *)a1 + 16);
  if ( *((_DWORD *)a1 + 4) == -1 )
  {
    v11 = (unsigned int *)((char *)a1 + 8);
    goto LABEL_11;
  }
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8, v7);
  v11 = (unsigned int *)((char *)a1 + 8);
  v12 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, char *))(DxgkWin32kInterface + 552))(
          (char *)a1 + 8,
          (unsigned int)*v9,
          (char *)a1 + 8,
          (char *)a1 + 16);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_11:
    v14 = *(unsigned int *)a1;
    if ( (int)v14 <= -8 )
    {
      if ( (_DWORD)v14 == -8 )
      {
        if ( *((_DWORD *)a1 + 1) >= 0x518u )
        {
          v20 = DxDdGetDxgkWin32kInterface(v14, v7);
          return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, char *))(v20 + 672))(
                                 *(_QWORD *)v11,
                                 (unsigned int)*v9,
                                 1280LL,
                                 (char *)a1 + 20,
                                 (char *)a1 + 24);
        }
        return 3221225507LL;
      }
      if ( (int)v14 <= -15 )
      {
        switch ( (_DWORD)v14 )
        {
          case 0xFFFFFFF1:
            if ( *((_DWORD *)a1 + 1) >= 0x20u )
            {
              v25 = 0;
              v17 = DxDdGetDxgkWin32kInterface(v14, v7);
              v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v17 + 704))(
                      *((_QWORD *)a1 + 1),
                      (unsigned int)*v9,
                      *((unsigned int *)a1 + 5),
                      &v25,
                      *((_QWORD *)a1 + 3));
              *((_DWORD *)a1 + 5) = v25;
              return (unsigned int)v18;
            }
            break;
          case 0xFFFFFFE1:
          case 0xFFFFFFE6:
            goto LABEL_70;
          case 0xFFFFFFE7:
            if ( *((_DWORD *)a1 + 1) >= 0x28u )
            {
              v15 = DxDdGetDxgkWin32kInterface(v14, v7);
              return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v15 + 776))(
                                     *((_QWORD *)a1 + 1),
                                     (unsigned int)*v9,
                                     a1);
            }
            break;
          default:
            if ( (((_DWORD)v14 + 24) & 0xFFFFFFFD) != 0 )
            {
              if ( (_DWORD)v14 != -21 )
              {
                if ( (_DWORD)v14 == -20 )
                {
                  *((_DWORD *)a1 + 5) = gRemoteSessionUseWddm;
                  *((_DWORD *)a1 + 6) = UserRemoteConnectedSessionUsingWddm();
                  *((_DWORD *)a1 + 7) = UserRemoteConnectedSessionUsingXddm();
                  *((_DWORD *)a1 + 8) = UserIsWddmConnectedSession();
                  *((_DWORD *)a1 + 9) = gProtocolType == 0;
                  *((_DWORD *)a1 + 10) = gProtocolType == -1;
                  *((_WORD *)a1 + 22) = gProtocolType;
                  *((_QWORD *)a1 + 6) = gRemoteTerminalLuid;
                  return 0;
                }
                return (unsigned int)-1073741811;
              }
              return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo(a1);
            }
LABEL_70:
            v23 = DxDdGetDxgkWin32kInterface(v14, v7);
            LOBYTE(v24) = 1;
            v18 = (*(__int64 (__fastcall **)(__int64, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *))(v23 + 248))(v24, a1);
            if ( v18 < 0 )
              WdLogSingleEntry2(3LL, a1);
            return (unsigned int)v18;
        }
        return 3221225507LL;
      }
      if ( (unsigned int)(v14 + 14) <= 2 )
        goto LABEL_70;
      if ( (_DWORD)v14 != -11 )
      {
        if ( (_DWORD)v14 == -10 )
          goto LABEL_70;
        if ( (_DWORD)v14 == -9 )
        {
          if ( *((_DWORD *)a1 + 1) >= 0x18u )
          {
            v25 = 0;
            v19 = DxDdGetDxgkWin32kInterface(v14, v7);
            v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, _QWORD))(v19 + 264))(
                    *((_QWORD *)a1 + 1),
                    (unsigned int)*v9,
                    0LL,
                    &v25,
                    0LL);
            if ( v18 >= 0 )
            {
              LOBYTE(v5) = v25 == 2;
              *((_DWORD *)a1 + 5) = v5;
            }
            return (unsigned int)v18;
          }
          return 3221225507LL;
        }
        return (unsigned int)-1073741811;
      }
      return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo(a1);
    }
    if ( (int)v14 > 100 )
      return (unsigned int)-1073741811;
    if ( (_DWORD)v14 == 100 )
      goto LABEL_70;
    if ( (int)v14 > 3 )
    {
      v14 = (unsigned int)(v14 - 4);
      if ( !(_DWORD)v14 )
        goto LABEL_70;
      v14 = (unsigned int)(v14 - 2);
      if ( !(_DWORD)v14 )
        goto LABEL_70;
      v14 = (unsigned int)(v14 - 1);
      if ( !(_DWORD)v14 )
        goto LABEL_70;
      v14 = (unsigned int)(v14 - 2);
      if ( !(_DWORD)v14 )
        goto LABEL_70;
      v14 = (unsigned int)(v14 - 2);
      if ( (unsigned int)v14 <= 1 )
        goto LABEL_70;
      return (unsigned int)-1073741811;
    }
    switch ( (_DWORD)v14 )
    {
      case 3:
        goto LABEL_70;
      case 0xFFFFFFF9:
        if ( *((_DWORD *)a1 + 1) >= 0x3ACu )
        {
          v22 = DxDdGetDxgkWin32kInterface(v14, v7);
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DISPLAYCONFIG_DEVICE_INFO_HEADER *, _QWORD, _QWORD))(v22 + 264))(
                  *(_QWORD *)v11,
                  (unsigned int)*v9,
                  a1,
                  0LL,
                  0LL);
          if ( a2 )
            GetMonitorBrightnessCaps(a1);
          return (unsigned int)v18;
        }
        return 3221225507LL;
      case 0xFFFFFFFB:
        goto LABEL_70;
    }
    if ( (_DWORD)v14 != -3 )
    {
      if ( (_DWORD)v14 != -2 )
      {
        if ( (_DWORD)v14 == 1 )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v14) + 24) + 1264LL);
          if ( *((_DWORD *)a1 + 1) >= 0x54u )
          {
            if ( !v21 )
              goto LABEL_56;
            do
            {
              if ( *v11 == *(_DWORD *)(v21 + 240) && v11[1] == *(_DWORD *)(v21 + 244) && *(_DWORD *)(v21 + 248) == *v9 )
                break;
              v21 = *(_QWORD *)(v21 + 128);
            }
            while ( v21 );
            if ( !v21 )
            {
LABEL_56:
              WdLogSingleEntry0(3LL);
              return 3221226021LL;
            }
            *(_OWORD *)((char *)a1 + 20) = *(_OWORD *)(v21 + 64);
            *(_OWORD *)((char *)a1 + 36) = *(_OWORD *)(v21 + 80);
            *(_OWORD *)((char *)a1 + 52) = *(_OWORD *)(v21 + 96);
            *(_OWORD *)((char *)a1 + 68) = *(_OWORD *)(v21 + 112);
            return 0;
          }
          return 3221225507LL;
        }
        if ( (_DWORD)v14 == 2 )
          goto LABEL_70;
        return (unsigned int)-1073741811;
      }
      return (unsigned int)DrvpDisplayConfigGetDisplayDeviceInfo(a1);
    }
    if ( *((_DWORD *)a1 + 1) == 32 )
      return (unsigned int)DrvDisplayConfigGetScaleFactorOverrides(a1, 0LL);
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 == -21 )
  {
    *((_DWORD *)a1 + 506) = 1144084231;
    WdLogSingleEntry5(2LL, *((int *)a1 + 3), *v11, (unsigned int)*v9, v12, 1144084231LL);
  }
  return v13;
}
