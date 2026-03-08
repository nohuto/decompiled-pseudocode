/*
 * XREFs of GreSuspendDirectDraw @ 0x1C001F220
 * Callers:
 *     DrvDisableMDEV @ 0x1C001D710 (DrvDisableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001DC20 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C001E10C (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F7C4 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001F834 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreUnlockDisplayDevice @ 0x1C001F8B0 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C001F900 (GreLockDisplayDevice.c)
 *     UserIsWddmConnectedSession @ 0x1C0022420 (UserIsWddmConnectedSession.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     GreLockVisRgn @ 0x1C00794E0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00795D0 (GreUnlockVisRgn.c)
 *     DrvDxgkDisplayOnOff @ 0x1C00CE2F0 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(__int64 a1, char a2)
{
  int v4; // eax
  __int64 j; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  __int64 DxgkWin32kInterface; // rax
  char v10; // al
  __int64 v11; // rdx
  _BOOL8 v12; // rdx
  __int64 i; // rcx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // [rsp+40h] [rbp+20h] BYREF
  char v18; // [rsp+48h] [rbp+28h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1928LL)
                                                  + 1573008LL));
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  v17 = a1;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( (v4 & 1) != 0 )
    {
      if ( (v4 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v16 )
        {
          v15 = hdevEnumerate<1>(i);
          v16 = v15;
          if ( !v15 )
            break;
          v14 = *(_DWORD *)(v15 + 40) & 0x20001;
          v17 = v15;
          if ( v14 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) && *(_QWORD *)(v16 + 24) == a1 )
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v17);
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v17);
      }
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  if ( (a2 & 1) != 0 && (unsigned int)UserIsWddmConnectedSession() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    for ( j = 0LL; ; j = v7 )
    {
      v6 = hdevEnumerate<1>(j);
      v7 = v6;
      if ( !v6 )
        break;
      v8 = *(_DWORD *)(v6 + 40) & 0x20401;
      v17 = v6;
      if ( v8 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v17) )
      {
        GreLockVisRgn(v7);
        GreLockDisplayDevice(v7);
        v18 = 0;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(DxgkWin32kInterface + 448))(
                *(_QWORD *)(*(_QWORD *)(v7 + 2552) + 232LL),
                *(unsigned int *)(*(_QWORD *)(v7 + 2552) + 248LL),
                &v18);
        *(_DWORD *)(v7 + 2592) = 1;
        if ( ((a2 & 8) == 0 || v10) && *(_QWORD *)(v7 + 2704) )
        {
          if ( (a2 & 4) != 0 && v18 )
            v11 = 0LL;
          else
            LOBYTE(v11) = 1;
          DrvDxgkDisplayOnOff(v7, v11, 3LL);
          v12 = (a2 & 4) == 0 || !v18;
          (*(void (__fastcall **)(_QWORD, _BOOL8))(v7 + 2704))(*(_QWORD *)(v7 + 1768), v12);
        }
        *(_DWORD *)(v7 + 2592) = 0;
        GreUnlockDisplayDevice(v7);
        GreUnlockVisRgn(v7);
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  }
}
