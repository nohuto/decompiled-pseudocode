/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C
 * Callers:
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     GreSelectVisRgn @ 0x1C0042CD0 (GreSelectVisRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C0197EE0 (GreSelectVisRgnShared.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C0019E80 (GreGetObjectOwner.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C00427F0 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00432EC (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0043670 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0045420 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0045C0C (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0046AF0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005173C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     GreSetRegionOwner @ 0x1C0052260 (GreSetRegionOwner.c)
 *     ?vStamp@REGION@@QEAAXXZ @ 0x1C00A4D7C (-vStamp@REGION@@QEAAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00D5DA4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00DDFD0 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C00DE090 (Feature_3160330556__private_IsEnabledDeviceUsage.c)
 *     Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage @ 0x1C00DE33C (Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DE9A0 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  REGION *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r14
  int v9; // r12d
  unsigned int *v10; // r15
  int IsEnabledDeviceUsage; // eax
  struct DC *v12; // rcx
  int v13; // edx
  struct _RECTL v15; // [rsp+50h] [rbp-30h] BYREF
  struct REGION *v16[4]; // [rsp+60h] [rbp-20h] BYREF
  REGION *v17; // [rsp+C0h] [rbp+40h] BYREF
  int v18; // [rsp+D0h] [rbp+50h]
  HSEMAPHORE v19; // [rsp+D8h] [rbp+58h] BYREF

  v18 = a3;
  v5 = 0LL;
  SGDGetSessionState(a1);
  if ( *a1 )
  {
    v8 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
    v19 = *(HSEMAPHORE *)(v8 + 128);
    EngAcquireSemaphore(v19);
    v7 = 1;
    DC::vReleaseRao(*a1);
    v9 = 1;
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_37;
    }
    GreSetRegionOwner(a2, 0LL);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, a2, 0, 0);
    v10 = (unsigned int *)v16[0];
    if ( !v16[0] )
    {
      v5 = *(REGION **)(v8 + 6400);
      goto LABEL_32;
    }
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1) != -2147483630 )
    {
      IsEnabledDeviceUsage = Feature_3160330556__private_IsEnabledDeviceUsage();
      v12 = *a1;
      if ( IsEnabledDeviceUsage )
      {
        if ( !GrepValidateVisRgn(v12, (struct REGION *)v10, (struct ERECTL *)&v15) )
          RGNOBJ::vSet((RGNOBJ *)v16, &v15);
      }
      else
      {
        GrepValidateVisRgn(v12, (struct REGION *)v10);
      }
    }
    v13 = v18;
    switch ( v18 )
    {
      case 1:
        v5 = (REGION *)v10;
        if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v16) )
        {
          v16[0] = 0LL;
        }
        else
        {
          Feature_GdiEnableLiveKernelDump__private_ReportDeviceUsage();
          DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 39LL, a2, v10, v10[2], 0LL, 0LL, 0);
          v7 = 0;
        }
        break;
      case 2:
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17, v10[12]);
        v5 = v17;
        if ( v17 )
          RGNOBJ::vCopy((RGNOBJ *)&v17, (struct RGNOBJ *)v16);
        else
          v5 = *(REGION **)(v8 + 6400);
        break;
      case 4:
        DC::AcquireDcVisRgnExclusive(*a1);
        v5 = (REGION *)*((_QWORD *)*a1 + 142);
        if ( v5 )
        {
          if ( v5 != *(REGION **)(v8 + 6400) )
          {
            v17 = (REGION *)*((_QWORD *)*a1 + 142);
            RGNOBJAPI::bSwap(v16, (struct RGNOBJ *)&v17);
            v5 = v17;
            v9 = 0;
LABEL_16:
            if ( LOBYTE(v15.right) )
              GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(*(_QWORD *)&v15.left + 1112LL));
            break;
          }
        }
        else
        {
          v5 = *(REGION **)(v8 + 6400);
        }
        v7 = 0;
        goto LABEL_16;
      default:
LABEL_27:
        if ( !v7 && v13 == 1 )
        {
LABEL_35:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
LABEL_37:
          SEMOBJ::vUnlock((PERESOURCE *)&v19);
          return v7;
        }
        if ( !v9 )
        {
LABEL_33:
          DC::AcquireDcVisRgnExclusive(*a1);
          *((_QWORD *)*a1 + 142) = v5;
          REGION::vStamp(v5);
          if ( LOBYTE(v15.right) )
            GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(*(_QWORD *)&v15.left + 1112LL));
          goto LABEL_35;
        }
LABEL_32:
        DC::vReleaseVis(*a1);
        goto LABEL_33;
    }
    v13 = v18;
    goto LABEL_27;
  }
  return 0;
}
