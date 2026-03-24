/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x1C02ECC08
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EC224 (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000ADEC (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0141538 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C0142C78 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0146674 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C0149150 (_BmlLogDiagnosticsPacket.c)
 *     _BmlGetPathModeListForPath @ 0x1C02ECDC0 (_BmlGetPathModeListForPath.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  struct BML_VIDPN_PATH_ORDER *v8; // rsi
  bool v9; // cf
  __int16 v12; // r12
  __int16 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  struct VIDPN_MGR *v16; // r14
  int ClientVidPn; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int PathModeListForPath; // edi
  int v21; // r15d
  __int64 v22; // r8
  struct DMMVIDPN *v23; // rbx
  int v24; // ecx
  bool v25; // zf
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  struct DMMVIDPN *v34; // [rsp+90h] [rbp+50h] BYREF
  __int64 v35; // [rsp+98h] [rbp+58h] BYREF

  v8 = a8;
  v9 = *(_WORD *)(a3 + 20) == 0;
  v12 = a2;
  v13 = a1;
  *(_BYTE *)a8 = 0;
  if ( v9 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)(a4 + 2696);
  a8 = 0LL;
  v16 = *(struct VIDPN_MGR **)(v15 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, (__int64)v16);
  v34 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v16, (__int64 *)&v34);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = ClientVidPn;
    goto LABEL_14;
  }
  v21 = a6;
  v22 = a3;
  v23 = v34;
  PathModeListForPath = BmlPreparePathOrderAndVidPn((__int64 *)&a8, (__int64)v34, v22, v13, v12, a6, a7);
  if ( PathModeListForPath >= 0 )
  {
    v24 = (int)a8;
    if ( *(_BYTE *)a8 > 1u )
    {
      --*(_BYTE *)a8;
      PathModeListForPath = BmlFunctionalizeVidPn(a8, v23);
      ++*(_BYTE *)a8;
      if ( PathModeListForPath < 0 )
      {
        v25 = a5 == 0;
        *(_BYTE *)v8 = 1;
        if ( !v25 )
        {
          if ( v23 )
          {
            v26 = BmlLogDiagnosticsPacket((DXGFASTMUTEX ***)v16, v21, (__int64)v23, (unsigned __int8 *)a8);
            v30 = v26;
            if ( v26 < 0 )
            {
              v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
              v31[3] = v23;
              v31[4] = a8;
              v31[5] = v30;
              WdLogEvent5_WdWarning(v31);
            }
          }
        }
        goto LABEL_14;
      }
      v24 = (int)a8;
    }
    PathModeListForPath = BmlGetPathModeListForPath(v24, (int)v23);
  }
LABEL_14:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v34, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40), v32);
  if ( a8 )
    operator delete[](a8);
  return (unsigned int)PathModeListForPath;
}
