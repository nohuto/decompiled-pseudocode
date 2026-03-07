__int64 __fastcall NtGdiSwapBuffers(HDC a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  __int64 v4; // r9
  struct EWNDOBJ *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 DeviceHdev; // rax
  __int64 v11; // rax
  unsigned int (__fastcall *v12)(__int64, struct EWNDOBJ *, __int64, __int64); // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-29h] BYREF
  struct _RECTL v14; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v15[80]; // [rsp+48h] [rbp-9h] BYREF
  struct EWNDOBJ *v16; // [rsp+98h] [rbp+47h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] && *(_QWORD *)(v13[0] + 496LL) )
  {
    v1 = 1;
    if ( *(_DWORD *)(v13[0] + 32LL) == 1 )
    {
LABEL_7:
      DCOBJ::~DCOBJ((DCOBJ *)v13);
      return v1;
    }
    DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v15, (struct XDCOBJ *)v13);
    if ( (v15[24] & 1) != 0 )
    {
      if ( !v16 )
      {
        EngSetLastError(6u);
        goto LABEL_6;
      }
      if ( !ERECTL::bEmpty((struct EWNDOBJ *)((char *)v16 + 4)) )
      {
        ++*(_DWORD *)(*(_QWORD *)(v13[0] + 496LL) + 92LL);
        v5 = v16;
        v6 = *(_QWORD *)(v13[0] + 48LL);
        v7 = (*(_QWORD *)(v13[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v13[0] + 496LL) != 0LL);
        v8 = v7;
        if ( (*(_DWORD *)(v6 + 40) & 0x20000) != 0 )
        {
          v9 = *(_QWORD **)(v13[0] + 48LL);
          v14 = *(struct _RECTL *)(v13[0] + 1032LL);
          DeviceHdev = hdevFindDeviceHdev(v9, &v14, v16);
          v4 = DeviceHdev;
          v8 = v7;
          if ( DeviceHdev )
          {
            if ( *(_QWORD *)(v13[0] + 496LL) == *(_QWORD *)(v6 + 2528) )
            {
              v11 = *(_QWORD *)(DeviceHdev + 2528);
              v3 = v11 + 24;
              v8 = (v11 + 24) & -(__int64)(v11 != 0);
            }
            else
            {
              v8 = v7;
            }
            v6 = v4;
          }
        }
        v12 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *, __int64, __int64))(v6 + 3112);
        if ( v12 && v12(v8, v5, v3, v4) )
        {
          DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v15);
          if ( v13[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v13);
          return v1;
        }
        goto LABEL_6;
      }
    }
    else if ( !(unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v13) )
    {
LABEL_6:
      DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v15);
      v1 = 0;
      goto LABEL_7;
    }
    DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v15);
    goto LABEL_7;
  }
  EngSetLastError(6u);
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return 0LL;
}
