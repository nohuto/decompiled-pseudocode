/*
 * XREFs of ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x180011760
 * Callers:
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800115F4 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000A610 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::StartGoodFaithPLMExemptionTimer(char *pv)
{
  signed int v2; // ebx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 384);
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x13u,
      &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
      *((const wchar_t **)pv + 3));
  }
  if ( !*((_QWORD *)pv + 53) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(
                        CApplication::GoodFaithPLMExemptionTimerExpiredCallback,
                        pv,
                        (PTP_CALLBACK_ENVIRON)((char *)ThreadPool + 8));
    *((_QWORD *)pv + 53) = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      *((_DWORD *)pv + 109) = 1;
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x64u);
    }
    else
    {
      LastError = GetLastError();
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = LastError;
    }
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v2);
      }
      AudPolicyLogError("CApplication::StartGoodFaithPLMExemptionTimer", 1313, v2);
    }
  }
  if ( v7 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v7 = 0;
  }
  return (unsigned int)v2;
}
