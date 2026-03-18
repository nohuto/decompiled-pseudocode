/*
 * XREFs of GreDescribePixelFormat @ 0x1C02D8008
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C02C2110 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B2CDC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02D7E9C (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rbx
  Gre::Base *v11; // rcx
  _QWORD *v12; // rcx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v14)(_QWORD, _QWORD, _QWORD, __int64); // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD v19[2]; // [rsp+38h] [rbp-69h] BYREF
  char v20[32]; // [rsp+48h] [rbp-59h] BYREF
  struct _RECTL v21; // [rsp+68h] [rbp-39h] BYREF
  __int128 v22; // [rsp+78h] [rbp-29h] BYREF
  __int64 v23; // [rsp+88h] [rbp-19h]
  int v24; // [rsp+90h] [rbp-11h]
  _QWORD v25[2]; // [rsp+98h] [rbp-9h] BYREF
  char v26[40]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v27; // [rsp+D0h] [rbp+2Fh]
  __int64 v28; // [rsp+D8h] [rbp+37h]

  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  v7 = 0;
  if ( !v19[0] )
  {
    EngSetLastError(6u);
LABEL_21:
    DCOBJ::~DCOBJ((DCOBJ *)v19);
    return v7;
  }
  v8 = XDCOBJ::ipfdDevMax((XDCOBJ *)v19);
  v9 = v8;
  if ( !a3 )
  {
    v7 = v8;
    goto LABEL_21;
  }
  if ( a3 < 0x28 || a2 < 1 || a2 > v8 )
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v19);
    return 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v19[0] + 48LL);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
    v28 = 0LL;
    v22 = 0LL;
    v27 = 0LL;
    v25[0] = 0LL;
    v24 = 1;
    if ( (*(_DWORD *)(v10 + 40) & 1) != 0 )
    {
      Gre::Base::Globals(v11);
      *(_QWORD *)&v22 = *(_QWORD *)(v10 + 48);
      v23 = v10;
      GreAcquireSemaphore(v22);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v22, 11LL);
    }
    if ( (*(_DWORD *)(v10 + 40) & 0x20000) != 0 )
    {
      v12 = *(_QWORD **)(v19[0] + 48LL);
      v21 = *(struct _RECTL *)(v19[0] + 1032LL);
      DeviceHdev = hdevFindDeviceHdev(v12, &v21, 0LL);
      if ( DeviceHdev )
        v10 = DeviceHdev;
    }
    v14 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v10 + 3104);
    if ( !v14 || !v14(*(_QWORD *)(v10 + 1768), (unsigned int)a2, a3, a4) )
    {
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v22);
      goto LABEL_21;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22, v15, v16, v17);
    if ( v25[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v25);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
    if ( v19[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v19);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v20);
    return v9;
  }
}
