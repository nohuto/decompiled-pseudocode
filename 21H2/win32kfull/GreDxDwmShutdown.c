/*
 * XREFs of GreDxDwmShutdown @ 0x1C0275600
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0098410 (xxxDwmStopRedirection.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C011778C (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void GreDxDwmShutdown()
{
  __int64 HDEV; // rax
  __int64 i; // rcx
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    ((void (__fastcall *)(__int64))gDxgkInterface[15])(-1LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
    HDEV = UserGetHDEV();
    GreLockVisRgn(HDEV);
    for ( i = 0LL; ; i = v5 )
    {
      v4 = hdevEnumerate(i);
      v5 = v4;
      if ( !v4 )
        break;
      v2 = *(_DWORD *)(v4 + 40);
      v7 = v5;
      if ( (v2 & 1) != 0
        && (v2 & 0x400) == 0
        && (v2 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v7) )
      {
        GreLockDisplayDevice(v5);
        if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))gDxgkInterface[36])(
               *(_QWORD *)(*(_QWORD *)(v5 + 2552) + 240LL),
               *(unsigned int *)(*(_QWORD *)(v5 + 2552) + 256LL)) )
        {
          if ( *(_QWORD *)(v5 + 2704) )
          {
            LOBYTE(v3) = 1;
            DrvDxgkDisplayOnOff(v5, v3, 3LL);
            (*(void (__fastcall **)(_QWORD, __int64))(v5 + 2704))(*(_QWORD *)(v5 + 1768), 1LL);
          }
        }
        GreUnlockDisplayDevice(v5);
      }
    }
    v6 = UserGetHDEV();
    GreUnlockVisRgn(v6);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
  }
}
