/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B1990
 * Callers:
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C0163FDC (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02B15D0 (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C02B1E38 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C02B215C (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000A33C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C012E86C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02B1494 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1C02DA8C0 (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        struct _LUID *a1,
        struct _LUID a2,
        __int64 a3,
        char a4,
        int a5)
{
  struct _LUID v5; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 LowPart; // rdx
  unsigned int TargetUsage; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  _BYTE v38[8]; // [rsp+20h] [rbp-B1h] BYREF
  struct _LUID v39; // [rsp+28h] [rbp-A9h] BYREF
  __int64 v40; // [rsp+30h] [rbp-A1h] BYREF
  struct DXGADAPTER *v41[3]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v43[144]; // [rsp+60h] [rbp-71h] BYREF

  v5 = a1[3];
  v41[0] = 0LL;
  v39 = v5;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v41, &v39);
  v13 = v41[0];
  if ( v41[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v41[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43, 0LL) < 0 || !*((_QWORD *)v13 + 337) )
    {
      v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v19 + 24) = v39.HighPart;
      *(_QWORD *)(v19 + 32) = v5.LowPart;
      WdLogEvent5_WdWarning(v19);
      LODWORD(v15) = -1073741275;
LABEL_16:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43, v20);
      goto LABEL_17;
    }
    if ( !a4 || !*(_QWORD *)&a2 )
      goto LABEL_12;
    LowPart = a1[4].LowPart;
    v38[0] = 0;
    TargetUsage = DmmGetTargetUsage((__int64)v13, LowPart, v38);
    if ( TargetUsage != a5 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v27[3] = v39.HighPart;
      v27[4] = v5.LowPart;
      v27[5] = a1[4].LowPart;
      v27[6] = a5;
      WdLogEvent5_WdWarning(v27);
      LODWORD(v15) = -1073741267;
      goto LABEL_16;
    }
    LOBYTE(v23) = v38[0];
    v28 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v23, v25, v26);
    v15 = v28;
    if ( v28 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
      v32[3] = v39.HighPart;
      v32[4] = v5.LowPart;
      v32[5] = a1[4].LowPart;
      v32[6] = v15;
    }
    else
    {
LABEL_12:
      v33 = a1[4].LowPart;
      v42[0] = &v39;
      v40 = a3;
      v42[1] = &v40;
      v39 = a2;
      v34 = DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(v13, v33, v42);
      v15 = v34;
      if ( v34 >= 0 )
      {
        LODWORD(v15) = 0;
        goto LABEL_16;
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v20, v36);
      v32[3] = v15;
    }
    WdLogEvent5_WdWarning(v32);
    goto LABEL_16;
  }
  v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v14 + 24) = v39.HighPart;
  *(_QWORD *)(v14 + 32) = v5.LowPart;
  WdLogEvent5_WdWarning(v14);
  LODWORD(v15) = -1073741275;
LABEL_17:
  DXGADAPTER_REFERENCE::Assign(v41, 0LL);
  return (unsigned int)v15;
}
