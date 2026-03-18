/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C002FA90 (GreSelectVisRgnShared.c)
 * Callees:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001EEA0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreGetObjectOwner @ 0x1C001F0C0 (GreGetObjectOwner.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001FD30 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0023D3C (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024D60 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0024DB0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C00267E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0027720 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     GreSetRegionOwner @ 0x1C00285E0 (GreSetRegionOwner.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D9320 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C00D9428 (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DB63C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C016D964 (-vReleaseVis@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  struct REGION *v3; // rbx
  unsigned int v7; // esi
  int v8; // r14d
  int IsEnabled; // eax
  struct DC *v10; // rcx
  bool v11; // zf
  struct REGION *v13; // [rsp+50h] [rbp-29h] BYREF
  char v14; // [rsp+58h] [rbp-21h]
  struct _RECTL v15; // [rsp+60h] [rbp-19h] BYREF
  struct REGION *v16[8]; // [rsp+70h] [rbp-9h] BYREF
  struct REGION *v17; // [rsp+E0h] [rbp+67h] BYREF
  HSEMAPHORE v18; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v18 = ghsemVisRgnPublish;
    EngAcquireSemaphore(ghsemVisRgnPublish);
    v8 = 1;
    v7 = 1;
    DC::vReleaseRao(*a1);
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_37;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, a2, 0, 0);
    if ( !v16[0] )
    {
      v3 = prgnDefault;
      goto LABEL_32;
    }
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1) != -2147483630 )
    {
      IsEnabled = Feature_3093221692__private_IsEnabled();
      v10 = *a1;
      if ( IsEnabled )
      {
        if ( !GrepValidateVisRgn(v10, v16[0], (struct ERECTL *)&v15) )
          RGNOBJ::vSet((struct _RECTL **)v16, &v15);
      }
      else
      {
        GrepValidateVisRgn(v10, v16[0]);
      }
    }
    switch ( a3 )
    {
      case 1:
        v3 = v16[0];
        if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v16) )
        {
          v16[0] = 0LL;
          goto LABEL_32;
        }
        wil_details_FeatureReporting_ReportUsageToService(
          &Feature_GdiEnableLiveKernelDump__private_reporting,
          23792193LL,
          0LL,
          0LL,
          &Feature_KeyboardInputVirtualization_logged_traits,
          1,
          3);
        DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 39LL, a2, v3, *((unsigned int *)v3 + 2), 0LL, 0LL, 0);
        v7 = 0;
        break;
      case 2:
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, *((_DWORD *)v16[0] + 20));
        v3 = v13;
        if ( v13 )
          RGNOBJ::vCopy((RGNOBJ *)&v13, (struct RGNOBJ *)v16);
        else
          v3 = prgnDefault;
        RGNMEMOBJ::~RGNMEMOBJ((PSLIST_ENTRY *)&v13);
        goto LABEL_32;
      case 4:
        DC::AcquireDcVisRgnExclusive(*a1);
        v3 = (struct REGION *)*((_QWORD *)*a1 + 142);
        if ( !v3 )
          v3 = prgnDefault;
        if ( v3 == prgnDefault )
        {
          v7 = 0;
        }
        else
        {
          v17 = v3;
          RGNOBJAPI::bSwap(v16, (__int128 **)&v17);
          v3 = v17;
          v8 = 0;
        }
        if ( v14 )
          GreInnermostPushLockMSRC85333::ReleaseLock((struct REGION *)((char *)v13 + 1112));
        break;
      default:
LABEL_32:
        DC::vReleaseVis(*a1);
        goto LABEL_33;
    }
    if ( !v7 && a3 == 1 )
    {
LABEL_35:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
LABEL_37:
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      return v7;
    }
    if ( !v8 )
    {
LABEL_33:
      DC::AcquireDcVisRgnExclusive(*a1);
      *((_QWORD *)*a1 + 142) = v3;
      v11 = v14 == 0;
      *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
      if ( !v11 )
        GreInnermostPushLockMSRC85333::ReleaseLock((struct REGION *)((char *)v13 + 1112));
      goto LABEL_35;
    }
    goto LABEL_32;
  }
  return 0;
}
