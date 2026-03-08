/*
 * XREFs of ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C01DAEA8
 * Callers:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C01DAD84 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::Initialize(SESSION_ADAPTER *this, struct DXGADAPTER *a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v4; // rax

  if ( a2 )
  {
    *((_QWORD *)this + 2) = a2;
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 3) = -1LL;
    return 0LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)this + 8), (unsigned __int64 *)this + 3);
  *((_QWORD *)this + 2) = v4;
  if ( v4 )
    return 0LL;
  WdLogSingleEntry3(2LL, *((int *)this + 3), *((unsigned int *)this + 2), -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"SESSION_ADAPTER is created on an invalid adapter LUID 0x%I64x%08I64x, returning 0x%I64x.",
    *((int *)this + 3),
    *((unsigned int *)this + 2),
    -1073741811LL,
    0LL,
    0LL);
  return 3221225485LL;
}
