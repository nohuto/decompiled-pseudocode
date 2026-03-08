/*
 * XREFs of ?AddMessageToChannel@DXGVMBUSCHANNEL@@IEAAJIPEAXI0PEAI_N@Z @ 0x1C0361178
 * Callers:
 *     ?PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z @ 0x1C0362290 (-PostAsyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI@Z.c)
 *     ?SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z @ 0x1C03626D0 (-SendSyncMessage@DXGCHANNELENDPOINTPROXY@@UEAAJPEAXI0PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C005A2B0 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::AddMessageToChannel(
        DXGVMBUSCHANNEL *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int *a6,
        bool a7)
{
  __int64 v7; // rbp
  __int64 v11; // rbx
  DXGGLOBAL *Global; // rax
  _BYTE v14[16]; // [rsp+50h] [rbp-38h] BYREF

  v7 = a2;
  LODWORD(v11) = -1073741823;
  if ( a3 && a4 > 8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGVMBUSCHANNEL *)((char *)this + 120), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
    if ( ((unsigned __int8)a3 & 7) != 0 )
    {
      WdLogSingleEntry1(1LL, 581LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(reinterpret_cast<ULONG_PTR>(pRequest) & 0x7) == 0",
        581LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (a4 & 7) != 0 )
    {
      WdLogSingleEntry1(1LL, 582LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(RequestSize & 0x7) == 0", 582LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (a5 & 7) != 0 )
    {
      WdLogSingleEntry1(1LL, 583LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(reinterpret_cast<ULONG_PTR>(pReturnBuffer) & 0x7) == 0",
        583LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( a6 && (*a6 & 7) != 0 )
    {
      WdLogSingleEntry1(1LL, 584LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(nullptr == pReturnBufferSize) || ((*pReturnBufferSize & 0x7) == 0)",
        584LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *a3 != (_DWORD)v7 )
    {
      WdLogSingleEntry1(1LL, 586LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"((DXGKVMBUS_PACKETHEADER*)pRequest)->SubscriberTag == SubscriberTag",
        586LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v11 = (int)((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, bool, unsigned __int64, unsigned __int64, _QWORD))qword_1C013CEC0)(
                 *((_QWORD *)this + 2),
                 a3,
                 a4,
                 0LL,
                 a7,
                 a5 & -(__int64)a7,
                 (unsigned __int64)a6 & -(__int64)a7,
                 0LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( (int)v11 < 0 )
      WdLogSingleEntry4(3LL, v7, v11, 605LL, this);
    if ( v14[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  }
  return (unsigned int)v11;
}
