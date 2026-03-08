/*
 * XREFs of ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C01C2FAC
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C01C260C (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C01C3080 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
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
