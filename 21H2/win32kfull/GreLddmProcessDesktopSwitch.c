/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x1C011768C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C011778C (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void GreLddmProcessDesktopSwitch()
{
  __int64 v0; // rdi
  __int64 i; // rcx
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v5);
  v0 = (int)UserRemoteConnectedSessionUsingXddm();
  for ( i = 0LL; ; i = v3 )
  {
    v2 = hdevEnumerate(i);
    v3 = v2;
    if ( !v2 )
      break;
    v5 = v2;
    v4 = *(_DWORD *)(v2 + 40);
    if ( (v4 & 1) != 0
      && (v4 & 0x400) == 0
      && (v4 & 0x20000) == 0
      && ((unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v5) || v0) )
    {
      GreLockVisRgn(v3);
      GreLockDisplayDevice(v3);
      gDxgkInterface[51](*(_QWORD *)(*(_QWORD *)(v3 + 2552) + 240LL), *(unsigned int *)(*(_QWORD *)(v3 + 2552) + 256LL));
      GreUnlockDisplayDevice(v3);
      GreUnlockVisRgn(v3);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v5);
}
