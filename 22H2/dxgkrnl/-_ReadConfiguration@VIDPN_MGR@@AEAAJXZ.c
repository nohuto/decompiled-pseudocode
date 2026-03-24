/*
 * XREFs of ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0188BC8
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C017C358 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C0188F90 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadConfiguration(unsigned __int64 this, __int64 a2)
{
  VIDPN_MGR *v2; // rbx
  int RegistryValues; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // al
  _DWORD *v24; // rdi
  int v25; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v34[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B8h]
  const wchar_t *v37; // [rsp+58h] [rbp-B0h]
  _DWORD *v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  _DWORD *v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-88h]
  int v43; // [rsp+88h] [rbp-80h]
  const wchar_t *v44; // [rsp+90h] [rbp-78h]
  char *v45; // [rsp+98h] [rbp-70h]
  int v46; // [rsp+A0h] [rbp-68h]
  char *v47; // [rsp+A8h] [rbp-60h]
  int v48; // [rsp+B0h] [rbp-58h]
  __int64 v49; // [rsp+B8h] [rbp-50h]
  int v50; // [rsp+C0h] [rbp-48h]
  __int128 v51; // [rsp+C8h] [rbp-40h]
  __int128 v52; // [rsp+D8h] [rbp-30h]
  __int64 v53; // [rsp+E8h] [rbp-20h]
  _QWORD v54[22]; // [rsp+F8h] [rbp-10h] BYREF

  v2 = (VIDPN_MGR *)this;
  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v33 = 2;
    memset(v54, 0, 0xA8uLL);
    LODWORD(v54[1]) = 288;
    LODWORD(v54[4]) = 0x4000000;
    v54[2] = L"BadMonitorModeDiag";
    LODWORD(v54[11]) = 0x4000000;
    v54[3] = &v33;
    v54[5] = 0LL;
    v54[9] = L"AssertOnDdiViolation";
    LODWORD(v54[6]) = 0;
    v54[10] = &g_DmmAssertOnDdiViolation;
    v54[7] = 0LL;
    LODWORD(v54[8]) = 288;
    v54[12] = 0LL;
    LODWORD(v54[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v54, 0LL, 0LL);
    v5 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      this = v33;
    }
    else
    {
      v6 = WdLogNewEntry5_WdDmmEvent(v4);
      *(_QWORD *)(v6 + 24) = v5;
      WdLogEvent5_WdDmmEvent(v6);
      if ( (_DWORD)v5 != -1073741772 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v7, a2);
        WdLogEvent5_WdAssertion(v27);
      }
      this = 2LL;
      v33 = 2;
    }
    if ( (unsigned int)(this - 1) > 1 )
    {
      v28 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v28 + 24) = v33;
      WdLogEvent5_WdError(v28);
    }
    else
    {
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = this;
    }
  }
  v8 = *((_QWORD *)v2 + 1);
  v33 = 0;
  if ( !v8 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v29);
    v8 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 216LL), L"AllowUnspecifiedVSync", &v33, 4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedVSync = v33 != 0;
  }
  else
  {
    v11 = WdLogNewEntry5_WdDmmEvent(v10);
    WdLogEvent5_WdDmmEvent(v11);
  }
  v12 = *((_QWORD *)v2 + 1);
  v33 = 0;
  if ( !v12 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v30);
    v12 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 216LL), L"AllowUnspecifiedHSync", &v33, 4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedHSync = v33 != 0;
  }
  else
  {
    v15 = WdLogNewEntry5_WdDmmEvent(v14);
    WdLogEvent5_WdDmmEvent(v15);
  }
  v16 = *((_QWORD *)v2 + 1);
  v33 = 0;
  if ( !v16 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v31);
    v16 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 216LL), L"AllowUnspecifiedPixelRate", &v33, 4LL) >= 0 )
  {
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v33 != 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v18);
    WdLogEvent5_WdDmmEvent(v19);
  }
  v20 = *((_QWORD *)v2 + 1);
  v33 = 0;
  if ( !v20 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v32);
    v20 = *((_QWORD *)v2 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 216LL), L"ForceDualViewBehavior", &v33, 4LL) >= 0 )
  {
    v23 = v33 != 0;
  }
  else
  {
    v22 = WdLogNewEntry5_WdDmmEvent(v21);
    WdLogEvent5_WdDmmEvent(v22);
    v23 = 0;
  }
  *((_BYTE *)v2 + 464) = v23;
  v24 = (_DWORD *)((char *)v2 + 488);
  v34[0] = 1000;
  LODWORD(v39) = 67108868;
  v46 = 67108868;
  v37 = L"RapidHPDTime";
  *((_DWORD *)v2 + 122) = 5;
  v38 = v34;
  v35 = 0LL;
  v40 = v34;
  LODWORD(v36) = 288;
  v44 = L"RapidHPDThresholdCount";
  LODWORD(v41) = 4;
  v53 = 0LL;
  v42 = 0LL;
  v43 = 288;
  v45 = (char *)v2 + 488;
  v47 = (char *)v2 + 488;
  v48 = 4;
  v49 = 0LL;
  v50 = 0;
  v51 = 0LL;
  v52 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v35, 0LL, 0LL);
  v25 = v34[0];
  if ( v34[0] > 0xEA60u )
    v25 = 60000;
  v34[0] = v25;
  *((_DWORD *)v2 + 121) = 10000 * v25 / KeQueryTimeIncrement();
  if ( *v24 == 1 )
  {
    *((_DWORD *)v2 + 122) = 0;
  }
  else if ( *v24 > 0x20u )
  {
    *v24 = 32;
  }
  return 0LL;
}
