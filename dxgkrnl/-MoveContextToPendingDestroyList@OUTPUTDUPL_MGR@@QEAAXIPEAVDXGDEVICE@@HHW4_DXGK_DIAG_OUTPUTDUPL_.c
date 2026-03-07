void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        OUTPUTDUPL_CONTEXT **a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v7; // rbx
  OUTPUTDUPL_CONTEXT *v8; // rcx
  OUTPUTDUPL_CONTEXT *v11; // rax
  __int64 v12; // r14
  OUTPUTDUPL_MGR *v13; // rcx
  unsigned int v14; // esi
  OUTPUTDUPL_CONTEXT **i; // rbx
  OUTPUTDUPL_CONTEXT *v16; // rcx
  unsigned int ProcessSessionId; // eax
  OUTPUTDUPL_CONTEXT *v19; // rcx
  OUTPUTDUPL_CONTEXT **v20; // rax
  OUTPUTDUPL_CONTEXT *v21; // rdx
  _BYTE v22[16]; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v23[8]; // [rsp+60h] [rbp-79h] BYREF
  DXGPUSHLOCK *v24; // [rsp+68h] [rbp-71h]
  int v25; // [rsp+70h] [rbp-69h]
  _OWORD v26[2]; // [rsp+78h] [rbp-61h] BYREF
  _DWORD v27[16]; // [rsp+A0h] [rbp-39h] BYREF

  v7 = a2;
  v8 = *a1;
  if ( v8 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v8 + 2)) )
  {
    WdLogSingleEntry1(1LL, 2337LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      2337LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v24 = (DXGPUSHLOCK *)(a1 + 3);
  if ( a1 != (OUTPUTDUPL_CONTEXT **)-24LL && a1[4] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive(v24);
  v11 = a1[2];
  v25 = 2;
  v12 = (__int64)v11 + 72 * v7;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)v12, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  memset(v27, 0, sizeof(v27));
  OUTPUTDUPL_MGR::InitializePacketHeader(v13, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v27);
  v27[1] = 64;
  v14 = 0;
  v27[15] = a6;
  v27[12] = 1;
  v27[13] = v7;
  for ( i = *(OUTPUTDUPL_CONTEXT ***)(v12 + 48); v14 < *((_DWORD *)a1 + 2); ++i )
  {
    v16 = *i;
    if ( *i )
    {
      if ( *((_DWORD *)v16 + 72) )
      {
        WdLogSingleEntry1(1LL, 2366LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(*ppCurrentContext)->IsPendingDestroy() == FALSE",
          2366LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v16 = *i;
      }
      if ( (!a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(v16) == a3)
        && (!a4 || PsGetCurrentProcess(v16) == *((_QWORD *)*i + 3))
        && (!a5 || !*((_DWORD *)*i + 82)) )
      {
        if ( *((_DWORD *)*i + 79) )
        {
          if ( !*(_DWORD *)(v12 + 64) )
          {
            WdLogSingleEntry1(1LL, 2389LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pContextList->cActiveContexts > 0",
              2389LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( (*(_DWORD *)(v12 + 64))-- == 1 )
          {
            ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)*i + 3));
            memset(v26, 0, sizeof(v26));
            LODWORD(v26[0]) = 15;
            SMgrGdiCallout(v26, ProcessSessionId, 0LL, 0LL, 0LL, 0LL);
          }
        }
        OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
        v19 = *i;
        v20 = a1 + 7;
        v21 = a1[7];
        if ( *((OUTPUTDUPL_CONTEXT ***)v21 + 1) != a1 + 7 )
          __fastfail(3u);
        *(_QWORD *)v19 = v21;
        *((_QWORD *)v19 + 1) = v20;
        *((_QWORD *)v21 + 1) = v19;
        *v20 = v19;
        *i = 0LL;
        v27[14] = v14;
        OUTPUTDUPL_MGR::LogEtwAndDiagnostics((OUTPUTDUPL_MGR *)a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v27, 1);
      }
    }
    ++v14;
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
}
