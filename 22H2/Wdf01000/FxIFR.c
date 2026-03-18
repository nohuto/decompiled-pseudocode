/*
 * XREFs of FxIFR @ 0x1C000AA90
 * Callers:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_qcq @ 0x1C000C14C (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_qqcLq @ 0x1C000CAD0 (WPP_IFR_SF_qqcLq.c)
 *     WPP_IFR_SF_qdq @ 0x1C000F6F0 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_Lq @ 0x1C00127BC (WPP_IFR_SF_Lq.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqcqL @ 0x1C00138D8 (WPP_IFR_SF_qqcqL.c)
 *     WPP_IFR_SF_qqcqLd @ 0x1C00139AC (WPP_IFR_SF_qqcqLd.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_DDd @ 0x1C002E6DC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_PqD @ 0x1C002E93C (WPP_IFR_SF_PqD.c)
 *     WPP_IFR_SF_dq @ 0x1C002EA2C (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002EB50 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_LqqLd @ 0x1C002F4D0 (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1C002F60C (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qDd @ 0x1C002F728 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C002F86C (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qiqd @ 0x1C002F9D4 (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_ql @ 0x1C002FAEC (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qqDd @ 0x1C002FC10 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dLd @ 0x1C0032698 (WPP_IFR_SF_dLd.c)
 *     WPP_IFR_SF_qLLd @ 0x1C0032784 (WPP_IFR_SF_qLLd.c)
 *     WPP_IFR_SF_qLqdi @ 0x1C003289C (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qi @ 0x1C00329D0 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C0032A98 (WPP_IFR_SF_qii.c)
 *     WPP_IFR_SF_qld @ 0x1C0032B88 (WPP_IFR_SF_qld.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032C78 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_dqd @ 0x1C0034404 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_dqq @ 0x1C0034554 (WPP_IFR_SF_dqq.c)
 *     WPP_IFR_SF_qqiDq @ 0x1C0034640 (WPP_IFR_SF_qqiDq.c)
 *     WPP_IFR_SF_qqii @ 0x1C0034770 (WPP_IFR_SF_qqii.c)
 *     WPP_IFR_SF_qqiid @ 0x1C0034878 (WPP_IFR_SF_qqiid.c)
 *     WPP_IFR_SF_qqqD @ 0x1C00349A8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qqqDd @ 0x1C0034AB8 (WPP_IFR_SF_qqqDd.c)
 *     WPP_IFR_SF_sqqii @ 0x1C0034BEC (WPP_IFR_SF_sqqii.c)
 *     WPP_IFR_SF_qqdid @ 0x1C00359F4 (WPP_IFR_SF_qqdid.c)
 *     WPP_IFR_SF_qD @ 0x1C003613C (WPP_IFR_SF_qD.c)
 *     WPP_IFR_SF_qDPq @ 0x1C00372F0 (WPP_IFR_SF_qDPq.c)
 *     WPP_IFR_SF_qDPqd @ 0x1C00373FC (WPP_IFR_SF_qDPqd.c)
 *     WPP_IFR_SF_qPPd @ 0x1C0037538 (WPP_IFR_SF_qPPd.c)
 *     WPP_IFR_SF_qc @ 0x1C0037650 (WPP_IFR_SF_qc.c)
 *     WPP_IFR_SF_DD @ 0x1C0037BE8 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_Ddd @ 0x1C0037D00 (WPP_IFR_SF_Ddd.c)
 *     WPP_IFR_SF_sq @ 0x1C0038C64 (WPP_IFR_SF_sq.c)
 *     WPP_IFR_SF_D @ 0x1C0039220 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qdd @ 0x1C003C938 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qll @ 0x1C003CA88 (WPP_IFR_SF_qll.c)
 *     WPP_IFR_SF_ds @ 0x1C003D520 (WPP_IFR_SF_ds.c)
 *     WPP_IFR_SF_s @ 0x1C003D654 (WPP_IFR_SF_s.c)
 *     WPP_IFR_SF_sd @ 0x1C003D75C (WPP_IFR_SF_sd.c)
 *     WPP_IFR_SF_Dddd @ 0x1C003E778 (WPP_IFR_SF_Dddd.c)
 *     WPP_IFR_SF_iid @ 0x1C003F450 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C003F53C (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qddq @ 0x1C003F658 (WPP_IFR_SF_qddq.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C003F768 (WPP_IFR_SF_qdqqqqd.c)
 *     WPP_IFR_SF_qqcq @ 0x1C0040EE0 (WPP_IFR_SF_qqcq.c)
 *     WPP_IFR_SF_Zd @ 0x1C00433EC (WPP_IFR_SF_Zd.c)
 *     WPP_IFR_SF_cd @ 0x1C0046B2C (WPP_IFR_SF_cd.c)
 *     WPP_IFR_SF_qqcDq @ 0x1C0046C48 (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1C0046D84 (WPP_IFR_SF_qqcDqd.c)
 *     WPP_IFR_SF_qsd @ 0x1C0046EE0 (WPP_IFR_SF_qsd.c)
 *     WPP_IFR_SF_sl @ 0x1C0049684 (WPP_IFR_SF_sl.c)
 *     WPP_IFR_SF_qDDd @ 0x1C0049E00 (WPP_IFR_SF_qDDd.c)
 *     WPP_IFR_SF_qdid @ 0x1C0049F70 (WPP_IFR_SF_qdid.c)
 *     WPP_IFR_SF_dddd @ 0x1C004BA18 (WPP_IFR_SF_dddd.c)
 *     WPP_IFR_SF_sSLSs @ 0x1C004BB84 (WPP_IFR_SF_sSLSs.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C004C740 (WPP_IFR_SF_qqqqd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C004E8D0 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C004E9EC (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C004EB50 (WPP_IFR_SF_qDqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C004F2F4 (WPP_IFR_SF_Dqq.c)
 *     WPP_IFR_SF_qDiD @ 0x1C004F3E0 (WPP_IFR_SF_qDiD.c)
 *     WPP_IFR_SF_qLqd @ 0x1C004F4F0 (WPP_IFR_SF_qLqd.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C004F65C (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C004F78C (WPP_IFR_SF_qqqi.c)
 *     WPP_IFR_SF_Sd @ 0x1C00511F0 (WPP_IFR_SF_Sd.c)
 *     WPP_IFR_SF_qZ @ 0x1C005417C (WPP_IFR_SF_qZ.c)
 *     WPP_IFR_SF_DDid @ 0x1C0056860 (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_qDqD @ 0x1C005696C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_Z @ 0x1C0058938 (WPP_IFR_SF_Z.c)
 *     WPP_IFR_SF_dZq @ 0x1C0058AC8 (WPP_IFR_SF_dZq.c)
 *     WPP_IFR_SF_ddi @ 0x1C0058EE8 (WPP_IFR_SF_ddi.c)
 *     WPP_IFR_SF_i @ 0x1C0058FE0 (WPP_IFR_SF_i.c)
 *     WPP_IFR_SF_iiddiidd @ 0x1C00590C0 (WPP_IFR_SF_iiddiidd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C0059310 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_DDD @ 0x1C005A3A0 (WPP_IFR_SF_DDD.c)
 *     WPP_IFR_SF_sqq @ 0x1C005A484 (WPP_IFR_SF_sqq.c)
 *     WPP_IFR_SF_DqD @ 0x1C005B044 (WPP_IFR_SF_DqD.c)
 *     WPP_IFR_SF_qqDD @ 0x1C005B130 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005B24C (WPP_IFR_SF_qqqq.c)
 *     WPP_IFR_SF_qqsd @ 0x1C005BA0C (WPP_IFR_SF_qqsd.c)
 *     WPP_IFR_SF_sqqq @ 0x1C005BB9C (WPP_IFR_SF_sqqq.c)
 *     WPP_IFR_SF_qZd @ 0x1C005D5B8 (WPP_IFR_SF_qZd.c)
 *     WPP_IFR_SF_dqdd @ 0x1C005EFD4 (WPP_IFR_SF_dqdd.c)
 *     WPP_IFR_SF_iii @ 0x1C0060B40 (WPP_IFR_SF_iii.c)
 *     WPP_IFR_SF_qqD @ 0x1C0062CCC (WPP_IFR_SF_qqD.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C0062DBC (WPP_IFR_SF_qqDdqq.c)
 *     WPP_IFR_SF_qqDq @ 0x1C0062F08 (WPP_IFR_SF_qqDq.c)
 *     WPP_IFR_SF_qqDqqq @ 0x1C0063014 (WPP_IFR_SF_qqDqqq.c)
 *     WPP_IFR_SF_qqDqqqd @ 0x1C006315C (WPP_IFR_SF_qqDqqqd.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C006642C (WPP_IFR_SF_qqdqdd.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C00665BC (WPP_IFR_SF_qqqqq.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C00668C0 (WPP_IFR_SF_qcDqd.c)
 *     WPP_IFR_SF_qqLdqqq @ 0x1C00678CC (WPP_IFR_SF_qqLdqqq.c)
 *     WPP_IFR_SF_qqqqi @ 0x1C0067A38 (WPP_IFR_SF_qqqqi.c)
 *     WPP_IFR_SF_qqDLd @ 0x1C006A690 (WPP_IFR_SF_qqDLd.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006A7CC (WPP_IFR_SF_qqLd.c)
 *     WPP_IFR_SF_qqqdD @ 0x1C006A930 (WPP_IFR_SF_qqqdD.c)
 *     WPP_IFR_SF_qLL @ 0x1C006E78C (WPP_IFR_SF_qLL.c)
 *     WPP_IFR_SF_qdL @ 0x1C006E880 (WPP_IFR_SF_qdL.c)
 *     WPP_IFR_SF_qs @ 0x1C006E96C (WPP_IFR_SF_qs.c)
 *     WPP_IFR_SF_ddiid @ 0x1C006F03C (WPP_IFR_SF_ddiid.c)
 *     WPP_IFR_SF_dii @ 0x1C006F170 (WPP_IFR_SF_dii.c)
 *     WPP_IFR_SF_idii @ 0x1C006F268 (WPP_IFR_SF_idii.c)
 *     WPP_IFR_SF_dddddd @ 0x1C0072928 (WPP_IFR_SF_dddddd.c)
 *     WPP_IFR_SF__guid_d @ 0x1C0073E3C (WPP_IFR_SF__guid_d.c)
 *     WPP_IFR_SF_DDDDd @ 0x1C0073F10 (WPP_IFR_SF_DDDDd.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0075394 (WPP_IFR_SF_Lqd.c)
 *     WPP_IFR_SF_qcd @ 0x1C0075484 (WPP_IFR_SF_qcd.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C00774B4 (WPP_IFR_SF_qLsqd.c)
 *     WPP_IFR_SF_qqs @ 0x1C0077670 (WPP_IFR_SF_qqs.c)
 *     WPP_IFR_SF_qqdq @ 0x1C0079DD4 (WPP_IFR_SF_qqdq.c)
 *     WPP_IFR_SF_ddddd @ 0x1C007C640 (WPP_IFR_SF_ddddd.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C007C768 (WPP_IFR_SF_qqLLL.c)
 *     WPP_IFR_SF_sqqLd @ 0x1C007D094 (WPP_IFR_SF_sqqLd.c)
 *     WPP_IFR_SF_sqqd @ 0x1C007D248 (WPP_IFR_SF_sqqd.c)
 *     WPP_IFR_SF_DDDDDDD @ 0x1C0083588 (WPP_IFR_SF_DDDDDDD.c)
 *     WPP_IFR_SF_LL @ 0x1C00836E8 (WPP_IFR_SF_LL.c)
 *     WPP_IFR_SF_LLd @ 0x1C00837B0 (WPP_IFR_SF_LLd.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C008389C (WPP_IFR_SF_cqcqq.c)
 *     WPP_IFR_SF_dDqq @ 0x1C00839D0 (WPP_IFR_SF_dDqq.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1C0083AE0 (WPP_IFR_SF_dddDqqd.c)
 *     WPP_IFR_SF_L @ 0x1C0084C38 (WPP_IFR_SF_L.c)
 *     WPP_IFR_SF_ddLLdiDD @ 0x1C0089F48 (WPP_IFR_SF_ddLLdiDD.c)
 *     WPP_IFR_SF_qDDDDsdisd @ 0x1C008A0DC (WPP_IFR_SF_qDDDDsdisd.c)
 * Callees:
 *     memmove @ 0x1C001D640 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxIsEqualGuid @ 0x1C0039BCC (FxIsEqualGuid.c)
 */

