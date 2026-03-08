/*
 * XREFs of GreDescribePixelFormat @ 0x1C02D9DF4
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C02C4920 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B51BC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02D9C90 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // esi
  Gre::Base *v10; // rcx
  __int64 v11; // rbx
  struct _RECTL v12; // xmm0
  _QWORD *v13; // rcx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v15)(_QWORD, _QWORD, _QWORD, __int64); // rax
  Gre::Base *v17[2]; // [rsp+38h] [rbp-29h] BYREF
  struct _RECTL v18; // [rsp+48h] [rbp-19h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h] BYREF
  __int64 v20; // [rsp+68h] [rbp+7h]
  int v21; // [rsp+70h] [rbp+Fh]
  _QWORD v22[2]; // [rsp+78h] [rbp+17h] BYREF
  __int16 v23; // [rsp+88h] [rbp+27h]
  __int64 v24; // [rsp+90h] [rbp+2Fh]
  __int64 v25; // [rsp+98h] [rbp+37h]

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v7 = 0;
  if ( !v17[0] )
  {
    EngSetLastError(6u);
LABEL_21:
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return v7;
  }
  v8 = XDCOBJ::ipfdDevMax((XDCOBJ *)v17);
  v9 = v8;
  if ( !a3 )
  {
    v7 = v8;
    goto LABEL_21;
  }
  if ( a3 < 0x28 || a2 < 1 || a2 > v8 )
  {
    EngSetLastError(0x57u);
    DCOBJ::~DCOBJ((DCOBJ *)v17);
    return 0LL;
  }
  else
  {
    v10 = v17[0];
    v11 = *((_QWORD *)v17[0] + 6);
    v22[1] = 0LL;
    v23 = 256;
    v19 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    v22[0] = 0LL;
    v21 = 1;
    if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
    {
      Gre::Base::Globals(v17[0]);
      *(_QWORD *)&v19 = *(_QWORD *)(v11 + 48);
      v20 = v11;
      GreAcquireSemaphore(v19);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v19, 11LL);
      v10 = v17[0];
    }
    if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
    {
      v12 = *(struct _RECTL *)((char *)v10 + 1032);
      v13 = (_QWORD *)*((_QWORD *)v10 + 6);
      v18 = v12;
      DeviceHdev = hdevFindDeviceHdev(v13, &v18, 0LL);
      if ( DeviceHdev )
        v11 = DeviceHdev;
    }
    v15 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 3104);
    if ( !v15 || !v15(*(_QWORD *)(v11 + 1768), (unsigned int)a2, a3, a4) )
    {
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v19);
      goto LABEL_21;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v19);
    if ( v22[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v22);
    if ( v17[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v17);
    return v9;
  }
}
