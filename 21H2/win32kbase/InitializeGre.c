/*
 * XREFs of InitializeGre @ 0x1C029A0FC
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C005B364 (GreCreateSemaphoreInternal.c)
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C006B210 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     HmgCreate @ 0x1C006B24C (HmgCreate.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C009F7C0 (-bUseActualGDIScale@@YAHXZ.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C009F864 (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateRectRgn @ 0x1C009FA20 (GreCreateRectRgn.c)
 *     bLockEtwEnabled @ 0x1C009FB38 (bLockEtwEnabled.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C009FBEC (GreCreateSemaphoreNonTracked.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C009FC40 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C009FDB4 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C8F50 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     bInitBRUSHOBJ @ 0x1C02982A0 (bInitBRUSHOBJ.c)
 *     bInitICM @ 0x1C029A608 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C029A888 (bInitBMOBJ.c)
 *     vInitXLATE @ 0x1C029A92C (vInitXLATE.c)
 *     bInitPALOBJ @ 0x1C029A9B8 (bInitPALOBJ.c)
 */

char InitializeGre()
{
  int v0; // ebx
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  void *v5; // rcx
  HRGN RectRgn; // rax
  SfmState *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+68h] [rbp-31h]
  int v15; // [rsp+70h] [rbp-29h]
  __int64 v16; // [rsp+78h] [rbp-21h]
  _QWORD v17[10]; // [rsp+A0h] [rbp+7h] BYREF
  PULONG BitMapBuffer; // [rsp+100h] [rbp+67h] BYREF
  void *v19; // [rsp+108h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+110h] [rbp+77h] BYREF
  _QWORD *v21; // [rsp+118h] [rbp+7Fh] BYREF

  G_fServiceSession = gbNonServiceSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedExchangeAdd(&CountInit, 0xFFFFFFFF) != 1 )
    return 1;
  InitializeDefaultDCAttributes();
  RtlGetSuiteMask();
  qword_1C0255310 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    v0 = -1073741637;
    if ( qword_1C02565F0 )
      v1 = qword_1C02565F0();
    else
      v1 = -1073741637;
    if ( v1 >= 0 && qword_1C02565F8 )
      qword_1C02565F8();
    qword_1C0255300 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock )
    {
      v2 = qword_1C0256600 ? qword_1C0256600() : -1073741637;
      if ( v2 < 0 || (!qword_1C0256608 ? (v3 = 0) : (v3 = qword_1C0256608()), v3) )
      {
        gbLockEtw = bLockEtwEnabled();
        if ( (unsigned int)HmgCreate() )
        {
          if ( RGNMEMOBJ::InitializeScanLookAsideList() )
          {
            REGION::ulUniqueREGION = 1;
            if ( qword_1C0256610 )
              v4 = qword_1C0256610();
            else
              v4 = -1073741637;
            if ( v4 >= 0 )
            {
              v5 = 0LL;
              v19 = 0LL;
              BitMapBuffer = 0LL;
              BitMapHeader = 0LL;
              v21 = 0LL;
              if ( qword_1C0256618 )
              {
                qword_1C0256618(&v19, &BitMapBuffer, &BitMapHeader, &v21);
                v5 = v19;
              }
              memset(v5, 0, 0x200uLL);
              *(_QWORD *)BitMapBuffer = 0LL;
              RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
              *v21 = 0LL;
            }
            ghsemDriverMgmt = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
            if ( ghsemDriverMgmt )
            {
              PATHALLOC::hsemFreelist = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
              if ( PATHALLOC::hsemFreelist )
              {
                PATHALLOC::freelist = 0LL;
                PATHALLOC::cFree = 0;
                PATHALLOC::cAllocated = 0;
                ghsemRFONTList = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                if ( ghsemRFONTList )
                {
                  ghsemCLISERV = GreCreateSemaphoreInternal(0);
                  if ( ghsemCLISERV )
                  {
                    ghsemAtmfdInit = GreCreateSemaphoreInternal(0);
                    if ( ghsemAtmfdInit )
                    {
                      ghsemWndobj = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                      if ( ghsemWndobj )
                      {
                        ghsemFntCache = GreCreateSemaphoreInternal(0);
                        if ( ghsemFntCache )
                        {
                          ghsemDwmState = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                          if ( ghsemDwmState )
                          {
                            ghsemDynamicModeChange = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                            if ( ghsemDynamicModeChange )
                            {
                              ghsemDCVisRgn = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                              if ( ghsemDCVisRgn )
                              {
                                ghsemVisRgnUniqueness = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                if ( ghsemVisRgnUniqueness )
                                {
                                  ghsemVisRgnPublish = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                  if ( ghsemVisRgnPublish )
                                  {
                                    ghsemSprite = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                    if ( ghsemSprite )
                                    {
                                      ghsemMapRot = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                      if ( ghsemMapRot )
                                      {
                                        ghsemGreLock = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                        if ( ghsemGreLock )
                                        {
                                          ghsemHT = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                          if ( ghsemHT )
                                          {
                                            RectRgn = (HRGN)GreCreateRectRgn(0, 0, 0, 0);
                                            hrgnDefault = RectRgn;
                                            if ( RectRgn )
                                            {
                                              RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, RectRgn, 1, 0);
                                              if ( v17[0] )
                                              {
                                                prgnDefault = (struct REGION *)v17[0];
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
                                                if ( (unsigned int)bInitPALOBJ() )
                                                {
                                                  vInitXLATE();
                                                  if ( (unsigned int)bInitBMOBJ() )
                                                  {
                                                    if ( (unsigned int)bInitBRUSHOBJ() && (unsigned int)bInitICM() )
                                                    {
                                                      v8 = qword_1C0256620 ? qword_1C0256620() : -1073741637;
                                                      if ( v8 < 0
                                                        || (!qword_1C0256628 ? (v9 = 0) : (v9 = qword_1C0256628()), v9) )
                                                      {
                                                        v10 = qword_1C0256630 ? qword_1C0256630() : -1073741637;
                                                        if ( v10 < 0
                                                          || (!qword_1C0256638 ? (v11 = 0) : (v11 = qword_1C0256638()),
                                                              v11) )
                                                        {
                                                          if ( qword_1C0256640 )
                                                            v0 = qword_1C0256640();
                                                          if ( v0 >= 0 )
                                                          {
                                                            if ( qword_1C0256648 )
                                                              qword_1C0256648();
                                                          }
                                                          if ( (unsigned int)SfmState::Initialize(v7) )
                                                          {
                                                            QueryTable.Flags = 0;
                                                            QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                            memset(&QueryTable.Name, 0, 20);
                                                            QueryTable.DefaultData = 0LL;
                                                            QueryTable.DefaultLength = 0;
                                                            v14 = 0LL;
                                                            v15 = 0;
                                                            v16 = 0LL;
                                                            *((_DWORD *)gpGdiSharedMemory + 393253) = 0;
                                                            RtlQueryRegistryValues(
                                                              0x80000003,
                                                              L"LanguagePack",
                                                              &QueryTable,
                                                              0LL,
                                                              0LL);
                                                            *((_DWORD *)gpGdiSharedMemory + 393254) = 1;
                                                            gbUseActualGDIScale = bUseActualGDIScale();
                                                            return 1;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
