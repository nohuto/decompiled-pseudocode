unsigned __int8 __fastcall COverlayContext::CheckMultiPlaneOverlaySupport(__int64 a1, unsigned int *a2)
{
  _QWORD **v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  unsigned __int8 v6; // si
  _QWORD **v7; // rdx
  _QWORD **v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r12
  const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *v12; // rax
  int v13; // edx
  COverlayContext **v14; // r13
  const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *v15; // r15
  COverlayContext *v16; // r12
  _DWORD *v17; // rbx
  unsigned int v18; // eax
  __int128 v19; // xmm0
  unsigned int v20; // ecx
  __int128 v21; // xmm0
  _BYTE *v22; // r8
  _BYTE *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  char *v29; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int128 v34; // xmm3
  __int128 v35; // xmm4
  __int128 v36; // xmm5
  __int128 v37; // xmm6
  int v38; // eax
  int v39; // ecx
  unsigned __int64 v40; // r9
  bool v41; // al
  __int64 v42; // r8
  __int64 v43; // rcx
  _DWORD *v44; // rbx
  __int64 v45; // rdx
  _BYTE *v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdi
  _QWORD *v50; // rbx
  char v52; // [rsp+A0h] [rbp-80h]
  bool v53; // [rsp+A1h] [rbp-7Fh] BYREF
  bool v54; // [rsp+A2h] [rbp-7Eh] BYREF
  int v55; // [rsp+A4h] [rbp-7Ch]
  unsigned int v56; // [rsp+A8h] [rbp-78h]
  unsigned int v57; // [rsp+ACh] [rbp-74h]
  unsigned int v58; // [rsp+B0h] [rbp-70h]
  __int64 v59; // [rsp+B8h] [rbp-68h]
  char *v60; // [rsp+C0h] [rbp-60h]
  unsigned __int64 v61; // [rsp+C8h] [rbp-58h]
  unsigned int *v62; // [rsp+D0h] [rbp-50h]
  COverlayContext **v63; // [rsp+D8h] [rbp-48h]
  __int64 v64; // [rsp+E0h] [rbp-40h]
  _BYTE *v65; // [rsp+E8h] [rbp-38h] BYREF
  _BYTE *v66; // [rsp+F0h] [rbp-30h]
  __int64 *v67; // [rsp+F8h] [rbp-28h]
  _BYTE v68[128]; // [rsp+100h] [rbp-20h] BYREF
  __int64 v69; // [rsp+180h] [rbp+60h] BYREF

  v2 = *(_QWORD ***)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v4 = *a2;
  v62 = a2;
  v6 = 1;
  v53 = 0;
  v7 = v2;
  v8 = &v2[v3];
  v56 = 0;
  if ( v2 == v8 )
  {
    v52 = 1;
  }
  else
  {
    do
    {
      v9 = v4 + 1;
      if ( !*((_BYTE *)*v7 + 11024) )
        v9 = v4;
      ++v7;
      v4 = v9;
    }
    while ( v7 != v8 );
    v52 = 1;
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v2 + 176LL))(**v2);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 216LL))(v10) )
        break;
      if ( ++v2 == v8 )
        goto LABEL_11;
    }
    v52 = 0;
  }
LABEL_11:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0dd_EventWriteTransfer(
      a1,
      (__int64)&EVTDESC_OVERLAY_CHECKSUPPORT_Start,
      CCommonRegistryData::m_dwOverlayTestMode < 4,
      v4);
  v11 = v4;
  v64 = v4;
  v12 = (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)operator new(saturated_mul(v4, 0x90uLL));
  v14 = *(COverlayContext ***)(a1 + 8);
  v15 = v12;
  v63 = &v14[*(_QWORD *)a1];
  if ( v14 == v63 )
  {
LABEL_30:
    v43 = 1LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 && v4 )
    {
      v44 = (_DWORD *)((char *)v15 + 88);
      do
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
        {
          McTemplateU0xqddddddddddddqqq_EventWriteTransfer(
            1,
            v13,
            *(_QWORD *)(v44 - 17),
            *(v44 - 14),
            *(v44 - 13),
            *(v44 - 12),
            *(v44 - 11),
            *(v44 - 10),
            *(v44 - 9),
            *(v44 - 8),
            *(v44 - 7),
            *(v44 - 6),
            *(v44 - 5),
            *(v44 - 4),
            *(v44 - 3),
            *(v44 - 2),
            *(v44 - 1),
            *v44,
            v44[5]);
          v43 = 1LL;
        }
        v44 += 36;
        --v11;
      }
      while ( v11 );
    }
    if ( CCommonRegistryData::m_dwOverlayTestMode >= 4 )
    {
      if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
        v6 = 1;
    }
    else
    {
      if ( v52 )
      {
        if ( !*(_QWORD *)a1 )
        {
          gsl::details::terminate((gsl::details *)1);
          __debugbreak();
        }
        v6 = COverlayContext::CheckMultiplaneOverlaySupport(**(COverlayContext ***)(a1 + 8), v15, v4, &v53);
      }
      if ( !v6 && v53 )
      {
        v43 = *(_QWORD *)(a1 + 8);
        v45 = v43 + 8LL * *(_QWORD *)a1;
        while ( v43 != v45 )
        {
          v48 = *(_QWORD *)v43;
          v43 += 8LL;
          *(_BYTE *)(v48 + 11309) = 1;
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v16 = *v14;
      v55 = 0;
      v59 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 176LL))(*(_QWORD *)v16);
      v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 56LL))(v59);
      v65 = v68;
      v66 = v68;
      v67 = &v69;
      COverlayContext::GetContextCandidates((__int64)v16, (__int64)v62, &v65);
      if ( *((_BYTE *)v16 + 11024) )
      {
        v17 = (_DWORD *)((char *)v15 + 144 * v56);
        memset_0(v17, 0, 0x90uLL);
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v59 + 176LL))(v59, v17 + 2);
        v18 = v57;
        *v17 = 0;
        v17[7] = 0;
        v19 = *((_OWORD *)v16 + 682);
        v20 = 1;
        v55 = 1;
        *((_OWORD *)v17 + 2) = v19;
        *((_OWORD *)v17 + 3) = *((_OWORD *)v16 + 683);
        *((_OWORD *)v17 + 4) = *((_OWORD *)v16 + 684);
        *((_OWORD *)v17 + 5) = *((_OWORD *)v16 + 685);
        *((_OWORD *)v17 + 6) = *((_OWORD *)v16 + 686);
        *((_OWORD *)v17 + 7) = *((_OWORD *)v16 + 687);
        v21 = *((_OWORD *)v16 + 688);
        v17[4] = v18;
        *((_OWORD *)v17 + 8) = v21;
      }
      else
      {
        v20 = v55;
      }
      v22 = v66;
      v23 = v65;
      v58 = 0;
      if ( (v66 - v65) >> 3 )
        break;
