/*
 * XREFs of xxxMNEndMenuState @ 0x1C021BF30
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C02303C0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C021AF28 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C021B890 (NullifyLookasideRef.c)
 *     MNFlushDestroyedPopups @ 0x1C021BC20 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C021BD14 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C021BE70 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuStateInternal @ 0x1C021C050 (xxxMNEndMenuStateInternal.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall xxxMNEndMenuState(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD v4[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v4, 0LL);
  *(_DWORD *)(a1 + 8) |= 0x1000000u;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)a1 )
    {
      MNFlushDestroyedPopups(*(_DWORD **)a1);
      MNUnlinkDelayedFreePopups(*(_QWORD *)a1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v4, *(_QWORD *)a1);
      **(_DWORD **)v4[0] |= 0x20000000u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v5, *(_QWORD *)a1);
      MNFreePopup(v5);
    }
    xxxMNEndMenuStateInternal(gptiCurrent, a1);
    if ( !*(_QWORD *)v4[0] || (**(_DWORD **)v4[0] & 0x40000000) != 0 )
    {
      if ( *(_QWORD *)v4[0] )
        **(_DWORD **)v4[0] &= ~0x20000000u;
    }
    else if ( *(void *const *)v4[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v2 = *(_QWORD *)v4[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v4[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v2);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v4);
}
