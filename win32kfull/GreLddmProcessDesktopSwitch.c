/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x1C001F4A4
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F5A0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void GreLddmProcessDesktopSwitch()
{
  __int64 v0; // rdi
  __int64 i; // rcx
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // ecx
  __int64 DxgkWin32kInterface; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  v0 = (int)UserRemoteConnectedSessionUsingXddm();
  for ( i = 0LL; ; i = v3 )
  {
    v2 = hdevEnumerateDisplayOnly(i);
    v3 = v2;
    if ( !v2 )
      break;
    v4 = *(_DWORD *)(v2 + 40) & 0x20401;
    v6 = v2;
    if ( v4 == 1 && ((unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v6) || v0) )
    {
      GreLockVisRgn(v3);
      GreLockDisplayDevice(v3);
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
      (*(void (__fastcall **)(_QWORD, _QWORD))(DxgkWin32kInterface + 408))(
        *(_QWORD *)(*(_QWORD *)(v3 + 2552) + 232LL),
        *(unsigned int *)(*(_QWORD *)(v3 + 2552) + 248LL));
      GreUnlockDisplayDevice(v3);
      GreUnlockVisRgn(v3);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
}
