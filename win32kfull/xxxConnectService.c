/*
 * XREFs of xxxConnectService @ 0x1C012B764
 * Callers:
 *     xxxResolveDesktop @ 0x1C00BF660 (xxxResolveDesktop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     xxxCreateWindowStation @ 0x1C00BE56C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 */

__int64 __fastcall xxxConnectService(__int64 a1, HANDLE *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r14
  void *v5; // rsi
  void *SecurityDescriptor; // r15
  char v7; // r12
  int Desktop; // ebx
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // edx
  _UNKNOWN **v16; // r8
  HANDLE v17; // r13
  int v18; // r8d
  int v19; // r9d
  int v20; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+70h] [rbp-D8h]
  __int128 v28; // [rsp+80h] [rbp-C8h]
  _QWORD *v29; // [rsp+90h] [rbp-B8h]
  void *v30; // [rsp+98h] [rbp-B0h]
  __int64 v31; // [rsp+A0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-80h]
  __int128 v35; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-68h]
  __int128 v37; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+F8h] [rbp-50h]
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  TokenInformationLength = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  DestinationString = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v4 = 0LL;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v7 = 1;
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( (int)(Desktop + 0x80000000) >= 0 && Desktop != -1073741789 )
  {
    ZwClose(TokenHandle);
    goto LABEL_27;
  }
  v4 = (_QWORD *)Win32AllocPoolZInit(TokenInformationLength, 1869902677LL);
  v29 = v4;
  if ( !v4 )
  {
    ZwClose(TokenHandle);
LABEL_38:
    Desktop = -1073741801;
    goto LABEL_27;
  }
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( Desktop >= 0 )
  {
    v9 = *v4;
    v5 = (void *)AllocAce(0LL, 0LL, 0LL, 983150LL, *v4, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v10) = 13;
      v11 = AllocAce(v5, 0LL, v10, 983247LL, v9, &TokenInformationLength);
      if ( v11 )
      {
        v5 = (void *)v11;
        v12 = AllocAce(v11, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v12 )
        {
          v5 = (void *)v12;
          LOBYTE(v13) = 13;
          v14 = AllocAce(v12, 0LL, v13, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v14 )
          {
            v5 = (void *)v14;
            v31 = v14;
            SecurityDescriptor = (void *)CreateSecurityDescriptor(v14, TokenInformationLength, 0LL);
            v30 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock((__int64)v4, &v37, (__int64)Win32FreePool);
              PushW32ThreadLock((__int64)v5, &v35, (__int64)Win32FreePool);
              PushW32ThreadLock((__int64)SecurityDescriptor, &v33, (__int64)Win32FreePool);
              LODWORD(v26) = 48;
              *((_QWORD *)&v26 + 1) = 0LL;
              DWORD2(v27) = 128;
              *(_QWORD *)&v27 = a1;
              v28 = (unsigned __int64)SecurityDescriptor;
              Desktop = xxxCreateWindowStation((__int64)&v26, 0, 0x2000000u, 0LL, 0, 0, 0LL, 0LL, 0, &Handle);
              if ( Desktop < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                v16 = &WPP_RECORDER_INITIALIZED;
                if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v15,
                    (_DWORD)v16,
                    10,
                    4,
                    3,
                    10,
                    (__int64)&WPP_05c770c094f03161d0aa1075d80c4466_Traceguids);
                }
                RtlInitUnicodeString(&DestinationString, L"Default");
                LODWORD(v26) = 48;
                v17 = Handle;
                *((_QWORD *)&v26 + 1) = Handle;
                DWORD2(v27) = 192;
                *(_QWORD *)&v27 = &DestinationString;
                v28 = 0LL;
                Desktop = xxxCreateDesktopEx((union _LARGE_INTEGER *)&v26, 0, 0x2000000, 0, a2, 1);
                if ( Desktop < 0 )
                {
                  ObCloseHandle(v17, 1);
                }
                else
                {
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
                    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
                  {
                    v7 = 0;
                  }
                  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v20 = 11;
                    LOBYTE(v20) = v7;
                    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    WPP_RECORDER_AND_TRACE_SF_(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v20,
                      v18,
                      v19,
                      4,
                      3,
                      11,
                      (__int64)&WPP_05c770c094f03161d0aa1075d80c4466_Traceguids);
                  }
                  *a3 = v17;
                }
              }
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = v33;
              v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(v22 + 16) = v35;
              v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(v23 + 16) = v37;
              goto LABEL_27;
            }
          }
        }
      }
    }
    goto LABEL_38;
  }
LABEL_27:
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)Desktop;
}
