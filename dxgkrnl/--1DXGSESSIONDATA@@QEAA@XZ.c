void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this)
{
  __int64 v2; // rcx
  OUTPUTDUPL_SESSION_MGR *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // rax
  struct _KEVENT *v11; // rcx
  char *v12; // rcx
  void *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx

  v2 = *((_QWORD *)this + 2343);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 2343) = 0LL;
  }
  v3 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  if ( *((_DWORD *)this + 4738) )
  {
    WdLogSingleEntry1(1LL, 3417LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_cVailGuestReference", 3417LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    WdLogSingleEntry1(1LL, 3418LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr == m_pVailGuestObject", 3418LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGSESSIONDATA **)this + 2322) != (DXGSESSIONDATA *)((char *)this + 18576) )
  {
    WdLogSingleEntry1(1LL, 3423LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_SessionAdapterListHead)",
      3423LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((DXGSESSIONDATA **)this + 2324) != (DXGSESSIONDATA *)((char *)this + 18592) )
  {
    WdLogSingleEntry1(1LL, 3424LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_SessionViewListHead)",
      3424LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 4630) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_WORD *)this + 9317) )
  {
    WdLogSingleEntry1(1LL, 3431LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_NumDeviceInBatch == 0", 3431LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (void *)*((_QWORD *)this + 2330);
  if ( v4 )
  {
    operator delete(v4);
    *((_WORD *)this + 9316) = 0;
    *((_QWORD *)this + 2330) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 2331);
  *((_QWORD *)this + 2332) = 0LL;
  ObfDereferenceObject(v5);
  if ( *((_QWORD *)this + 2339) )
  {
    WdLogSingleEntry1(1LL, 3442LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DwmProcess == nullptr", 3442LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1684), this);
  v7 = (void *)*((_QWORD *)this + 2342);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 2342) = 0LL;
    *((_DWORD *)this + 4682) = 0;
  }
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 4690);
    if ( !v8 )
      break;
    v9 = (unsigned int)(v8 - 1);
    *((_DWORD *)this + 4690) = v9;
    v10 = (_QWORD *)(*((_QWORD *)this + 2346) + 32 * v9);
    if ( v10[1] )
    {
      v14 = v10[2];
      if ( *(_QWORD **)(v14 + 8) != v10 + 2 || (v15 = (_QWORD *)v10[3], (_QWORD *)*v15 != v10 + 2) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      --*(_DWORD *)(v10[1] + 4LL);
    }
  }
  v11 = (struct _KEVENT *)*((_QWORD *)this + 2344);
  *((_DWORD *)this + 4690) = -1;
  if ( v11 )
  {
    KeSetEvent(v11, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 2344));
    *((_QWORD *)this + 2344) = 0LL;
  }
  v12 = (char *)*((_QWORD *)this + 2346);
  if ( v12 != (char *)this + 18776 )
    operator delete(v12);
  v13 = (void *)*((_QWORD *)this + 2394);
  if ( v13 )
    operator delete(v13);
  if ( RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 19208)) != 2 )
  {
    WdLogSingleEntry1(1LL, 3498LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"RtlNumberOfClearBits(&m_SessionAdapterOrdinalMap) == (MAX_SESSIONIZED_ADAPTERS_PER_SESSION)",
      3498LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19160));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19088));
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)this + 2385, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19024));
  DispBrokerClient::~DispBrokerClient((DXGSESSIONDATA *)((char *)this + 18968));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18904));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18664));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
