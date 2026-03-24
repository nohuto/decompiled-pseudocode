/*
 * XREFs of NtGdiSetPixelFormat @ 0x1C02BCE40
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     UserGetHwnd @ 0x1C01E8BDC (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286C34 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A6DE0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02BCB30 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(__int64 *a1, int a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r15
  ULONG v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v16)(__int64, _QWORD, __int64); // rax
  ULONG v17; // ecx
  _QWORD v19[2]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v20[32]; // [rsp+30h] [rbp-69h] BYREF
  struct _RECTL v21; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v22[32]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v24[96]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v25; // [rsp+110h] [rbp+77h] BYREF
  __int64 v26; // [rsp+118h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v19, (HDC)a1);
  if ( !v19[0] || !*(_QWORD *)(v19[0] + 496LL) )
  {
    v17 = 6;
    goto LABEL_30;
  }
  v4 = XDCOBJ::ipfdDevMax((XDCOBJ *)v19);
  v8 = 1;
  if ( a2 < 1 || a2 > v4 )
  {
    v17 = 87;
LABEL_30:
    EngSetLastError(v17);
    v8 = 0;
    goto LABEL_31;
  }
  UserEnterUserCritSec(v6, v5, v7);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, (struct XDCOBJ *)v19, 0);
  v9 = v19[0];
  v10 = 0LL;
  v26 = 0LL;
  if ( (*(_DWORD *)(v19[0] + 36LL) & 1) == 0 )
  {
LABEL_17:
    v12 = *(_QWORD *)(v9 + 48);
    v13 = (*(_QWORD *)(v9 + 496) + 24LL) & -(__int64)(*(_QWORD *)(v9 + 496) != 0LL);
    v14 = v13;
    if ( (*(_DWORD *)(v12 + 40) & 0x20000) != 0 )
    {
      v21 = *(struct _RECTL *)(v9 + 1032);
      DeviceHdev = hdevFindDeviceHdev((_QWORD *)v12, &v21, 0LL);
      v14 = v13;
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(v19[0] + 496LL) == *(_QWORD *)(v12 + 2552) )
          v14 = (*(_QWORD *)(DeviceHdev + 2552) + 24LL) & -(__int64)(*(_QWORD *)(DeviceHdev + 2552) != 0LL);
        v12 = DeviceHdev;
      }
    }
    if ( *(_QWORD *)(v12 + 3136) )
    {
      if ( (*(_DWORD *)(v14 + 88) & 0x200000) != 0 )
      {
        v16 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v12 + 3120);
        if ( v16 )
        {
          if ( v16(v14, (unsigned int)a2, v10) )
          {
            if ( gbWndobjUpdate )
            {
              gbWndobjUpdate = 0;
              vForceClientRgnUpdate();
            }
            goto LABEL_13;
          }
        }
      }
    }
    goto LABEL_12;
  }
  v25 = 0LL;
  if ( !(unsigned int)UserGetHwnd(a1, &v26, &v25) )
  {
    v11 = 2002;
LABEL_11:
    EngSetLastError(v11);
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  if ( !v25 )
  {
    v9 = v19[0];
    v10 = v26;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v25 + 188) != a2 )
  {
    v11 = 2000;
    goto LABEL_11;
  }
LABEL_13:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
  if ( v23[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v23);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v24);
  UserLeaveUserCritSec();
LABEL_31:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v19);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v20);
  return v8;
}
