void __fastcall DXGSESSIONMGR::SetConsoleSession(CTTMDEVICE **this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  struct DXGSESSIONDATA **v8; // rdi
  CTTMDEVICE *v9; // rsi
  CTTMDEVICE *v10; // r13
  CTTMDEVICE *v11; // rcx
  int v12; // eax
  __int64 v13; // rbx
  struct DXGSESSIONDATA *v14; // rcx
  _QWORD *v15; // rbx
  CTTMDEVICE *v16; // rsi
  __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v19; // [rsp+60h] [rbp-58h] BYREF
  char v20; // [rsp+68h] [rbp-50h]
  char v21[8]; // [rsp+70h] [rbp-48h] BYREF
  DXGPUSHLOCK *v22; // [rsp+78h] [rbp-40h]
  int v23; // [rsp+80h] [rbp-38h]

  v4 = a2;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)SessionDataForSpecifiedSession + 2318, 0);
  DXGPUSHLOCK::AcquireExclusive(v22);
  v23 = 2;
  v8 = this + 17;
  if ( v4 )
  {
    if ( *v8 )
    {
      WdLogSingleEntry1(1LL, 6681LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pConsoleSessionData == NULL", 6681LL, 0LL, 0LL, 0LL, 0LL);
    }
    *v8 = SessionDataForSpecifiedSession;
    *((_DWORD *)this + 36) = *(_DWORD *)SessionDataForSpecifiedSession;
  }
  if ( *v8 && *((_BYTE *)*v8 + 18497) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v19,
      (struct DXGPUSHLOCKFAST *)(this + 42));
    if ( v4 )
    {
      v9 = this[45];
      while ( v9 != (CTTMDEVICE *)(this + 45) )
      {
        v10 = v9;
        if ( *((_QWORD *)v9 + 4) )
        {
          WdLogSingleEntry1(1LL, 6711LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pTmmDevice->m_pRegisteredSession == NULL",
            6711LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v11 = v9;
        v9 = *(CTTMDEVICE **)v9;
        v12 = CTTMDEVICE::RegisterTtmDevice(v11, *v8);
        if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741130 )
        {
          v13 = v12;
          WdLogSingleEntry4(2LL, *((unsigned int *)v10 + 20), *((_QWORD *)v10 + 8), *(unsigned int *)*v8, v12);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to register TTM device for target 0x%I64x on adapter 0x%I64x to current console session 0x%I"
                      "64x, (Status = 0x%I64x).",
            *((unsigned int *)v10 + 20),
            *((_QWORD *)v10 + 8),
            *(unsigned int *)*v8,
            v13,
            0LL);
        }
      }
    }
    else
    {
      v14 = *v8;
      if ( *v8 )
      {
        v15 = (_QWORD *)*((_QWORD *)v14 + 2326);
        if ( v15 != (_QWORD *)((char *)v14 + 18608) )
        {
          do
          {
            v16 = (CTTMDEVICE *)(v15 - 2);
            if ( (struct DXGSESSIONDATA *)v15[2] != v14 )
            {
              WdLogSingleEntry1(1LL, 6746LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pTmmDevice->m_pRegisteredSession == m_pConsoleSessionData",
                6746LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v15 = (_QWORD *)*v15;
            CTTMDEVICE::UnRegisterTtmDevice(v16, 1u);
            v14 = *v8;
          }
          while ( v15 != (_QWORD *)((char *)*v8 + 18608) );
        }
      }
    }
    if ( v20 )
    {
      v17 = v19;
      *(_QWORD *)(v19 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v17, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v4 )
  {
    if ( *v8 != SessionDataForSpecifiedSession )
    {
      WdLogSingleEntry1(1LL, 6764LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pConsoleSessionData == pSessionData",
        6764LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_DWORD *)this + 36) = -1;
    *v8 = 0LL;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
}
