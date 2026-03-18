/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01E4944
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C01E4400 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01E45B0 (DxgkSessionConnected.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01E6388 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkSessionReconnected @ 0x1C01F3B70 (DxgkSessionReconnected.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C001CBA8 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C035561C (-RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z @ 0x1C0356620 (-UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(CTTMDEVICE **this, char a2)
{
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  struct DXGSESSIONDATA **v6; // rdi
  CTTMDEVICE *v7; // rsi
  CTTMDEVICE *v8; // r13
  CTTMDEVICE *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  struct DXGSESSIONDATA *v12; // rcx
  _QWORD *v13; // rbx
  CTTMDEVICE *v14; // rsi
  __int64 v15; // rcx
  _BYTE v16[16]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v17; // [rsp+60h] [rbp-58h] BYREF
  char v18; // [rsp+68h] [rbp-50h]
  char v19[8]; // [rsp+70h] [rbp-48h] BYREF
  DXGPUSHLOCK *v20; // [rsp+78h] [rbp-40h]
  int v21; // [rsp+80h] [rbp-38h]

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)SessionDataForSpecifiedSession + 2318, 0);
  DXGPUSHLOCK::AcquireExclusive(v20);
  v21 = 2;
  v6 = this + 17;
  if ( a2 )
  {
    if ( *v6 )
    {
      WdLogSingleEntry1(1LL, 6681LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pConsoleSessionData == NULL", 6681LL, 0LL, 0LL, 0LL, 0LL);
    }
    *v6 = SessionDataForSpecifiedSession;
    *((_DWORD *)this + 36) = *(_DWORD *)SessionDataForSpecifiedSession;
  }
  if ( *v6 && *((_BYTE *)*v6 + 18497) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v17,
      (struct DXGPUSHLOCKFAST *)(this + 42));
    if ( a2 )
    {
      v7 = this[45];
      while ( v7 != (CTTMDEVICE *)(this + 45) )
      {
        v8 = v7;
        if ( *((_QWORD *)v7 + 4) )
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
        v9 = v7;
        v7 = *(CTTMDEVICE **)v7;
        v10 = CTTMDEVICE::RegisterTtmDevice(v9, *v6);
        if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741130 )
        {
          v11 = v10;
          WdLogSingleEntry4(2LL, *((unsigned int *)v8 + 20), *((_QWORD *)v8 + 8), *(unsigned int *)*v6, v10);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to register TTM device for target 0x%I64x on adapter 0x%I64x to current console session 0x%I"
                      "64x, (Status = 0x%I64x).",
            *((unsigned int *)v8 + 20),
            *((_QWORD *)v8 + 8),
            *(unsigned int *)*v6,
            v11,
            0LL);
        }
      }
    }
    else
    {
      v12 = *v6;
      if ( *v6 )
      {
        v13 = (_QWORD *)*((_QWORD *)v12 + 2326);
        if ( v13 != (_QWORD *)((char *)v12 + 18608) )
        {
          do
          {
            v14 = (CTTMDEVICE *)(v13 - 2);
            if ( (struct DXGSESSIONDATA *)v13[2] != v12 )
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
            v13 = (_QWORD *)*v13;
            CTTMDEVICE::UnRegisterTtmDevice(v14, 1u);
            v12 = *v6;
          }
          while ( v13 != (_QWORD *)((char *)*v6 + 18608) );
        }
      }
    }
    if ( v18 )
    {
      v15 = v17;
      *(_QWORD *)(v17 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( !a2 )
  {
    if ( *v6 != SessionDataForSpecifiedSession )
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
    *v6 = 0LL;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
}
