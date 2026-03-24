/*
 * XREFs of NtGdiSwapBuffers @ 0x1C02BD080
 * Callers:
 *     <none>
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C027B5C0 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027B734 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A6DE0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiSwapBuffers(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  struct EWNDOBJ *v3; // r15
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 DeviceHdev; // rdx
  unsigned int (__fastcall *v9)(__int64, struct EWNDOBJ *); // rax
  _QWORD v11[2]; // [rsp+28h] [rbp-79h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-69h] BYREF
  struct _RECTL v13; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v14[112]; // [rsp+68h] [rbp-39h] BYREF
  struct EWNDOBJ *v15; // [rsp+D8h] [rbp+37h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v1 = 0;
  if ( !v11[0] || !*(_QWORD *)(v11[0] + 496LL) )
  {
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_20;
  }
  v2 = 1;
  if ( *(_DWORD *)(v11[0] + 32LL) == 1 )
  {
LABEL_20:
    v1 = v2;
    goto LABEL_21;
  }
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v14, (struct XDCOBJ *)v11);
  if ( (v14[24] & 1) != 0 )
  {
    if ( v15 )
    {
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v15 + 4)) )
        goto LABEL_17;
      ++*(_DWORD *)(*(_QWORD *)(v11[0] + 496LL) + 92LL);
      v3 = v15;
      v4 = *(_QWORD *)(v11[0] + 48LL);
      v5 = (*(_QWORD *)(v11[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v11[0] + 496LL) != 0LL);
      v6 = v5;
      if ( (*(_DWORD *)(v4 + 40) & 0x20000) != 0 )
      {
        v7 = *(_QWORD **)(v11[0] + 48LL);
        v13 = *(struct _RECTL *)(v11[0] + 1032LL);
        DeviceHdev = hdevFindDeviceHdev(v7, &v13, v15);
        v6 = v5;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v11[0] + 496LL) == *(_QWORD *)(v4 + 2552) )
            v6 = (*(_QWORD *)(DeviceHdev + 2552) + 24LL) & -(__int64)(*(_QWORD *)(DeviceHdev + 2552) != 0LL);
          else
            v6 = v5;
          v4 = DeviceHdev;
        }
      }
      v9 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *))(v4 + 3136);
      if ( v9 )
      {
        if ( v9(v6, v3) )
LABEL_17:
          v1 = 1;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
  }
  else
  {
    LOBYTE(v1) = (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v11) != 0;
  }
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v14);
LABEL_21:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  return v1;
}
