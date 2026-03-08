/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C02CDE74
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01ADBC0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(struct _LUID a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v5; // rax
  struct DXGADAPTER *v6; // rsi
  int v8; // eax
  unsigned int v9; // edi
  __int64 LowPart; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbp
  const wchar_t *v13; // r9
  __int64 v14; // rax
  LONG HighPart; // [rsp+54h] [rbp-C4h]
  unsigned __int64 v16; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v17[144]; // [rsp+60h] [rbp-B8h] BYREF

  HighPart = a1.HighPart;
  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v16);
  v6 = v5;
  if ( !v5 )
  {
    WdLogSingleEntry2(2LL, HighPart, a1.LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsAdapterVirtualTopologyEnabled function.",
      HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v5) )
  {
    WdLogSingleEntry1(1LL, 9899LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pAdapterIn->IsCoreResourceSharedOwner()",
      9899LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v6, 0LL);
  DXGADAPTER::ReleaseReference(v6);
  v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14 = *((_QWORD *)v6 + 365);
    if ( v14 )
    {
      *a2 = *(unsigned __int8 *)(v14 + 290);
      goto LABEL_11;
    }
    v11 = 9921LL;
    WdLogSingleEntry1(2LL, 9921LL);
    LowPart = 0LL;
    v13 = L"The selected adapter is render-only";
    v12 = 0LL;
    v9 = -1073741811;
  }
  else
  {
    LowPart = a1.LowPart;
    v11 = HighPart;
    v12 = v8;
    WdLogSingleEntry3(2LL, HighPart, (unsigned int)LowPart, v8);
    v13 = L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v11, LowPart, v12, 0LL, 0LL);
LABEL_11:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  return v9;
}
