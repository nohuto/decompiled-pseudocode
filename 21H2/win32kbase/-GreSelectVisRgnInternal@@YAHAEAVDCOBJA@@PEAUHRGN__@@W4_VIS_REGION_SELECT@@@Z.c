/*
 * XREFs of ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C003809C
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00362B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgnShared @ 0x1C0038E00 (GreSelectVisRgnShared.c)
 * Callees:
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C002B010 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C002B290 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C002B8FC (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002C0E0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     GreGetObjectOwner @ 0x1C0031450 (GreGetObjectOwner.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C00339F0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00348E0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0034C5C (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetRegionOwner @ 0x1C0035410 (GreSetRegionOwner.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0038B54 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00C8228 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C8F50 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB718 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C013C440 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0140A50 (-vReleaseVis@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectVisRgnInternal(DC **a1, HRGN a2, int a3)
{
  REGION *v3; // rbx
  unsigned int v7; // esi
  int v8; // r13d
  unsigned int *v9; // r14
  struct DC *v10; // r12
  bool v11; // zf
  REGION *v13[3]; // [rsp+20h] [rbp-59h] BYREF
  char v14; // [rsp+38h] [rbp-41h]
  __int64 v15; // [rsp+40h] [rbp-39h]
  char v16; // [rsp+48h] [rbp-31h]
  struct _RECTL v17; // [rsp+50h] [rbp-29h] BYREF
  struct REGION *v18[14]; // [rsp+60h] [rbp-19h] BYREF
  REGION *v19; // [rsp+E0h] [rbp+67h] BYREF
  HSEMAPHORE v20; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = 0LL;
  if ( *a1 )
  {
    v20 = ghsemVisRgnPublish;
    EngAcquireSemaphore(ghsemVisRgnPublish);
    v7 = 1;
    DC::vReleaseRao(*a1);
    v8 = 1;
    if ( !a2 )
    {
      DC::vReleaseVis(*a1);
      DC::bSetDefaultRegion(*a1);
      goto LABEL_35;
    }
    GreSetRegionOwner((__int64)a2, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 0, 0);
    v9 = (unsigned int *)v18[0];
    if ( !v18[0] )
    {
      v3 = prgnDefault;
      goto LABEL_27;
    }
    v10 = *a1;
    if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)*a1, 1) != -2147483630 )
    {
      if ( !GrepValidateVisRgn(v10, (struct REGION *)v9, (struct ERECTL *)&v17) )
        RGNOBJ::vSet((struct _RECTL **)v18, &v17);
      v9 = (unsigned int *)v18[0];
    }
    switch ( a3 )
    {
      case 1:
        v3 = (REGION *)v9;
        if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v18) )
        {
          v7 = 0;
          goto LABEL_27;
        }
        v18[0] = 0LL;
        break;
      case 2:
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13, v9[20]);
        v3 = v13[0];
        if ( v13[0] )
          RGNOBJ::vCopy((RGNOBJ *)v13, (struct RGNOBJ *)v18);
        else
          v3 = prgnDefault;
        RGNMEMOBJ::~RGNMEMOBJ(v13);
        break;
      case 4:
        DC::AcquireDcVisRgnExclusive(*a1);
        v3 = (REGION *)*((_QWORD *)*a1 + 143);
        if ( !v3 )
          v3 = prgnDefault;
        if ( v3 == prgnDefault )
        {
          v7 = 0;
        }
        else
        {
          v19 = v3;
          RGNOBJAPI::bSwap(v18, (struct RGNOBJ *)&v19);
          v3 = v19;
          v8 = 0;
        }
        if ( v14 )
          CPushLock::ReleaseLock((REGION *)((char *)v13[2] + 1112));
LABEL_27:
        if ( !v7 && a3 == 1 )
        {
LABEL_33:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
LABEL_35:
          SEMOBJ::vUnlock((SEMOBJ *)&v20);
          return v7;
        }
LABEL_29:
        if ( !v8 )
          goto LABEL_31;
        break;
      default:
        goto LABEL_29;
    }
    DC::vReleaseVis(*a1);
LABEL_31:
    DC::AcquireDcVisRgnExclusive(*a1);
    *((_QWORD *)*a1 + 143) = v3;
    v11 = v16 == 0;
    *((_DWORD *)v3 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    if ( !v11 )
      CPushLock::ReleaseLock((CPushLock *)(v15 + 1112));
    goto LABEL_33;
  }
  return 0;
}
