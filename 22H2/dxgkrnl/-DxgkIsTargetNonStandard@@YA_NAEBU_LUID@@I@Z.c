/*
 * XREFs of ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C0185C7C
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C018539C (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C0185D50 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01AC934 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

bool __fastcall DxgkIsTargetNonStandard(const struct _LUID *a1, unsigned int a2)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v5; // rax
  bool IsTargetNonStandard; // bl
  DXGADAPTER *v7; // rsi
  int v8; // eax
  __int64 v10; // rsi
  const wchar_t *v11; // r9
  unsigned __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v12);
  IsTargetNonStandard = 0;
  v7 = v5;
  if ( v5 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, v5, 0LL);
    DXGADAPTER::ReleaseReference(v7);
    v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
    if ( v8 < 0 )
    {
      v10 = v8;
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, v8);
      v11 = L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, Statue = 0x%I64x.";
    }
    else
    {
      if ( *((_QWORD *)v7 + 365) )
      {
        IsTargetNonStandard = DmmIsTargetNonStandard(v7, a2);
LABEL_5:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
        return IsTargetNonStandard;
      }
      v10 = -1073741811LL;
      WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
      v11 = L"Caller specified adapter 0x%I64x%08I64x is NOT a display adapter, returning 0x%I64x.";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, a1->HighPart, a1->LowPart, v10, 0LL, 0LL);
    goto LABEL_5;
  }
  WdLogSingleEntry3(2LL, a1->HighPart, a1->LowPart, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
    a1->HighPart,
    a1->LowPart,
    -1073741811LL,
    0LL,
    0LL);
  return 0;
}
