/*
 * XREFs of ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0366080
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Feature_856993082__private_IsEnabledDeviceUsage @ 0x1C0026424 (Feature_856993082__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C01BA410 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::FreeHandle(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(a1 + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, a3);
  if ( (unsigned int)Feature_856993082__private_IsEnabledDeviceUsage() )
  {
    if ( v6 )
      HMGRTABLE::FreeHandle((HMGRTABLE *)(a1 + 40), a2);
  }
  else
  {
    HMGRTABLE::FreeHandle((HMGRTABLE *)(a1 + 40), a2);
    if ( !v6 )
    {
      WdLogSingleEntry1(1LL, 520LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject", 520LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
