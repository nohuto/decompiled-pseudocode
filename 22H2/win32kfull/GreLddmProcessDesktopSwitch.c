/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x1C002A89C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C002A998 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

void GreLddmProcessDesktopSwitch()
{
  unsigned int IsRemoteConnection; // edi
  __int64 i; // rcx
  __int64 v2; // rax
  DYNAMICMODECHANGESHARELOCK *v3; // rcx
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v6);
  IsRemoteConnection = UserIsRemoteConnection();
  for ( i = 0LL; ; i = v4 )
  {
    v2 = hdevEnumerate(i);
    v4 = v2;
    if ( !v2 )
      break;
    v5 = *(_DWORD *)(v2 + 40);
    v6 = v2;
    if ( (v5 & 1) != 0
      && (v5 & 0x400) == 0
      && (v5 & 0x20000) == 0
      && ((unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v6) || IsRemoteConnection) )
    {
      GreLockVisRgn(v4);
      GreLockDisplayDevice(v4);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))gDxgkInterface[51])(
        *(_QWORD *)(*(_QWORD *)(v4 + 2576) + 240LL),
        *(unsigned int *)(*(_QWORD *)(v4 + 2576) + 256LL),
        IsRemoteConnection);
      GreUnlockDisplayDevice(v4);
      GreUnlockVisRgn(v4);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v3);
}
