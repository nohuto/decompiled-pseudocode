/*
 * XREFs of NtGdiSetPixelFormat @ 0x1C02D9FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     UserGetHwnd @ 0x1C01BEFCC (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0289C70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02B51BC (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02D9C90 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(__int64 *a1, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 DeviceHdev; // rdx
  unsigned int (__fastcall *v16)(__int64, _QWORD, __int64); // rax
  __int64 v17; // rcx
  Gre::Base *v18; // rcx
  ULONG v19; // ecx
  _QWORD v20[2]; // [rsp+20h] [rbp-39h] BYREF
  struct _RECTL v21; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v22[32]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp+7h] BYREF
  __int16 v24; // [rsp+70h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, (HDC)a1);
  v4 = 0;
  if ( !v20[0] || !*(_QWORD *)(v20[0] + 496LL) )
  {
    v19 = 6;
    goto LABEL_32;
  }
  v5 = XDCOBJ::ipfdDevMax((XDCOBJ *)v20);
  if ( a2 < 1 || a2 > v5 )
  {
    v19 = 87;
LABEL_32:
    EngSetLastError(v19);
    goto LABEL_33;
  }
  UserEnterUserCritSec(v7, v6, v8);
  v23[0] = 0LL;
  v23[1] = 0LL;
  v24 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, (struct XDCOBJ *)v20, 0);
  v9 = v20[0];
  v10 = 0LL;
  v26 = 0LL;
  if ( (*(_DWORD *)(v20[0] + 36LL) & 1) != 0 )
  {
    v25 = 0LL;
    if ( !(unsigned int)UserGetHwnd(a1, &v26, &v25) )
    {
      EngSetLastError(0x7D2u);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
      UserLeaveUserCritSec();
LABEL_33:
      DCOBJ::~DCOBJ((DCOBJ *)v20);
      return 0LL;
    }
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 188) == a2 )
        v4 = 1;
      else
        EngSetLastError(0x7D0u);
LABEL_11:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
      UserLeaveUserCritSec();
      DCOBJ::~DCOBJ((DCOBJ *)v20);
      return v4;
    }
    v9 = v20[0];
    v10 = v26;
  }
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
      if ( *(_QWORD *)(v20[0] + 496LL) == *(_QWORD *)(v12 + 2528) )
        v14 = (*(_QWORD *)(DeviceHdev + 2528) + 24LL) & -(__int64)(*(_QWORD *)(DeviceHdev + 2528) != 0LL);
      v12 = DeviceHdev;
    }
  }
  if ( !*(_QWORD *)(v12 + 3112) )
    goto LABEL_11;
  if ( (*(_DWORD *)(v14 + 88) & 0x200000) == 0 )
    goto LABEL_11;
  v16 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v12 + 3096);
  if ( !v16 || !v16(v14, (unsigned int)a2, v10) )
    goto LABEL_11;
  v18 = *(Gre::Base **)(SGDGetSessionState(v17) + 32);
  if ( *((_DWORD *)v18 + 5915) )
  {
    *((_DWORD *)v18 + 5915) = 0;
    vForceClientRgnUpdate(v18);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
  if ( v23[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v23);
  UserLeaveUserCritSec();
  if ( v20[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v20);
  return 1LL;
}
