/*
 * XREFs of ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F05EC
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01EC350 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000B31C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0024230 (DpiSetSchedulerCallbackState.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C01B473C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01F0D88 (-Initialize@DISPLAY_SOURCE@@AEAAJPEAVADAPTER_DISPLAY@@I@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01F1618 (DpiReadPnpRegistryValue.c)
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C02057C0 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02140C4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     MonitorCreateMonitorManager @ 0x1C02162DC (MonitorCreateMonitorManager.c)
 *     ?AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z @ 0x1C0216988 (-AddNewAdapterEntry@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@H@Z.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C0218410 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 *     ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C030D5B8 (-AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ @ 0x1C030E4CC (-ForceReducedHashSize@DXGADAPTERSOURCEHASH@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Initialize(ADAPTER_DISPLAY *this, __int64 a2, __int64 a3)
{
  int *v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  bool v17; // cf
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 result; // rax
  unsigned int *v24; // r13
  unsigned int *v25; // r15
  int RegistryValues; // eax
  int v27; // r12d
  int v28; // eax
  unsigned int v29; // eax
  _DWORD *v30; // rbx
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // edx
  bool v34; // zf
  bool v35; // al
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r15d
  char *v40; // rbx
  unsigned int i; // r10d
  __int64 v42; // rax
  __int64 v43; // rcx
  bool v44; // sf
  bool v45; // of
  __int64 v46; // rcx
  int v47; // ebx
  struct DXGGLOBAL *v48; // rax
  struct _KEVENT *v49; // rax
  struct DXGDODPRESENT *DodPresent; // rax
  __int64 v51; // rcx
  int (__fastcall *v52)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *); // rax
  __int64 v53; // rcx
  struct _LUID v54; // rcx
  __int64 v55; // rax
  DXGGLOBAL *Global; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  _DWORD *v61; // rcx
  struct DXGGLOBAL *v62; // rax
  __int64 v63; // rcx
  _DWORD *v64; // rdx
  int v65; // eax
  void *EventHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A8h] BYREF
  struct _LUID v68; // [rsp+68h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v69; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v70[50]; // [rsp+A8h] [rbp-60h] BYREF

  v3 = (int *)((char *)this + 24);
  *((_DWORD *)this + 6) = 0;
  v5 = *((_QWORD *)this + 2);
  v6 = v5;
  if ( *(_DWORD *)(v5 + 2096) >= 0x5010u && !*(_BYTE *)(v5 + 209) && (*(_DWORD *)(v5 + 2792) & 8) == 0 )
  {
    *(_QWORD *)&v69.Type = 16LL;
    *(_QWORD *)&v69.InputDataSize = 0LL;
    *(_QWORD *)&v69.Flags.0 = 0LL;
    HIDWORD(v69.hKmdProcessHandle) = 0;
    v69.pInputData = 0LL;
    v69.pOutputData = v3;
    v69.OutputDataSize = 4;
    v7 = DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v5, &v69, a3);
    if ( v7 < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v7;
      *v3 = 0;
      if ( *(int *)(*((_QWORD *)this + 2) + 2552LL) >= 8704 )
        *v3 |= 2u;
    }
    v6 = *((_QWORD *)this + 2);
    v12 = *v3;
    if ( *(int *)(v6 + 2552) < 9472 )
    {
      v12 &= 0xFFFFFFF3;
      *v3 = v12;
    }
    else if ( (v12 & 0xC) == 0xC )
    {
      WdLogSingleEntry2(2LL, this, 4649LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter 0x%I64x: Both HdrFP16ScanoutSupport and HdrARGB10ScanoutSupport can't be set to 1 at the same time",
        (__int64)this,
        4649LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
    if ( *(int *)(v6 + 2552) < 9984 )
    {
      v12 &= ~0x10u;
      *v3 = v12;
    }
    if ( *(int *)(v6 + 2552) < 10496 || *(_QWORD *)(v6 + 824) || !*(_DWORD *)(v6 + 1672) || (v12 & 2) == 0 )
    {
      v12 &= ~0x20u;
      *v3 = v12;
    }
    if ( *(int *)(v6 + 2552) < 12288 )
    {
      v12 &= ~0x40u;
      *v3 = v12;
    }
    if ( g_bDbgForceUsb4MonitorSupport )
      *v3 = v12 | 0x40;
  }
  v13 = *(_DWORD *)(v6 + 1672);
  *((_DWORD *)this + 24) = v13;
  v14 = v13;
  v16 = v13;
  v15 = 4000LL * v13;
  if ( !is_mul_ok(v16, 0xFA0uLL) )
    v15 = -1LL;
  v17 = __CFADD__(v15, 8LL);
  v18 = v15 + 8;
  if ( v17 )
    v18 = -1LL;
  v19 = operator new[](v18, 0x4B677844u, 64LL);
  if ( v19 )
  {
    v20 = v19 + 8;
    *(_QWORD *)v19 = v14;
    `vector constructor iterator'(
      (char *)(v19 + 8),
      4000LL,
      (unsigned int)v14,
      (void (__fastcall *)(char *))DISPLAY_SOURCE::DISPLAY_SOURCE);
  }
  else
  {
    v20 = 0LL;
  }
  v21 = *((unsigned int *)this + 24);
  *((_QWORD *)this + 16) = v20;
  if ( !v20 )
  {
    WdLogSingleEntry3(6LL, v21, *((_QWORD *)this + 2), -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate 0x%I64x of display sources for adapter 0x%I64x, returning 0x%I64x",
      *((unsigned int *)this + 24),
      *((_QWORD *)this + 2),
      -1073741801LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v22 = 0;
  if ( !(_DWORD)v21 )
  {
LABEL_27:
    result = MonitorCreateMonitorManager(this);
    if ( (int)result < 0 )
      return result;
    result = VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(this, (struct VIDPN_MGR **)this + 13);
    if ( (unsigned int)(result + 1071774934) <= 0x3FE1FCD5 || (int)result <= -1071774937 )
      return result;
    if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 436LL) & 0x100) != 0 )
    {
      v54 = (struct _LUID)*((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
      v55 = *((_QWORD *)this + 2);
      v68 = v54;
      EventHandle = *(void **)(v55 + 404);
      result = CreateOutputDuplManager(
                 *((_DWORD *)this + 24),
                 0LL,
                 &v68,
                 (struct _LUID *)&EventHandle,
                 (struct OUTPUTDUPL_MGR **)this + 15);
      if ( (int)result < 0 )
        return result;
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::AddIndirectOutputDuplMgr(
        Global,
        (struct OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 15) - 24LL) & -(__int64)(*((_QWORD *)this + 15) != 0LL)));
    }
    else
    {
      result = CreateOutputDuplManager(*((_DWORD *)this + 24), this, 0LL, 0LL, (struct OUTPUTDUPL_MGR **)this + 15);
      if ( (int)result < 0 )
        return result;
    }
    LODWORD(v67) = 1;
    *((_QWORD *)this + 75) = (char *)this + 592;
    *((_QWORD *)this + 74) = (char *)this + 592;
    v24 = (unsigned int *)((char *)this + 516);
    *((_DWORD *)this + 128) = 0;
    v25 = (unsigned int *)((char *)this + 520);
    *((_DWORD *)this + 129) = 200;
    *((_DWORD *)this + 130) = 1000;
    *((_DWORD *)this + 132) = 0;
    *((_DWORD *)this + 131) = 20000000;
    memset(v70, 0, 0x188uLL);
    v70[10] = (char *)this + 512;
    v70[5] = 0LL;
    LODWORD(v70[4]) = 0x4000000;
    LODWORD(v70[1]) = 288;
    v70[2] = L"ModeListCaching";
    LODWORD(v70[6]) = 0;
    v70[3] = &v67;
    v70[9] = L"SetTimingsFlags";
    v70[16] = L"ShortLinkTrainingTimeout";
    v70[23] = L"LongLinkTrainingTimeout";
    v70[30] = L"HPDFilterLimit";
    v70[7] = 0LL;
    LODWORD(v70[8]) = 288;
    LODWORD(v70[11]) = 0x4000000;
    v70[12] = 0LL;
    LODWORD(v70[13]) = 0;
    v70[14] = 0LL;
    LODWORD(v70[15]) = 288;
    LODWORD(v70[18]) = 0x4000000;
    v70[19] = 0LL;
    LODWORD(v70[20]) = 0;
    v70[21] = 0LL;
    LODWORD(v70[22]) = 288;
    LODWORD(v70[25]) = 0x4000000;
    v70[26] = 0LL;
    LODWORD(v70[27]) = 0;
    v70[28] = 0LL;
    LODWORD(v70[29]) = 288;
    LODWORD(v70[32]) = 0x4000000;
    v70[33] = 0LL;
    LODWORD(v70[34]) = 0;
    v70[35] = 0LL;
    LODWORD(v70[36]) = 288;
    LODWORD(v70[39]) = 0x4000000;
    v70[40] = 0LL;
    LODWORD(v70[41]) = 0;
    v70[37] = L"EnableVirtualRefreshRateOnExternalMonitor";
    v70[17] = (char *)this + 516;
    v70[24] = (char *)this + 520;
    v70[31] = (char *)this + 524;
    v70[38] = (char *)this + 528;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v70, 0LL, 0LL);
    v27 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      v28 = v67;
    }
    else
    {
      WdLogSingleEntry1(4LL, RegistryValues);
      if ( v27 != -1073741772 )
      {
        WdLogSingleEntry1(1LL, 4857LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Status == STATUS_OBJECT_NAME_NOT_FOUND",
          4857LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)this + 128) = 0;
      v28 = 1;
      LODWORD(v67) = 1;
      v27 = 0;
      *v24 = 200;
      *v25 = 1000;
    }
    *((_BYTE *)this + 292) = v28 == 1;
    v29 = *v25;
    if ( !*v25 || *v24 >= v29 || v29 >= 0x7530 )
    {
      WdLogSingleEntry3(2LL, *v24, *v24, *((_QWORD *)this + 2));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid link training timeout registry value (0x%I64x, 0x%I64x) on adapter 0x%I64x, fallback to the default value.",
        *v24,
        *v24,
        *((_QWORD *)this + 2),
        0LL,
        0LL);
      *v24 = 200;
      *((_DWORD *)this + 130) = 1000;
    }
    v30 = (_DWORD *)((char *)this + 524);
    v31 = *((_DWORD *)this + 131);
    if ( (unsigned int)(v31 - 1000000) > 0x5E69EC0 )
    {
      if ( v31 )
      {
        WdLogSingleEntry3(2LL, *((unsigned int *)this + 131), 20000000LL, *((_QWORD *)this + 2));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid hot-plug filter limit of %#x on adapter 0x%I64x.  Using default of %#x.",
          (unsigned int)*v30,
          20000000LL,
          *((_QWORD *)this + 2),
          0LL,
          0LL);
      }
      *v30 = 20000000;
    }
    if ( (*((_DWORD *)this + 128) & 1) != 0 )
    {
      v57 = *((_QWORD *)this + 2);
      if ( !*(_QWORD *)(v57 + 648) )
      {
        WdLogSingleEntry3(2LL, *(int *)(v57 + 408), *(unsigned int *)(v57 + 404), -1073741735LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Miniport driver wants t fallback to use DdiCommitVidPn but it does not supply pfnCommitVidPn on adapt"
                    "er (0x%I64x%08I64x), returning 0x%I64x.",
          *(int *)(*((_QWORD *)this + 2) + 408LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 404LL),
          -1073741735LL,
          0LL,
          0LL);
        return 3221225561LL;
      }
    }
    v32 = *((_QWORD *)this + 2);
    v33 = *(_DWORD *)(v32 + 412);
    if ( (*(_DWORD *)(v32 + 436) & 0x400) != 0 )
    {
      if ( v33 == 1297040209
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 216) + 64LL) + 40LL) + 28LL) < 0x700Au )
      {
        *((_BYTE *)this + 289) = 1;
        v35 = 1;
      }
      else
      {
        LODWORD(EventHandle) = ((unsigned int)*v3 >> 1) & 1;
        memset(v70, 0, 0x188uLL);
        LODWORD(v70[1]) = 288;
        v70[2] = L"ForceEnableDWMClone";
        LODWORD(v70[4]) = 67108868;
        LODWORD(v70[6]) = 4;
        v70[3] = &EventHandle;
        v70[5] = &EventHandle;
        RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v70, 0LL, 0LL);
        v34 = (_DWORD)EventHandle == 0;
        *((_BYTE *)this + 289) = (_DWORD)EventHandle != 0;
        v35 = !v34;
      }
    }
    else
    {
      if ( v33 == 1297040209 )
      {
        WdLogSingleEntry1(1LL, 4971LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetAdapter()->GetAdapterVendorId() != VENDOR_ID_QUALCOMM",
          4971LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v58 = *((_QWORD *)this + 2);
      v59 = *(unsigned int *)(v58 + 404);
      v60 = *(int *)(v58 + 408);
      if ( (*v3 & 2) != 0 )
      {
        WdLogSingleEntry3(2LL, v60, (unsigned int)v59, -1073741735LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Force to stop DWM clone supported adapter (0x%I64x%08I64x) due to target ID does not support DWM clon"
                    "e, returning 0x%I64x.",
          *(int *)(*((_QWORD *)this + 2) + 408LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 404LL),
          -1073741735LL,
          0LL,
          0LL);
        return 3221225561LL;
      }
      WdLogSingleEntry2(4LL, v60, v59);
      v35 = 0;
      *((_BYTE *)this + 289) = 0;
    }
    *((_BYTE *)this + 290) = v35;
    v36 = *((_QWORD *)this + 2);
    if ( *(int *)(v36 + 2820) < 2000 )
    {
      v37 = *(_QWORD *)(v36 + 216);
      LODWORD(EventHandle) = 0;
      if ( (int)DpiReadPnpRegistryValue(v37, L"EnableVirtualTopologySupport", &EventHandle, 4LL, 2) >= 0 )
      {
        if ( (_DWORD)EventHandle )
        {
          v61 = (_DWORD *)*((_QWORD *)this + 2);
          if ( (v61[109] & 0x800) == 0 )
          {
            WdLogSingleEntry3(2LL, (int)v61[102], (unsigned int)v61[101], -1073741735LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Force to stop adapter (0x%I64x%08I64x) due to target ID does not support reduced hash size and re"
                        "gistry requested to use virtual topologies, returning 0x%I64x.",
              *(int *)(*((_QWORD *)this + 2) + 408LL),
              *(unsigned int *)(*((_QWORD *)this + 2) + 404LL),
              -1073741735LL,
              0LL,
              0LL);
            return 3221225561LL;
          }
          *((_BYTE *)this + 290) = 1;
          v62 = DXGGLOBAL::GetGlobal();
          DXGADAPTERSOURCEHASH::ForceReducedHashSize((struct DXGGLOBAL *)((char *)v62 + 1384));
        }
      }
    }
    v38 = *((_QWORD *)this + 2);
    v39 = 0;
    if ( *(_QWORD *)(v38 + 2928) )
    {
      v40 = (char *)this + 448;
    }
    else
    {
      DodPresent = DxgkpCreateDodPresent(this, *(_QWORD *)(v38 + 688) != 0LL);
      v51 = *((_QWORD *)this + 2);
      v40 = (char *)this + 448;
      *((_QWORD *)this + 56) = DodPresent;
      if ( !DodPresent )
        v27 = -1073741801;
      memset(&v69, 0, 24);
      v52 = *(int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))(v51 + 2184);
      if ( v52 && v52(*(_QWORD *)(v51 + 2112), &v69) >= 0 )
      {
        v63 = 0LL;
        v64 = (_DWORD *)((char *)this + 420);
        do
        {
          v65 = *((unsigned __int8 *)&v69.Type + v63++);
          *v64++ = v65;
        }
        while ( v63 < 4 );
        *((_DWORD *)this + 110) = *((unsigned __int8 *)&v69.InputDataSize + 4);
        *((_DWORD *)this + 109) = *((unsigned __int8 *)&v69.InputDataSize + 5);
      }
      else
      {
        *((_DWORD *)this + 105) = 1;
      }
      v53 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 64) + 40LL) + 28LL) >= 0x3007u )
        DpiSetSchedulerCallbackState(v53, 3);
    }
    if ( *(_QWORD *)v40 )
    {
      for ( i = 0;
            i < *((_DWORD *)this + 24);
            *(_QWORD *)(2920 * v42 + *(_QWORD *)(*(_QWORD *)v40 + 8LL) + 384) = *(_QWORD *)(4000 * v42
                                                                                          + *((_QWORD *)this + 16)
                                                                                          + 928) )
      {
        v42 = i++;
      }
    }
    v43 = *((_QWORD *)this + 2);
    v45 = __OFSUB__(*(_DWORD *)(v43 + 2552), 8704);
    v44 = *(_DWORD *)(v43 + 2552) - 8704 < 0;
    v46 = *(_QWORD *)(v43 + 216);
    LOBYTE(v39) = v44 ^ v45;
    LODWORD(EventHandle) = v39;
    if ( (int)DpiReadPnpRegistryValue(v46, L"NeedToSuspendVidSchBeforeSetGammaRamp", &EventHandle, 4LL, 2) >= 0 )
    {
      v47 = (int)EventHandle;
      if ( (_DWORD)EventHandle != v39 )
        WdLogSingleEntry2(3LL, (unsigned int)EventHandle, *((_QWORD *)this + 2));
    }
    else
    {
      v47 = v39;
    }
    *((_BYTE *)this + 291) = v47 != 0;
    v48 = DXGGLOBAL::GetGlobal();
    if ( (int)DXGADAPTERSOURCEHASH::AddNewAdapterEntry(
                (struct DXGGLOBAL *)((char *)v48 + 1384),
                (const struct _LUID *)(*((_QWORD *)this + 2) + 404LL),
                *((unsigned __int8 *)this + 290)) < 0 )
    {
      WdLogSingleEntry1(1LL, 5129LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(TmpStatus)", 5129LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v27 >= 0 )
    {
      EventHandle = 0LL;
      v49 = IoCreateNotificationEvent(0LL, &EventHandle);
      *((_QWORD *)this + 82) = v49;
      if ( v49 )
      {
        KeClearEvent(v49);
        ObfReferenceObject(*((PVOID *)this + 82));
        ZwClose(EventHandle);
      }
      else
      {
        WdLogSingleEntry1(6LL, 5140LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to create adapter VidPnSourceUsedBySession event object.",
          5140LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)v27;
  }
  while ( 1 )
  {
    result = DISPLAY_SOURCE::Initialize((DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4000LL * v22), this, v22);
    if ( (int)result < 0 )
      return result;
    if ( ++v22 >= *((_DWORD *)this + 24) )
      goto LABEL_27;
  }
}