__int64 FxIFR(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 MessageLevel,
        unsigned int MessageFlags,
        _GUID *MessageGuid,
        unsigned __int16 MessageNumber,
        const void *a6,
        ...)
{
  char *WdfLogHeader; // rbx
  va_list v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v16; // rdi
  unsigned int v17; // ecx
  signed __int32 v18; // eax
  __int64 v19; // r8
  signed __int32 v20; // ecx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  unsigned __int16 v23; // r8
  __int64 v24; // rcx
  char *v25; // rbp
  size_t *v26; // rax
  const void *v27; // rcx
  size_t v28; // rdi
  const void **v29; // rsi
  unsigned int v30; // ecx
  signed __int32 offsetNew; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  if ( !FxLibraryGlobals.IfrDisabled )
  {
    WdfLogHeader = (char *)FxDriverGlobals->WdfLogHeader;
    if ( !WdfLogHeader )
      return 3221225473LL;
    va_copy(v9, va);
    v10 = 0LL;
    if ( a6 )
    {
      do
      {
        v11 = v9 + 8;
        v12 = *(_QWORD *)v9;
        if ( v12 )
        {
          if ( v12 > 0x100 )
            goto $drop_message;
          v10 += (unsigned __int16)v12;
        }
        v9 = (va_list)(v11 + 1);
      }
      while ( *v11 );
    }
    v13 = 4 - (v10 & 3);
    if ( (v10 & 3) == 0 )
      v13 = 0LL;
    v14 = v13 + v10;
    if ( v14 > 0x100 )
    {
$drop_message:
      _InterlockedIncrement((volatile signed __int32 *)WdfLogHeader + 8);
      return 3221225473LL;
    }
    v16 = v14 + 28;
    if ( FxDriverGlobals->FxVerifierOn )
    {
      if ( strncmp(WdfLogHeader + 36, FxDriverGlobals->Public.DriverName, 0x20uLL)
        || !FxIsEqualGuid((const _GUID *)WdfLogHeader, &WdfTraceGuid)
        || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
        || (v17 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v17)
        || *((unsigned __int16 *)WdfLogHeader + 15) > v17
        || v17 >= 0x10000 )
      {
        FxVerifierDbgBreakPoint(FxDriverGlobals);
      }
    }
    v18 = *((_DWORD *)WdfLogHeader + 7);
    do
    {
      v19 = *((_QWORD *)WdfLogHeader + 2);
      v20 = v18;
      v21 = v19 + *((unsigned int *)WdfLogHeader + 6);
      v22 = v16 + v19 + (unsigned __int16)v18;
      if ( v21 >= v22 )
      {
        HIWORD(offsetNew) = v18;
        LOWORD(offsetNew) = v16 + v18;
      }
      else
      {
        offsetNew = (unsigned __int16)v16;
      }
      v23 = 0;
      if ( v21 >= v22 )
        v23 = v18;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)WdfLogHeader + 7, offsetNew, v18);
    }
    while ( v20 != v18 );
    v24 = *((_QWORD *)WdfLogHeader + 2) + v23;
    *(_WORD *)(v24 + 8) = HIWORD(v18);
    *(_WORD *)v24 = 21068;
    *(_WORD *)(v24 + 2) = v16;
    *(_WORD *)(v24 + 10) = MessageNumber;
    v25 = (char *)(v24 + 28);
    *(_DWORD *)(v24 + 4) = _InterlockedIncrement((volatile signed __int32 *)WdfLogHeader + 8);
    va_copy((va_list)v26, va);
    *(_GUID *)(v24 + 12) = *MessageGuid;
    v27 = a6;
    if ( a6 )
    {
      do
      {
        v28 = *v26;
        v29 = (const void **)(v26 + 1);
        if ( *v26 )
        {
          memmove(v25, v27, v28);
          v25 += v28;
        }
        v27 = *v29;
        v26 = (size_t *)(v29 + 1);
      }
      while ( *v29 );
    }
    if ( FxDriverGlobals->FxVerifierOn )
    {
      if ( strncmp(WdfLogHeader + 36, FxDriverGlobals->Public.DriverName, 0x20uLL)
        || !FxIsEqualGuid((const _GUID *)WdfLogHeader, &WdfTraceGuid)
        || *((char **)WdfLogHeader + 2) != WdfLogHeader + 72
        || (v30 = *((_DWORD *)WdfLogHeader + 6), *((unsigned __int16 *)WdfLogHeader + 14) > v30)
        || *((unsigned __int16 *)WdfLogHeader + 15) > v30
        || v30 >= 0x10000 )
      {
        FxVerifierDbgBreakPoint(FxDriverGlobals);
      }
    }
  }
  return 0LL;
}
