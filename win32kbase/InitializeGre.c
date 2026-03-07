char __fastcall InitializeGre(Gre::Base *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  char *SemaphoreInternal; // rax
  __int64 v8; // rcx
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  struct HOBJ__ *RectRgn; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD v27[4]; // [rsp+30h] [rbp-49h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-29h] BYREF
  __int64 v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+90h] [rbp+17h]
  __int64 v31; // [rsp+98h] [rbp+1Fh]
  PULONG BitMapBuffer; // [rsp+E0h] [rbp+67h] BYREF
  void *v33; // [rsp+E8h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+F0h] [rbp+77h] BYREF
  _QWORD *v35; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( Gre::Base::AllocateSessionGlobalsArea(a1)
    && (!qword_1C02D6078 || (int)qword_1C02D6078() < 0 || qword_1C02D6080 && (unsigned int)qword_1C02D6080()) )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(v1) + 24);
    *(_BYTE *)v2 = 1;
    *(_DWORD *)(v2 + 3008) = gbNonServiceSession == 0;
    *(_DWORD *)(v2 + 6512) = UMPDInitializeSecurityLevel();
    InitializeDefaultDCAttributes(v3);
    *(_BYTE *)(v2 + 2380) = (RtlGetSuiteMask() & 0x10) != 0;
    if ( (unsigned int)MultiUserGreCleanupInit() )
    {
      if ( qword_1C02D5B78 && (int)qword_1C02D5B78() >= 0 && qword_1C02D5B80 )
        qword_1C02D5B80();
      if ( (unsigned int)GreEngLoadModuleTrackInit()
        && (!qword_1C02D5B88 || (int)qword_1C02D5B88() < 0 || qword_1C02D5B90 && (unsigned int)qword_1C02D5B90()) )
      {
        *(_DWORD *)(v2 + 180) = bLockEtwEnabled();
        if ( (unsigned int)HmgCreate(v4) )
        {
          if ( RGNMEMOBJ::InitializeScanLookAsideList(v5) )
          {
            *(_DWORD *)(v2 + 6384) = 1;
            if ( qword_1C02D5B98 && (int)qword_1C02D5B98() >= 0 )
            {
              v6 = 0LL;
              v33 = 0LL;
              BitMapBuffer = 0LL;
              BitMapHeader = 0LL;
              v35 = 0LL;
              if ( qword_1C02D5BA0 )
              {
                qword_1C02D5BA0(&v33, &BitMapBuffer, &BitMapHeader, &v35);
                v6 = v33;
              }
              memset(v6, 0, 0x200uLL);
              *(_QWORD *)BitMapBuffer = 0LL;
              RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
              *v35 = 0LL;
            }
            SemaphoreInternal = GreCreateSemaphoreInternal(0);
            *(_QWORD *)(v2 + 8) = SemaphoreInternal;
            if ( SemaphoreInternal )
            {
              if ( (unsigned int)bInitPathAlloc(v8) )
              {
                v9 = GreCreateSemaphoreInternal(0);
                *(_QWORD *)(v2 + 24) = v9;
                if ( v9 )
                {
                  v10 = GreCreateSemaphoreInternal(0);
                  *(_QWORD *)(v2 + 16) = v10;
                  if ( v10 )
                  {
                    v11 = GreCreateSemaphoreInternal(0);
                    *(_QWORD *)(v2 + 32) = v11;
                    if ( v11 )
                    {
                      v12 = GreCreateSemaphoreInternal(0);
                      *(_QWORD *)(v2 + 56) = v12;
                      if ( v12 )
                      {
                        v13 = GreCreateSemaphoreInternal(0);
                        *(_QWORD *)(v2 + 64) = v13;
                        if ( v13 )
                        {
                          v14 = GreCreateSemaphoreInternal(0);
                          *(_QWORD *)(v2 + 72) = v14;
                          if ( v14 )
                          {
                            v15 = GreCreateSemaphoreInternal(0);
                            *(_QWORD *)(v2 + 80) = v15;
                            if ( v15 )
                            {
                              v16 = GreCreateSemaphoreInternal(0);
                              *(_QWORD *)(v2 + 88) = v16;
                              if ( v16 )
                              {
                                v17 = GreCreateSemaphoreInternal(0);
                                *(_QWORD *)(v2 + 96) = v17;
                                if ( v17 )
                                {
                                  v18 = GreCreateSemaphoreInternal(0);
                                  *(_QWORD *)(v2 + 128) = v18;
                                  if ( v18 )
                                  {
                                    v19 = GreCreateSemaphoreInternal(0);
                                    *(_QWORD *)(v2 + 112) = v19;
                                    if ( v19 )
                                    {
                                      v20 = GreCreateSemaphoreInternal(0);
                                      *(_QWORD *)(v2 + 104) = v20;
                                      if ( v20 )
                                      {
                                        v21 = GreCreateSemaphoreInternal(0);
                                        *(_QWORD *)(v2 + 120) = v21;
                                        if ( v21 )
                                        {
                                          v22 = GreCreateSemaphoreInternal(0);
                                          *(_QWORD *)(v2 + 136) = v22;
                                          if ( v22 )
                                          {
                                            RectRgn = GreCreateRectRgn(0, 0, 0, 0);
                                            *(_QWORD *)(v2 + 6392) = RectRgn;
                                            if ( RectRgn )
                                            {
                                              RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v27, (HRGN)RectRgn, 1, 0);
                                              if ( v27[0] )
                                              {
                                                *(_QWORD *)(v2 + 6400) = v27[0];
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
                                                if ( (unsigned int)bInitPALOBJ() )
                                                {
                                                  vInitXLATE();
                                                  if ( (unsigned int)bInitBMOBJ() )
                                                  {
                                                    if ( (unsigned int)bInitBRUSHOBJ(v24)
                                                      && (unsigned int)bInitICM(v25)
                                                      && (!qword_1C02D5BA8
                                                       || (int)qword_1C02D5BA8() < 0
                                                       || qword_1C02D5BB0 && (unsigned int)qword_1C02D5BB0())
                                                      && (!qword_1C02D5BB8
                                                       || (int)qword_1C02D5BB8() < 0
                                                       || qword_1C02D5BC0 && (unsigned int)qword_1C02D5BC0()) )
                                                    {
                                                      if ( qword_1C02D5BC8 && (int)qword_1C02D5BC8() >= 0 )
                                                      {
                                                        if ( qword_1C02D5BD0 )
                                                          qword_1C02D5BD0();
                                                      }
                                                      if ( (unsigned int)SfmState::Initialize(*(SfmState **)(v2 + 6472)) )
                                                      {
                                                        QueryTable.Flags = 0;
                                                        QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                        QueryTable.DefaultData = 0LL;
                                                        memset(&QueryTable.Name, 0, 20);
                                                        QueryTable.DefaultLength = 0;
                                                        v29 = 0LL;
                                                        v30 = 0;
                                                        v31 = 0LL;
                                                        *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573012LL) = 0;
                                                        RtlQueryRegistryValues(
                                                          0x80000003,
                                                          L"LanguagePack",
                                                          &QueryTable,
                                                          0LL,
                                                          0LL);
                                                        *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573016LL) = 1;
                                                        *(_DWORD *)(v2 + 184) = bUseActualGDIScale();
                                                        return 1;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v27);
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
