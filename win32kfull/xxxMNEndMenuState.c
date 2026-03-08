/*
 * XREFs of xxxMNEndMenuState @ 0x1C0202580
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0201C0C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C0219674 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00A11DC (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00E0FE0 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00E67A8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020124C (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0201B70 (NullifyLookasideRef.c)
 *     MNFlushDestroyedPopups @ 0x1C0201F10 (MNFlushDestroyedPopups.c)
 *     MNFreePopup @ 0x1C0202004 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C02024A0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuStateInternal @ 0x1C02026A0 (xxxMNEndMenuStateInternal.c)
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
