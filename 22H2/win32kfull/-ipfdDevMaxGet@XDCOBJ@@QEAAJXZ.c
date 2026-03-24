/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02BBF18
 * Callers:
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02BBEF0 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A67B0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  int v2; // edi
  __int64 v3; // rbx
  int v4; // eax
  _QWORD *v5; // rcx
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v7)(_QWORD, __int64, _QWORD); // rax
  struct _RECTL v9; // [rsp+38h] [rbp-29h] BYREF
  __int128 v10; // [rsp+48h] [rbp-19h] BYREF
  __int64 v11; // [rsp+58h] [rbp-9h]
  int v12; // [rsp+60h] [rbp-1h]
  _QWORD v13[2]; // [rsp+68h] [rbp+7h] BYREF
  char v14[40]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+3Fh]
  __int64 v16; // [rsp+A8h] [rbp+47h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v13);
  v16 = 0LL;
  v10 = 0LL;
  v15 = 0LL;
  v13[0] = 0LL;
  v12 = 1;
  v4 = *(_DWORD *)(v3 + 40);
  if ( (v4 & 1) != 0 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(v3 + 48);
    v11 = v3;
    GreAcquireSemaphore(v10);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v10, 11LL);
    v4 = *(_DWORD *)(v3 + 40);
  }
  if ( (v4 & 0x20000) != 0 )
  {
    v5 = *(_QWORD **)(*(_QWORD *)this + 48LL);
    v9 = *(struct _RECTL *)(*(_QWORD *)this + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(v5, &v9, 0LL);
    if ( DeviceHdev )
      v3 = DeviceHdev;
  }
  v7 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 3128);
  if ( v7 )
  {
    v2 = v7(*(_QWORD *)(v3 + 1800), 1LL, 0LL);
    if ( v2 < 0 )
      v2 = 0;
  }
  *(_WORD *)(*(_QWORD *)this + 2096LL) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v10);
  if ( v13[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
  return (unsigned int)v2;
}
