/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C025D66C
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C025DA64 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002B08 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C012F214 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0151550 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        _QWORD *a1,
        struct D3DKMDT_HVIDPN__ *a2,
        const struct _DXGDMM_VIDPN_INTERFACE *const a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *const a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a9)
{
  __int64 (__fastcall *v9)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *); // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v14; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  char v22; // al
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rbx
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  __int64 (__fastcall *v27)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int128 v42; // xmm1
  __int64 (__fastcall *v43)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // xmm1_8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  bool v59; // [rsp+50h] [rbp-49h] BYREF
  __int64 v60; // [rsp+58h] [rbp-41h] BYREF
  __int64 v61; // [rsp+60h] [rbp-39h] BYREF
  __int64 v62; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v63[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v64; // [rsp+78h] [rbp-21h]
  void (__fastcall *v65)(__int64, __int64); // [rsp+80h] [rbp-19h]
  __int64 v66; // [rsp+88h] [rbp-11h]
  int v67; // [rsp+90h] [rbp-9h]
  __int64 v69; // [rsp+F8h] [rbp+5Fh] BYREF

  v9 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))*((_QWORD *)a4 + 3);
  v11 = a7;
  v12 = a6;
  v14 = a5;
  v61 = 0LL;
  v16 = v9(a5, a6, a7, &v61);
  v19 = v16;
  if ( v16 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v20 + 24) = v14;
    *(_QWORD *)(v20 + 32) = v19;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v19;
  }
  v59 = 0;
  LOBYTE(v69) = 0;
  if ( (int)DxgkQueryMonitorTypeLockHeld((__int64)a1, (unsigned int)v11, 0LL, 0LL, 0LL, 0LL, 0LL, &v59, (bool *)&v69) < 0 )
    v22 = 0;
  else
    v22 = ((_BYTE)v69 != 0 ? 2 : 0) | v59;
  v23 = a9;
  *((_BYTE *)a9 + 129) = v22;
  v24 = v61;
  v25 = *(_DWORD *)(v61 + 12);
  if ( v25 != 254 )
  {
    *((_DWORD *)v23 + 35) = v25;
    *((_DWORD *)v23 + 34) = *(_DWORD *)(v24 + 12);
    *(_QWORD *)v23 |= 0x40000010000uLL;
  }
  v26 = *(_DWORD *)(v24 + 20);
  if ( v26 != 254 )
  {
    *(_QWORD *)v23 |= 0x200uLL;
    *((_DWORD *)v23 + 33) = v26;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))a4 + 4))(v14);
  v27 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a3 + 1);
  v69 = 0LL;
  v60 = 0LL;
  v28 = v27(a2, (unsigned int)v12, &v69, &v60);
  v31 = v28;
  if ( v28 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    v32[3] = v12;
LABEL_12:
    v32[4] = a2;
    v32[5] = v31;
    WdLogEvent5_WdError(v32);
    return (unsigned int)v31;
  }
  v33 = *((_QWORD *)a3 + 2);
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0;
  v63[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v63,
    v69,
    v33,
    (__int64)a2);
  v62 = 0LL;
  v34 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v60 + 24))(v69, &v62);
  v31 = v34;
  if ( v34 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
    v38 = v64;
    v37[3] = v12;
    v37[4] = v38;
    v37[5] = v31;
    goto LABEL_16;
  }
  if ( v34 != 1075708679 )
  {
    v39 = v62;
    v40 = v69;
    *((_BYTE *)v23 + 128) = (unsigned int)(*(_DWORD *)(v62 + 4) - 3) <= 1;
    v41 = v60;
    *((_OWORD *)v23 + 6) = *(_OWORD *)(v39 + 8);
    v42 = *(_OWORD *)(v39 + 24);
    *(_QWORD *)v23 |= 0x100uLL;
    *((_OWORD *)v23 + 7) = v42;
    (*(void (__fastcall **)(__int64))(v41 + 32))(v40);
  }
  if ( v63[0] )
    v65(v66, v64);
  v43 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a3 + 3);
  v69 = 0LL;
  v60 = 0LL;
  v44 = v43(a2, (unsigned int)v11, &v69, &v60);
  v31 = v44;
  if ( v44 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
    v32[3] = v11;
    goto LABEL_12;
  }
  v47 = *((_QWORD *)a3 + 4);
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0;
  v63[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v63,
    v69,
    v47,
    (__int64)a2);
  v62 = 0LL;
  v48 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v60 + 24))(v69, &v62);
  v31 = v48;
  if ( v48 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
    v38 = v64;
    v37[3] = v64;
    v37[4] = v31;
LABEL_16:
    WdLogEvent5_WdError(v37);
    if ( v63[0] )
      v65(v66, v38);
    return (unsigned int)v31;
  }
  if ( v48 != 1075708679 )
  {
    v51 = v62;
    v52 = v60;
    v53 = v69;
    *((_OWORD *)v23 + 2) = *(_OWORD *)(v62 + 8);
    *((_OWORD *)v23 + 3) = *(_OWORD *)(v51 + 24);
    *((_OWORD *)v23 + 4) = *(_OWORD *)(v51 + 40);
    v54 = *(_QWORD *)(v51 + 56);
    *(_QWORD *)v23 |= 0x87uLL;
    *((_QWORD *)v23 + 10) = v54;
    (*(void (__fastcall **)(__int64))(v52 + 32))(v53);
    if ( a8 )
    {
      if ( (int)DmmGetCurrentWireFormatAndColorSpace(
                  a1,
                  (unsigned int)v12,
                  v11,
                  (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)v23 + 51,
                  (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)v23 + 52) >= 0 )
      {
        *(_QWORD *)v23 |= 8uLL;
      }
      else
      {
        v58 = WdLogNewEntry5_WdWarning(v56, v55, v57);
        *(_QWORD *)(v58 + 24) = v12;
        *(_QWORD *)(v58 + 32) = v11;
        WdLogEvent5_WdWarning(v58);
      }
    }
  }
  if ( v63[0] )
    v65(v66, v64);
  return 0LL;
}
