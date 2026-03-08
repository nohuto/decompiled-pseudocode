/*
 * XREFs of _BmlGetPathModeListForAdapter @ 0x1C03B9730
 * Callers:
 *     ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B8C9C (-BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C016B1CC (_BmlLogDiagnosticsPacket.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C016D684 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3DBC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C03B98CC (_BmlGetPathModeListForPath.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapter(
        __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        int a7,
        struct BML_VIDPN_PATH_ORDER *a8)
{
  struct BML_VIDPN_PATH_ORDER *v8; // rsi
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r14
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int PathModeListForPath; // edi
  int v21; // r15d
  __int64 v22; // r8
  struct DMMVIDPN *v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 *v26; // rcx
  bool v27; // zf
  int v28; // eax
  struct DMMVIDPN *v30; // [rsp+90h] [rbp+50h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h] BYREF

  v8 = a8;
  *(_BYTE *)a8 = 0;
  if ( !*(_WORD *)(a3 + 20) )
    WdLogSingleEntry0(1LL);
  v13 = *(_QWORD *)(a4 + 2920);
  a8 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31, (__int64)v14);
  v30 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)&v30);
  PathModeListForPath = ClientVidPn;
  if ( ClientVidPn >= 0 )
  {
    v21 = a6;
    v22 = a3;
    v23 = v30;
    PathModeListForPath = BmlPreparePathOrderAndVidPn((__int64 *)&a8, (__int64)v30, v22, a1, a2, a6, a7);
    if ( PathModeListForPath >= 0 )
    {
      LODWORD(v26) = (_DWORD)a8;
      if ( *(_BYTE *)a8 <= 1u
        || (--*(_BYTE *)a8,
            PathModeListForPath = BmlFunctionalizeVidPn(a8, v23, v24, v25),
            ++*(_BYTE *)a8,
            v26 = (unsigned __int8 *)a8,
            PathModeListForPath >= 0) )
      {
        PathModeListForPath = BmlGetPathModeListForPath((_DWORD)v26, (_DWORD)v23);
      }
      else
      {
        v27 = a5 == 0;
        *(_BYTE *)v8 = 1;
        if ( !v27 )
        {
          if ( v23 )
          {
            v28 = BmlLogDiagnosticsPacket((struct _KTHREAD **)v14, v21, (__int64)v23, v26);
            if ( v28 < 0 )
              WdLogSingleEntry3(3LL, v23, a8, v28);
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v31 + 40));
  if ( a8 )
    operator delete(a8);
  return (unsigned int)PathModeListForPath;
}