LABEL_21:
      if ( !v52 && CCommonRegistryData::m_dwOverlayTestMode < 4 )
      {
        v54 = 0;
        v41 = COverlayContext::CheckMultiplaneOverlaySupport(
                v16,
                (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)v15 + 144 * v56),
                v20,
                &v54);
        v22 = v66;
        v6 &= v41;
        v53 |= v54;
        v23 = v65;
        v20 = v55;
      }
      v56 += v20;
      v42 = (v22 - v23) >> 3;
      if ( v42 )
      {
        detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)&v65,
          0LL,
          v42);
        v23 = v65;
      }
      v65 = 0LL;
      if ( v23 == v68 )
        v23 = 0LL;
      operator delete(v23);
      if ( ++v14 == v63 )
      {
        v11 = v4;
        goto LABEL_30;
      }
    }
    v61 = 0LL;
    v24 = v20 + v56;
    v57 = v20 + v56;
    while ( 1 )
    {
      v60 = (char *)v15 + 144 * v24;
      memset_0(v60, 0, 0x90uLL);
      v25 = *(_QWORD *)(*(_QWORD *)&v23[8 * v61] + 16LL);
      v26 = v59;
      if ( (*(int (__fastcall **)(__int64, __int64, char *, char *))(*(_QWORD *)v59 + 184LL))(
             v59,
             v25,
             v60 + 8,
             v60 + 28) < 0 )
        break;
      v27 = (__int64)v65;
      v28 = v61;
      v29 = v60;
      *(_QWORD *)(v60 + 20) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v65[8 * v61] + 16LL) + 40LL);
      v30 = *(_OWORD **)(v27 + 8 * v28);
      v31 = v30[2];
      v32 = v30[3];
      v33 = v30[4];
      v34 = v30[5];
      v35 = v30[6];
      v36 = v30[7];
      v37 = v30[8];
      LODWORD(v30) = v58;
      *((_OWORD *)v29 + 2) = v31;
      LODWORD(v30) = (_DWORD)v30 + 1;
      *((_OWORD *)v29 + 3) = v32;
      v58 = (unsigned int)v30;
      *((_OWORD *)v29 + 4) = v33;
      *(_DWORD *)v29 = (_DWORD)v30;
      *((_OWORD *)v29 + 5) = v34;
      *((_OWORD *)v29 + 6) = v35;
      *((_OWORD *)v29 + 7) = v36;
      *((_OWORD *)v29 + 8) = v37;
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL))(v26);
      v39 = v55;
      v40 = v58;
      v22 = v66;
      v23 = v65;
      *((_DWORD *)v60 + 4) = v38;
      v20 = v39 + 1;
      v24 = v57 + 1;
      v55 = v20;
      ++v57;
      v61 = v40;
      if ( v40 >= (v22 - v23) >> 3 )
        goto LABEL_21;
    }
    v46 = v65;
    v47 = (v66 - v65) >> 3;
    if ( v47 )
    {
      detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v65,
        0LL,
        v47);
      v46 = v65;
    }
    v65 = 0LL;
    if ( v46 == v68 )
      v46 = 0LL;
    operator delete(v46);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0d_EventWriteTransfer(v43, (__int64)&EVTDESC_OVERLAY_CHECKSUPPORT_Stop, v6);
  if ( v15 )
  {
    if ( v4 )
    {
      v49 = v64;
      v50 = (_QWORD *)((char *)v15 + 8);
      do
      {
        if ( *v50 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v50 + 16LL))(*v50);
        v50 += 18;
        --v49;
      }
      while ( v49 );
    }
    operator delete(v15);
  }
  return v6;
}
