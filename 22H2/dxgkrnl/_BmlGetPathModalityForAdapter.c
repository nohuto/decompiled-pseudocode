/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C0142488
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00EC704 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0141538 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C014273C (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C0142C78 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0146674 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C0147C60 (ConvertDMMScalingToGdiScaling.c)
 *     FillDevmodeFromVidPn @ 0x1C0148580 (FillDevmodeFromVidPn.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C0149150 (_BmlLogDiagnosticsPacket.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0160C90 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C016A4EC (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C016B2B0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        int a7,
        unsigned __int64 *a8,
        struct BML_VIDPN_PATH_ORDER *a9)
{
  struct BML_VIDPN_PATH_ORDER *v9; // rbx
  __int16 v12; // si
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r12
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edi
  unsigned int v19; // r15d
  struct DMMVIDPN *v20; // rsi
  unsigned int v21; // r12d
  __int64 v22; // rbx
  __int64 v23; // r15
  _DWORD *v24; // r13
  _DWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int16 v47; // [rsp+20h] [rbp-30h]
  __int64 v48; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 v49; // [rsp+90h] [rbp+40h]
  struct DMMVIDPN *v50; // [rsp+A0h] [rbp+50h] BYREF
  __int64 i; // [rsp+A8h] [rbp+58h]

  v49 = a1;
  v9 = a9;
  v12 = a2;
  *(_BYTE *)a9 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v38);
  }
  v13 = *(_QWORD *)(a4 + 2696);
  a9 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v48, (__int64)v14);
  v50 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)&v50);
  v18 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v19 = a6;
  v47 = v12;
  v20 = v50;
  v18 = BmlPreparePathOrderAndVidPn(&a9, v50, a3, v49, v47, a6, a7);
  if ( v18 < 0 )
    goto LABEL_19;
  v18 = BmlFunctionalizeVidPn(a9, v20);
  if ( v18 < 0 || (v18 = BmlPickColorSpaceAndWireFormat(a9, v19, v20), v18 < 0) )
  {
    *(_BYTE *)v9 = 1;
    if ( a5 )
    {
      if ( v20 )
      {
        v39 = BmlLogDiagnosticsPacket(v14, v19, v20, a9);
        v43 = v39;
        if ( v39 < 0 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
          v44[3] = v20;
          v44[4] = a9;
          v44[5] = v43;
          WdLogEvent5_WdWarning(v44);
        }
      }
    }
  }
  else
  {
    if ( a5 )
    {
      if ( v20 )
      {
        if ( DMMVIDPN::IsFunctional(v20, 0) )
        {
          v33 = BmlLogDiagnosticsPacket(v14, v19, v20, a9);
          v37 = v33;
          if ( v33 < 0 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
            v45[3] = v20;
            v45[4] = a9;
            v45[5] = v37;
            WdLogEvent5_WdWarning(v45);
          }
        }
      }
    }
    if ( a8 )
    {
      v50 = 0LL;
      *a8 = (unsigned __int64)v20 & -(__int64)((struct DMMVIDPN *)((char *)v20 + 88) != 0LL);
      goto LABEL_19;
    }
    v18 = BmlFillPathModalityFromVidPn(v20, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v18 >= 0 )
    {
      v21 = 0;
      v22 = *(_QWORD *)(a4 + 316);
      for ( i = v22; v21 < *(unsigned __int16 *)(a3 + 20); ++v21 )
      {
        v23 = 272LL * v21;
        if ( __PAIR64__(HIDWORD(i), v22) == *(_QWORD *)(v23 + a3 + 64)
          && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v21) )
        {
          v24 = *(_DWORD **)(v23 + a3 + 272);
          if ( !v24 )
          {
            v25 = operator new[](0xF4uLL, 0x63644356u, PagedPool);
            *(_QWORD *)(v23 + a3 + 272) = v25;
            v24 = v25;
            if ( !v25 )
            {
              v46 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
              WdLogEvent5_WdLowResource(v46);
              v18 = -1073741670;
              break;
            }
          }
          v18 = FillDevmodeFromVidPn(v20, *(unsigned int *)(v23 + a3 + 72), v24);
          if ( v18 < 0 )
            break;
          v30 = *(unsigned int *)(v23 + a3 + 188);
          v24[58] = v30;
          ConvertDMMScalingToGdiScaling(v30, v24 + 59);
          if ( (*(_DWORD *)(v23 + a3 + 48) & 0x20000) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v23 + a3 + 272) + 172LL) = *(_DWORD *)(v23 + a3 + 200);
            *(_DWORD *)(*(_QWORD *)(v23 + a3 + 272) + 176LL) = *(_DWORD *)(v23 + a3 + 204);
          }
        }
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v50, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48 + 40), v31);
  if ( a9 )
    operator delete[](a9);
  return (unsigned int)v18;
}
