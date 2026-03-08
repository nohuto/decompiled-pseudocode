/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C016D3D0
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C016D30C (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C016AFF0 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C016B1CC (_BmlLogDiagnosticsPacket.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C016C0F0 (-BmlIsPrimaryClonePath@@YA_NPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C016C630 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C016CAE8 (FillDevmodeFromVidPn.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C016CC80 (ConvertDMMScalingToGdiScaling.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C016D684 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C016D868 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01B3DBC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        unsigned __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        int a7,
        unsigned __int64 *a8,
        struct BML_VIDPN_PATH_ORDER *a9)
{
  struct BML_VIDPN_PATH_ORDER *v9; // rbx
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r12
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edi
  unsigned int v21; // r15d
  __int64 v22; // rsi
  __int64 v23; // rbx
  unsigned int v24; // r12d
  __int64 v25; // r15
  _DWORD *v26; // r13
  __int64 v27; // rax
  int v28; // ecx
  int v30; // eax
  int v31; // eax
  __int16 v32; // [rsp+20h] [rbp-30h]
  __int64 v33; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v35; // [rsp+A0h] [rbp+50h] BYREF
  __int64 i; // [rsp+A8h] [rbp+58h]

  v9 = a9;
  *(_BYTE *)a9 = 0;
  if ( !*(_WORD *)(a3 + 20) )
    WdLogSingleEntry0(1LL);
  v13 = *(_QWORD *)(a4 + 2920);
  a9 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33, (__int64)v14);
  v35 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14);
  v20 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
    goto LABEL_19;
  }
  v21 = a6;
  v32 = a2;
  v22 = (__int64)v35;
  v20 = BmlPreparePathOrderAndVidPn(&a9, v35, a3, a1, v32, a6, a7);
  if ( v20 < 0 )
    goto LABEL_19;
  v20 = BmlFunctionalizeVidPn(a9, (struct DMMVIDPN *)v22);
  if ( v20 < 0 || (v20 = BmlPickColorSpaceAndWireFormat(a9, v21, v22), v20 < 0) )
  {
    *(_BYTE *)v9 = 1;
    if ( a5 )
    {
      if ( v22 )
      {
        v31 = BmlLogDiagnosticsPacket((struct _KTHREAD **)v14, v21, v22, (unsigned __int8 *)a9);
        if ( v31 < 0 )
          WdLogSingleEntry3(3LL, v22, a9, v31);
      }
    }
  }
  else
  {
    if ( a5 )
    {
      if ( v22 )
      {
        if ( DMMVIDPN::IsFunctional((DMMVIDPN *)v22) )
        {
          v30 = BmlLogDiagnosticsPacket((struct _KTHREAD **)v14, v21, v22, (unsigned __int8 *)a9);
          if ( v30 < 0 )
            WdLogSingleEntry3(3LL, v22, a9, v30);
        }
      }
    }
    if ( a8 )
    {
      v35 = 0LL;
      *a8 = v22 & -(__int64)(v22 != -88);
      goto LABEL_19;
    }
    v20 = BmlFillPathModalityFromVidPn((const struct DMMVIDPN *)v22, (struct D3DKMT_GETPATHSMODALITY *)a3);
    if ( v20 >= 0 )
    {
      v23 = *(_QWORD *)(a4 + 404);
      v24 = 0;
      for ( i = v23; v24 < *(unsigned __int16 *)(a3 + 20); ++v24 )
      {
        v25 = 296LL * v24;
        if ( __PAIR64__(HIDWORD(i), v23) == *(_QWORD *)(v25 + a3 + 72)
          && BmlIsPrimaryClonePath((const struct D3DKMT_GETPATHSMODALITY *)a3, v24) )
        {
          v26 = *(_DWORD **)(v25 + a3 + 304);
          if ( !v26 )
          {
            v27 = operator new[](0xF4uLL, 0x63644356u, 256LL);
            *(_QWORD *)(v25 + a3 + 304) = v27;
            v26 = (_DWORD *)v27;
            if ( !v27 )
            {
              WdLogSingleEntry0(6LL);
              v20 = -1073741670;
              break;
            }
          }
          v20 = FillDevmodeFromVidPn(v22, *(_DWORD *)(v25 + a3 + 80), v26);
          if ( v20 < 0 )
            break;
          v28 = *(_DWORD *)(v25 + a3 + 196);
          v26[58] = v28;
          ConvertDMMScalingToGdiScaling(v28, v26 + 59);
          if ( (*(_DWORD *)(v25 + a3 + 56) & 0x20000) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v25 + a3 + 304) + 172LL) = *(_DWORD *)(v25 + a3 + 208);
            *(_DWORD *)(*(_QWORD *)(v25 + a3 + 304) + 176LL) = *(_DWORD *)(v25 + a3 + 212);
          }
        }
      }
    }
  }
LABEL_19:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v35, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v33 + 40));
  if ( a9 )
    operator delete(a9);
  return (unsigned int)v20;
}
