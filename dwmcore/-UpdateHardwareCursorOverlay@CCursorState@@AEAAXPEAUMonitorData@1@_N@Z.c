void __fastcall CCursorState::UpdateHardwareCursorOverlay(
        CCursorState *this,
        struct CCursorState::MonitorData *a2,
        char a3)
{
  float v3; // xmm4_4
  __int64 *v4; // r12
  float v5; // xmm3_4
  float v6; // xmm0_4
  __int64 v9; // rcx
  float v10; // xmm4_4
  float v11; // xmm0_4
  int v12; // r14d
  int v13; // r15d
  int v14; // eax
  int v15; // edi
  int v16; // esi
  unsigned int v17; // r8d
  CCursorState *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // r10d
  unsigned int v22; // eax
  unsigned int v23; // r9d
  _DWORD *v24; // r14
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int updated; // eax
  unsigned int v33; // r8d
  int v34; // [rsp+28h] [rbp-59h]
  float v35; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v37; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v38; // [rsp+48h] [rbp-39h] BYREF
  char v39[8]; // [rsp+50h] [rbp-31h] BYREF
  CCursorState *v40; // [rsp+58h] [rbp-29h]
  __int64 v41; // [rsp+60h] [rbp-21h] BYREF
  _DWORD v42[4]; // [rsp+68h] [rbp-19h] BYREF
  __int64 v43; // [rsp+78h] [rbp-9h]
  std::_Ref_count_base *v44[2]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v45; // [rsp+90h] [rbp+Fh] BYREF
  int v46; // [rsp+98h] [rbp+17h]
  int v47; // [rsp+9Ch] [rbp+1Bh]
  int v48; // [rsp+A0h] [rbp+1Fh]
  int v49; // [rsp+A4h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v3 = *((float *)this + 12);
  v4 = (__int64 *)((char *)a2 + 96);
  v5 = *((float *)this + 13);
  v6 = v3 * *((float *)a2 + 3);
  v40 = this;
  v9 = *((_QWORD *)a2 + 12);
  v10 = (float)((float)(v3 * *((float *)a2 + 4)) + (float)(v5 * *((float *)a2 + 8))) + *((float *)a2 + 16);
  v11 = (float)((float)((float)(v5 * *((float *)a2 + 7)) + v6) + *((float *)a2 + 15)) + 6291456.25;
  v35 = v11;
  v12 = ((int)(LODWORD(v11) << 10) >> 11) - *(_DWORD *)v9;
  v35 = v10 + 6291456.25;
  v13 = ((int)(LODWORD(v35) << 10) >> 11) - *(_DWORD *)(v9 + 4);
  v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**(_QWORD **)(v9 + 24) + 24LL))(
          *(_QWORD *)(v9 + 24),
          &v36,
          &v37);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1473LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v14,
      v34);
  v15 = 0;
  v16 = 0;
  if ( *((_DWORD *)a2 + 20) - v12 >= 0 )
    v15 = *((_DWORD *)a2 + 20) - v12;
  if ( *((_DWORD *)a2 + 21) - v13 >= 0 )
    v16 = *((_DWORD *)a2 + 21) - v13;
  v17 = 0;
  v18 = (CCursorState *)(v37 + v13 - *((_DWORD *)a2 + 23));
  if ( (int)v18 >= 0 )
    v17 = v37 + v13 - *((_DWORD *)a2 + 23);
  v19 = 0;
  if ( (int)(v36 + v12 - *((_DWORD *)a2 + 22)) >= 0 )
    v19 = v36 + v12 - *((_DWORD *)a2 + 22);
  v20 = v15 + v19;
  if ( v36 < v20 )
    v20 = v36;
  v21 = v36 - v20;
  v22 = v17 + v16;
  v36 = v21;
  if ( v37 < v17 + v16 )
    v22 = v37;
  v23 = v37 - v22;
  v37 -= v22;
  if ( !v21 || !v23 )
    goto LABEL_33;
  v45 = *(_QWORD *)a2;
  v46 = *((_DWORD *)a2 + 2);
  v47 = v12 + v15;
  v24 = 0LL;
  v49 = 1;
  v48 = v13 + v16;
  if ( a3
    || !*((_BYTE *)a2 + 140)
    || v15 != *((_DWORD *)a2 + 31)
    || v16 != *((_DWORD *)a2 + 32)
    || v21 != *((_DWORD *)a2 + 33)
    || v23 != *((_DWORD *)a2 + 34) )
  {
    v25 = *v4;
    v24 = v42;
    v44[0] = (std::_Ref_count_base *)__PAIR64__(v16, v15);
    v44[1] = (std::_Ref_count_base *)__PAIR64__(v23, v21);
    v26 = *(__int64 **)(v25 + 24);
    v27 = *v26;
    v38 = 0LL;
    v28 = (*(__int64 (__fastcall **)(__int64 *, std::_Ref_count_base **, __int64, __int64 *))(v27 + 64))(
            v26,
            v44,
            1LL,
            &v38);
    if ( v28 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1528LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v28,
        v34);
    v29 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v38 + 40LL))(v38, v39, &v41);
    if ( v29 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1532LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v29,
        v34);
    v30 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v38 + 32LL))(v38, &v35);
    if ( v30 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1535LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v30,
        v34);
    v31 = -(*((_BYTE *)v40 + 72) != 0);
    v42[1] = v36;
    v42[2] = v37;
    *(float *)&v42[3] = v35;
    v42[0] = 1 - v31;
    v43 = v41;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
  }
  updated = NtHWCursorUpdatePointer(&v45, v24);
  if ( updated < 0 )
  {
    wil::details::in1diag3::_Log_NtStatus(retaddr, (void *)0x608, v33, (const char *)(unsigned int)updated, v34);
    *(_OWORD *)v44 = 0LL;
    std::shared_ptr<CRegion>::operator=(v4, (__int64 *)v44);
    v18 = v44[1];
    if ( v44[1] )
      std::_Ref_count_base::_Decref(v44[1]);
LABEL_33:
    CCursorState::EnsureHardwareOverlayCleared(v18, a2);
    return;
  }
  *((_DWORD *)a2 + 33) = v36;
  *((_DWORD *)a2 + 34) = v37;
  *((_BYTE *)a2 + 140) = 1;
  *((_DWORD *)a2 + 31) = v15;
  *((_DWORD *)a2 + 32) = v16;
}
