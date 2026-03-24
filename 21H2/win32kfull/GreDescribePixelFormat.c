/*
 * XREFs of GreDescribePixelFormat @ 0x1C02BCC90
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C02AE3A0 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A6DE0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02BCB30 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  int v7; // edi
  ULONG v8; // ecx
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v15)(_QWORD, _QWORD, _QWORD, __int64); // rax
  _QWORD v17[2]; // [rsp+38h] [rbp-69h] BYREF
  char v18[32]; // [rsp+48h] [rbp-59h] BYREF
  struct _RECTL v19; // [rsp+68h] [rbp-39h] BYREF
  __int128 v20; // [rsp+78h] [rbp-29h] BYREF
  __int64 v21; // [rsp+88h] [rbp-19h]
  int v22; // [rsp+90h] [rbp-11h]
  _QWORD v23[2]; // [rsp+98h] [rbp-9h] BYREF
  char v24[40]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+2Fh]
  __int64 v26; // [rsp+D8h] [rbp+37h]

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v7 = 0;
  if ( !v17[0] )
  {
    v8 = 6;
LABEL_20:
    EngSetLastError(v8);
    goto LABEL_21;
  }
  v9 = XDCOBJ::ipfdDevMax((XDCOBJ *)v17);
  v10 = v9;
  if ( !a3 )
  {
    v7 = v9;
LABEL_21:
    v10 = v7;
    goto LABEL_22;
  }
  if ( a3 < 0x28 || a2 < 1 || a2 > v9 )
  {
    v8 = 87;
    goto LABEL_20;
  }
  v11 = *(_QWORD *)(v17[0] + 48LL);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
  v26 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  v23[0] = 0LL;
  v22 = 1;
  v12 = *(_DWORD *)(v11 + 40);
  if ( (v12 & 1) != 0 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(v11 + 48);
    v21 = v11;
    GreAcquireSemaphore(v20);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
    v12 = *(_DWORD *)(v11 + 40);
  }
  if ( (v12 & 0x20000) != 0 )
  {
    v13 = *(_QWORD **)(v17[0] + 48LL);
    v19 = *(struct _RECTL *)(v17[0] + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(v13, &v19, 0LL);
    if ( DeviceHdev )
      v11 = DeviceHdev;
  }
  v15 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 3128);
  if ( !v15 || !v15(*(_QWORD *)(v11 + 1800), (unsigned int)a2, a3, a4) )
    v10 = 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
  if ( v23[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v23);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v24);
LABEL_22:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v18);
  return v10;
}
