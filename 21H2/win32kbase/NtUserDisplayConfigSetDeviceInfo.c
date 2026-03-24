/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C012D9E0
 * Callers:
 *     <none>
 * Callees:
 *     _DeviceInfoTranslateStatusDefault @ 0x1C001DCF8 (_DeviceInfoTranslateStatusDefault.c)
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0042FA8 (CheckAccessEx.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0146990 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  _DWORD *v2; // rdi
  unsigned int v3; // ebx
  int v4; // eax
  _DWORD *v5; // rdx
  size_t v6; // r14
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v10[4]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v11; // [rsp+50h] [rbp-88h] BYREF
  __int64 v12; // [rsp+60h] [rbp-78h]
  _QWORD v13[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v13, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v13[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[3]) = 30;
  LOBYTE(v13[6]) = -1;
  v2 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v10[0] = 0x2000;
  v10[1] = -1;
  EnterCrit(0, 1);
  if ( !gbVideoInitialized )
  {
LABEL_2:
    v3 = -1073741823;
    goto LABEL_31;
  }
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 0x10;
  else
    v4 = 0;
  if ( v4 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v10, 0) )
    goto LABEL_30;
  v5 = Src + 4;
  if ( (unsigned __int64)(Src + 4) >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  v6 = (unsigned int)*v5;
  if ( *v5 < 0x14u )
  {
    v3 = -1073741789;
    v2 = 0LL;
    goto LABEL_31;
  }
  v2 = (_DWORD *)Win32AllocPoolWithQuota((unsigned int)*v5, 0x63447355u);
  if ( !v2 )
    ExRaiseStatus(-1073741801);
  if ( qword_1C0256FC0 )
    qword_1C0256FC0(v2, &v11, Win32FreePool);
  if ( ((unsigned __int8)Src & (PsGetCurrentProcessWow64Process(v7) == 0 ? 3 : 0)) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&Src[v6] > MmUserProbeAddress || &Src[v6] < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, Src, v6);
  v2[1] = v6;
  if ( gfSwitchInProgress )
    goto LABEL_2;
  if ( *v2 != -19 )
  {
    if ( (unsigned int)UserIsWddmConnectedSession() )
      goto LABEL_25;
LABEL_30:
    v3 = -1073741790;
    goto LABEL_31;
  }
  if ( gSessionId != gServiceSessionId )
    goto LABEL_30;
LABEL_25:
  v8 = DrvDisplayConfigSetDeviceInfo(v2, v13);
  v3 = v8;
  if ( v8 == -2147483643 )
  {
    v3 = -1073741789;
  }
  else if ( v8 != -1073741789 )
  {
    v3 = DeviceInfoTranslateStatusDefault(*v2, v8);
  }
LABEL_31:
  if ( v2 && qword_1C02570E8 )
    qword_1C02570E8(&v11);
  UserSessionSwitchLeaveCrit();
  return v3;
}
