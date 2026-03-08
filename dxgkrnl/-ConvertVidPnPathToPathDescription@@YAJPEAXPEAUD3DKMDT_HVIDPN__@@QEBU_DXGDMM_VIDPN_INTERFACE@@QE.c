/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01E614C
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01E5A2C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x1C0001A68 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x1C0001AE0 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C01A276C (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01E80D0 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        _QWORD *a1,
        struct D3DKMDT_HVIDPN__ *a2,
        const struct _DXGDMM_VIDPN_INTERFACE *const a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a9)
{
  __int64 (__fastcall *v9)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *); // rax
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // ebx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v14; // r14
  int v15; // eax
  __int64 v16; // rdi
  char v17; // al
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r14
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v27; // rcx
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int64 (__fastcall *v30)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v31; // eax
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // xmm1_8
  __int64 v38; // rax
  __int64 v40; // r15
  __int64 v41; // r14
  char v42; // [rsp+58h] [rbp-59h] BYREF
  char v43; // [rsp+59h] [rbp-58h] BYREF
  _BYTE v44[6]; // [rsp+5Ah] [rbp-57h] BYREF
  __int64 v45; // [rsp+60h] [rbp-51h] BYREF
  __int64 v46; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v47[8]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v48; // [rsp+78h] [rbp-39h]
  void (__fastcall *v49)(__int64, __int64); // [rsp+80h] [rbp-31h]
  __int64 v50; // [rsp+88h] [rbp-29h]
  int v51; // [rsp+90h] [rbp-21h]
  __int64 v52; // [rsp+98h] [rbp-19h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-11h] BYREF
  _QWORD v54[8]; // [rsp+A8h] [rbp-9h] BYREF
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v57; // [rsp+110h] [rbp+5Fh] BYREF

  v57 = a4;
  v9 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))*((_QWORD *)a4 + 3);
  v11 = a7;
  v12 = a6;
  v13 = (int)a1;
  v14 = a5;
  v52 = 0LL;
  v15 = v9(a5, a6, a7, &v52);
  v16 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(2LL, v14, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire Vidpn present path from VidPn topology 0x%I64x (status = 0x%I64x)",
      (__int64)v14,
      v16,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v16;
  }
  v44[0] = 0;
  v43 = 0;
  v42 = 0;
  if ( (int)DxgkQueryMonitorTypeLockHeld(v13, v11, 0, 0, 0LL, 0LL, 0LL, (__int64)v44, (__int64)&v43, (__int64)&v42) < 0 )
    v17 = 0;
  else
    v17 = (v42 != 0 ? 4 : 0) | (v43 != 0 ? 2 : 0) | (v44[0] != 0);
  v18 = a9;
  *((_BYTE *)a9 + 129) = v17;
  v19 = v52;
  v20 = *(_DWORD *)(v52 + 12);
  if ( v20 != 254 )
  {
    *((_DWORD *)v18 + 35) = v20;
    *((_DWORD *)v18 + 34) = *(_DWORD *)(v19 + 12);
    *(_QWORD *)v18 |= 0x40000010000uLL;
  }
  v21 = *(_DWORD *)(v19 + 20);
  if ( v21 != 254 )
  {
    *(_QWORD *)v18 |= 0x200uLL;
    *((_DWORD *)v18 + 33) = v21;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))v57 + 4))(v14);
  v57 = 0LL;
  v45 = 0LL;
  v22 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 1))(
          a2,
          (unsigned int)v12,
          &v57,
          &v45);
  v23 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry3(2LL, v12, a2, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire source mode set on source 0x%I64x of VidPN 0x%I64x (status = 0x%I64x)",
      v12,
      (__int64)a2,
      v23,
      0LL,
      0LL);
    return (unsigned int)v23;
  }
  v24 = *((_QWORD *)a3 + 2);
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0;
  v47[0] = 0;
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNSOURCEMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNSOURCEMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v47,
    (__int64)v57,
    v24,
    (__int64)a2);
  v46 = 0LL;
  v25 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v45 + 24))(v57, &v46);
  v23 = v25;
  if ( v25 < 0 )
  {
    v40 = v48;
    WdLogSingleEntry3(2LL, v12, v48, v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire pinned mode info on source 0x%I64x in mode set 0x%I64x (status = 0x%I64x)",
      v12,
      v40,
      v23,
      0LL,
      0LL);
    if ( v47[0] )
      v49(v50, v40);
    return (unsigned int)v23;
  }
  if ( v25 != 1075708679 )
  {
    v26 = v46;
    v27 = v57;
    *((_BYTE *)v18 + 128) = (unsigned int)(*(_DWORD *)(v46 + 4) - 3) <= 1;
    v28 = v45;
    *((_OWORD *)v18 + 6) = *(_OWORD *)(v26 + 8);
    v29 = *(_OWORD *)(v26 + 24);
    *(_QWORD *)v18 |= 0x100uLL;
    *((_OWORD *)v18 + 7) = v29;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v28 + 32))(v27);
  }
  if ( v47[0] )
    v49(v50, v48);
  v30 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a3 + 3);
  v45 = 0LL;
  v46 = 0LL;
  v31 = v30(a2, (unsigned int)v11, &v45, &v46);
  v23 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry3(2LL, v11, a2, v31);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire target mode set of target 0x%I64x in VidPN 0x%I64x (status = 0x%I64x)",
      v11,
      (__int64)a2,
      v23,
      0LL,
      0LL);
    return (unsigned int)v23;
  }
  v32 = *((_QWORD *)a3 + 4);
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0;
  v47[0] = 0;
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v47,
    v45,
    v32,
    (__int64)a2);
  v53 = 0LL;
  v54[0] = 0LL;
  LODWORD(v57) = 0;
  v33 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))(v46 + 24))(
          v45,
          &v53,
          v54,
          &v57);
  v16 = v33;
  if ( v33 < 0 || v33 == 1075708679 )
  {
    v41 = v48;
    WdLogSingleEntry2(2LL, v48, v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire info of mode pinned in VidPN target mode set 0x%I64x (status = 0x%I64x)",
      v41,
      v16,
      0LL,
      0LL,
      0LL);
    if ( v47[0] )
      v49(v50, v41);
    return (unsigned int)v16;
  }
  v34 = v53;
  v35 = v54[0];
  v36 = v45;
  *((_OWORD *)v18 + 2) = *(_OWORD *)(v53 + 8);
  *((_OWORD *)v18 + 3) = *(_OWORD *)(v34 + 24);
  *((_OWORD *)v18 + 4) = *(_OWORD *)(v34 + 40);
  v37 = *(_QWORD *)(v34 + 56);
  *(_QWORD *)v18 |= 0x1000087uLL;
  *((_QWORD *)v18 + 28) = v35;
  *((_DWORD *)v18 + 60) = (_DWORD)v57;
  v38 = v46;
  *((_QWORD *)v18 + 10) = v37;
  (*(void (__fastcall **)(__int64))(v38 + 32))(v36);
  if ( a8 )
  {
    if ( (int)DmmGetCurrentWireFormatAndColorSpace(
                a1,
                v12,
                v11,
                (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)v18 + 51,
                (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)v18 + 52) >= 0 )
      *(_QWORD *)v18 |= 8uLL;
    else
      WdLogSingleEntry2(3LL, v12, v11);
  }
  if ( v47[0] )
    v49(v50, v48);
  return 0LL;
}
