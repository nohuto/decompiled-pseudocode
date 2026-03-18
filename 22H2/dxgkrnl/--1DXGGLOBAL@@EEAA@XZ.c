/*
 * XREFs of ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0311CA0
 * Callers:
 *     ??_GDXGGLOBAL@@EEAAPEAXI@Z @ 0x1C0051BE0 (--_GDXGGLOBAL@@EEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000A4DC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1?$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ @ 0x1C0041974 (--1-$DXGNODELIST@VADAPTER_DISPLAY@@VDXGPROTECTEDSESSION@@@@AEAA@XZ.c)
 *     ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x1C004C1D4 (-Stop@LongPowerButtonHoldListener@@QEAAXXZ.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C004E830 (McGenEventUnregister_EtwUnregister.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1C0051A70 (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0051BA8 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C0051C58 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01AB2B4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01B56FC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C01E6740 (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C02F992C (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C0307A00 (--1DXGBLACKBOX@@QEAA@XZ.c)
 *     ??1HMGRTABLE@@QEAA@XZ @ 0x1C03164E8 (--1HMGRTABLE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C0322BF4 (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1C034C458 (--1REMOTE_VSYNC@@QEAA@XZ.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1C034C6E8 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C0354968 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this)
{
  __int64 v1; // rbp
  DXGMMS_EXPORT **v3; // rbx
  DXGMMS_EXPORT *v4; // rdi
  void *v5; // rbx
  struct _ERESOURCE *v6; // rcx
  DXGDIAGNOSTICS *v7; // rcx
  DXGDIAGNOSTICS *v8; // rcx
  void *v9; // rbx
  struct DXGPROCESS *v10; // rcx
  void *v11; // rcx
  ULONG v12; // ebx
  ULONG v13; // ebx
  void *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  _QWORD *v18; // rcx
  ReferenceCounted *v19; // rcx

  v1 = 2LL;
  *(_QWORD *)this = &DXGGLOBAL::`vftable';
  v3 = (DXGMMS_EXPORT **)DXGGLOBAL::m_pDxgmmsExport;
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      DXGMMS_EXPORT::Release(*v3);
      operator delete(v4);
    }
    *v3++ = 0LL;
    --v1;
  }
  while ( v1 );
  if ( *((_BYTE *)this + 1347) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 160));
  v5 = (void *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    HMGRTABLE::~HMGRTABLE(*((HMGRTABLE **)this + 4));
    operator delete(v5);
  }
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 75);
  *((_QWORD *)this + 4) = 0LL;
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    operator delete(*((void **)this + 75));
    *((_QWORD *)this + 75) = 0LL;
  }
  v7 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 116);
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7);
    *((_QWORD *)this + 116) = 0LL;
  }
  v8 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 117);
  if ( v8 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v8);
    *((_QWORD *)this + 117) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 118);
  if ( v9 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 118));
    operator delete(v9);
    *((_QWORD *)this + 118) = 0LL;
  }
  if ( *((_BYTE *)this + 1345) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1136));
    *((_BYTE *)this + 1345) = 0;
  }
  if ( *((_BYTE *)this + 1346) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 1232));
    *((_BYTE *)this + 1346) = 0;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)this + 171);
  if ( v10 )
  {
    DXGPROCESS::DestroyDxgProcess(v10);
    *((_QWORD *)this + 171) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 38069);
  if ( v11 )
  {
    operator delete(v11);
    *((_QWORD *)this + 38069) = 0LL;
  }
  if ( *((_QWORD *)this + 108) )
  {
    v12 = RtlNumberOfClearBits((PRTL_BITMAP)this + 52);
    if ( v12 != (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry1(1LL, 1506LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RtlNumberOfClearBits(&m_GlobalAdapterOrdinalMap) == GetMaximumGlobalAdapterCount()",
        1506LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = RtlNumberOfClearBits((PRTL_BITMAP)this + 53);
    if ( v13 != 1024 - (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
    {
      WdLogSingleEntry1(1LL, 1507LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"RtlNumberOfClearBits(&m_SessionizedAdapterOrdinalMap) == ((MAX_ADAPTERS_CEILING) - GetMaximumGlobalAdapterCount())",
        1507LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RtlInitializeBitMap((PRTL_BITMAP)this + 52, 0LL, 0);
    RtlInitializeBitMap((PRTL_BITMAP)this + 53, 0LL, 0);
    operator delete(*((void **)this + 108));
    *((_QWORD *)this + 108) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 187);
  if ( v14 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 187));
    operator delete(v14);
    *((_QWORD *)this + 187) = 0LL;
  }
  v15 = *((_QWORD *)this + 240);
  if ( v15 )
  {
    ExUnsubscribeWnfStateChange(v15);
    *((_QWORD *)this + 240) = 0LL;
  }
  v16 = *((_QWORD *)this + 263);
  if ( v16 )
  {
    ExUnsubscribeWnfStateChange(v16);
    *((_QWORD *)this + 263) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 264);
  if ( v17 )
  {
    PoUnregisterPowerSettingCallback(v17);
    *((_QWORD *)this + 264) = 0LL;
  }
  if ( *((_DWORD *)this + 531) )
  {
    McGenEventUnregister_EtwUnregister(SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 531) = 0;
  }
  if ( !KeCancelTimer((PKTIMER)((char *)this + 1936)) )
    KeFlushQueuedDpcs();
  operator delete(*((void **)this + 38059));
  v18 = (_QWORD *)*((_QWORD *)this + 214);
  if ( v18 )
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v18);
  v19 = (ReferenceCounted *)*((_QWORD *)this + 38096);
  if ( v19 )
  {
    ReferenceCounted::Release(v19);
    *((_QWORD *)this + 38096) = 0LL;
  }
  if ( *((_BYTE *)this + 305000) )
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)((char *)this + 305008));
  if ( *((_DWORD *)this + 89) != *((_DWORD *)this + 88) )
  {
    WdLogSingleEntry1(1LL, 1588LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ShareHandleTable.IsEmpty()", 1588LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 73) != (DXGGLOBAL *)((char *)this + 584) )
  {
    WdLogSingleEntry1(1LL, 1589LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SyncObjectList.IsEmpty()", 1589LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 82) != (DXGGLOBAL *)((char *)this + 656) )
  {
    WdLogSingleEntry1(1LL, 1590LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_KeyedMutexList.IsEmpty()", 1590LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 96) != (DXGGLOBAL *)((char *)this + 768) )
  {
    WdLogSingleEntry1(1LL, 1591LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_AdapterList.IsEmpty()", 1591LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGGLOBAL **)this + 228) != (DXGGLOBAL *)((char *)this + 1824) )
  {
    WdLogSingleEntry1(1LL, 1592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SharedPowerList.IsEmpty()", 1592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 189) )
  {
    WdLogSingleEntry1(1LL, 1593LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_UefiFrameData == NULL", 1593LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305296));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 305104));
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGGLOBAL *)((char *)this + 304928));
  REMOTEMONITORMAPPING::Clear((DXGGLOBAL *)((char *)this + 304832), 0LL);
  LongPowerButtonHoldListener::Stop((DXGGLOBAL *)((char *)this + 304672));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304696));
  DXGBLACKBOX::~DXGBLACKBOX((void **)this + 38076);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304560));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304488));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 2128));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1840));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 228);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1632));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 200);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1552));
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 1432));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1384));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 1064));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 992));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 784));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 96);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 720));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 672));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 82);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 608));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 73);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 536));
  DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>::~DXGNODELIST<ADAPTER_DISPLAY,DXGPROTECTEDSESSION>((_QWORD *)this + 52);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 368));
  operator delete(*((void **)this + 42));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 288));
}
