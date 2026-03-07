__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddModeImpl(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        enum _DXGK_VIDPN_INTERFACE_VERSION a4)
{
  unsigned int v4; // ebp
  int v5; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rcx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v20; // rsi
  DXGADAPTER *v21; // rdx
  DXGADAPTER **v22; // r14
  int v23; // ebx
  _QWORD *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r11
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdi
  int v36; // ecx
  DXGADAPTER *v37; // r14
  int v38; // ebx
  int v39; // eax
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  __int64 v46; // rax
  char *v47; // r14
  char *v48; // r10
  __int64 v49; // rbx
  __int128 v50; // xmm0
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v51; // rax
  char *v52; // rdx
  char *v53; // rcx
  int v54; // r14d
  __int64 i; // rax
  int v56; // r9d
  __int64 v57; // r9
  int v58; // r8d
  __int64 v59; // r8
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v60; // rax
  __int64 v61; // r8
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  _QWORD *v68; // rax
  char *v69; // rax
  char **v70; // rcx
  char *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  char *v75; // [rsp+60h] [rbp-78h]
  int *v76; // [rsp+68h] [rbp-70h]
  int v77; // [rsp+80h] [rbp-58h] BYREF
  __int64 v78; // [rsp+88h] [rbp-50h]
  char v79; // [rsp+90h] [rbp-48h]
  __int64 (__fastcall ***v81)(_QWORD, __int64); // [rsp+F8h] [rbp+20h] BYREF

  v4 = 0;
  v77 = -1;
  v5 = (int)a3;
  v78 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v79 = 1;
    v77 = 7014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  }
  else
  {
    v79 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v77, 7014);
  v12 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = a2;
  *(_QWORD *)(v12 + 32) = this;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v14 = -1071774959;
LABEL_146:
    v23 = v14;
    goto LABEL_147;
  }
  if ( !this || *((_DWORD *)this + 32) != 1833173005 )
  {
    WdLogSingleEntry1(2LL, this);
    v14 = -1071774967;
    goto LABEL_146;
  }
  v15 = *((_QWORD *)this + 14);
  if ( !*(_QWORD *)(v15 + 40) )
    WdLogSingleEntry0(1LL);
  v16 = *(_QWORD *)(v15 + 40);
  if ( !*(_QWORD *)(v16 + 72) )
    WdLogSingleEntry0(1LL);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 72) + 48LL);
  if ( !*(_QWORD *)(v17 + 8) )
    WdLogSingleEntry0(1LL);
  v18 = *(_QWORD *)(v17 + 8);
  if ( !v18 )
    WdLogSingleEntry0(1LL);
  v19 = *((unsigned int *)a2 + 7);
  v20 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a2 + 2);
  if ( *(_QWORD *)(a2 + 7) == 0xFFFFFFFEFFFFFFFEuLL )
  {
    if ( *((_DWORD *)a2 + 9) != -2 || *((_DWORD *)a2 + 10) != -2 || *((_QWORD *)a2 + 6) != 4294967294LL )
    {
      v21 = *(DXGADAPTER **)(v18 + 16);
      goto LABEL_23;
    }
    v21 = *(DXGADAPTER **)(v18 + 16);
    v22 = (DXGADAPTER **)(v18 + 16);
    if ( *((_QWORD *)v21 + 86) )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      {
LABEL_23:
        v23 = -1071774966;
        WdLogSingleEntry2(2LL, v21, -1071774966LL);
LABEL_147:
        v4 = v23;
        goto LABEL_148;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v21, 4294967294LL, v13) + 24) = *v22;
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v21, 4294967294LL, v13);
      v24[3] = *((unsigned int *)a2 + 5);
      v24[4] = *((unsigned int *)a2 + 6);
      v24[5] = *((unsigned int *)a2 + 7);
      v24[6] = *((unsigned int *)a2 + 8);
    }
  }
  else
  {
    v21 = *(DXGADAPTER **)(v18 + 16);
    v22 = (DXGADAPTER **)(v18 + 16);
    if ( (*((_DWORD *)v21 + 109) & 0x100) == 0 && !*((_QWORD *)v21 + 86) )
      goto LABEL_23;
    if ( *((_DWORD *)a2 + 9) == -2 && *((_DWORD *)a2 + 10) == -2 )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
      {
        WdLogSingleEntry4(
          2LL,
          *((unsigned int *)a2 + 5),
          *((unsigned int *)a2 + 6),
          *((unsigned int *)a2 + 7),
          *((unsigned int *)a2 + 8));
        v23 = -1071774966;
        goto LABEL_147;
      }
      *((_DWORD *)a2 + 9) = 1000;
      *((_DWORD *)a2 + 10) = 1;
    }
    if ( *((_QWORD *)a2 + 6) == 4294967294LL )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedPixelRate )
      {
        WdLogSingleEntry4(2LL, *((unsigned int *)a2 + 5), *((unsigned int *)a2 + 6), v19, *((unsigned int *)a2 + 8));
        v23 = -1071774966;
        goto LABEL_147;
      }
      *((_QWORD *)a2 + 6) = 1000000LL;
    }
  }
  v25 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 14) + 96LL) + 84LL);
  if ( (v25 < 0xF || (v26 = v25 - 15) != 0 && v26 - 1 >= 2) && (v21 = *v22, (*((_DWORD *)*v22 + 109) & 0x200) == 0) )
  {
    if ( ((_DWORD)a2[14] & 0x1F8) != 0 )
      goto LABEL_23;
  }
  else
  {
    v27 = *((unsigned int *)a2 + 14);
    if ( (v27 & 0x1F8) == 0 )
    {
LABEL_43:
      v21 = *v22;
      goto LABEL_23;
    }
    if ( *(_QWORD *)(a2 + 7) != 0xFFFFFFFEFFFFFFFEuLL
      && (DXGADAPTER::IsAdapterSessionized(
            *v22,
            (struct _LUID *)(10 * (unsigned __int64)*((unsigned int *)a2 + 7)
                           % (*((unsigned int *)a2 + 8) * ((v27 >> 3) & 0x3F))),
            0LL,
            0LL)
        ? v28 < 0x32
        : v28 < 0xEF) )
    {
      v21 = *v22;
      goto LABEL_23;
    }
  }
  v30 = 0LL;
  if ( v5 < 2 )
  {
    if ( *((_DWORD *)a2 + 17) != -1 || *((_DWORD *)a2 + 18) != -1 )
    {
      v23 = -1073741819;
      WdLogSingleEntry5(0LL, 275LL, 7LL, *v22, -1073741819LL, 0LL);
      goto LABEL_147;
    }
  }
  else
  {
    v31 = *((unsigned int *)a2 + 17);
    if ( (*(_DWORD *)(v18 + 24) & 0x20) != 0 )
    {
      if ( (_DWORD)v31 == -1 )
        goto LABEL_43;
      v32 = *((_DWORD *)a2 + 18);
      if ( v32 == -1 )
        goto LABEL_43;
      if ( (_DWORD)v31 != -2 || v32 != -2 )
      {
        v30 = a2 + 17;
        if ( (_DWORD)v31 == -2 )
          goto LABEL_43;
        v33 = *((unsigned int *)a2 + 18);
        if ( (_DWORD)v33 == -2 || (_DWORD)v31 && !(_DWORD)v33 )
          goto LABEL_43;
        if ( (unsigned __int64)*((unsigned int *)a2 + 7) * v33 < v31 * (unsigned __int64)*((unsigned int *)a2 + 8) )
          goto LABEL_43;
        if ( !(_DWORD)v33 )
          *((_DWORD *)a2 + 18) = 1;
        Feature_VirtualRefreshRate__private_ReportDeviceUsage();
      }
    }
    else if ( (_DWORD)v31 == -1 )
    {
      if ( *((_DWORD *)a2 + 18) != -1 )
      {
        v21 = *v22;
        goto LABEL_23;
      }
    }
    else
    {
      if ( (_DWORD)v31 != -2 )
        goto LABEL_43;
      if ( *((_DWORD *)a2 + 18) != -2 )
      {
        v21 = *v22;
        goto LABEL_23;
      }
    }
  }
  v34 = operator new[](0xA8uLL, 0x4E506456u, 256LL);
  v35 = v34;
  if ( !v34 )
  {
    v35 = 0LL;
    WdLogSingleEntry1(6LL, this);
    LODWORD(v40) = -1073741801;
    goto LABEL_142;
  }
  v36 = *(_DWORD *)a2;
  *(_QWORD *)(v34 + 8) = 0LL;
  *(_QWORD *)(v34 + 16) = 0LL;
  *(_QWORD *)v34 = &SetElement::`vftable';
  *(_DWORD *)(v34 + 24) = v36;
  if ( v36 == -1 )
  {
    WdLogSingleEntry1(1LL, 240LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED", 240LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_DWORD *)(v35 + 72) = 0;
  *(_QWORD *)v35 = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *(_QWORD *)(v35 + 32) = &DMMVIDPNTARGETMODE::`vftable'{for `ContainedBy<DMMVIDPNTARGETMODESET>'};
  *(_QWORD *)(v35 + 76) = -1LL;
  *(_QWORD *)(v35 + 84) = -1LL;
  *(_QWORD *)(v35 + 92) = -1LL;
  *(_QWORD *)(v35 + 112) = 0xFFFFFFFFLL;
  *(_DWORD *)(v35 + 120) = 8;
  *(_QWORD *)(v35 + 40) = 0LL;
  *(_DWORD *)(v35 + 56) = 1833173007;
  *(_QWORD *)(v35 + 48) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
  *(_QWORD *)(v35 + 64) = &DMMVIDPNTARGETMODE::`vftable'{for `NonReferenceCounted'};
  *(_DWORD *)(v35 + 132) = 0;
  *(_DWORD *)(v35 + 136) = 4;
  *(_DWORD *)(v35 + 160) = 1;
  v37 = *v22;
  v38 = *((_DWORD *)a2 + 16);
  if ( !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v37) || (*(_DWORD *)(*((_QWORD *)v37 + 365) + 512LL) & 1) != 0 )
    v38 &= 3u;
  v39 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(v20);
  v40 = v39;
  if ( v39 < 0 )
  {
    WdLogSingleEntry2(2LL, v20, v39);
    v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41, v43, v44);
    v45[3] = v35;
    v45[4] = this;
    v45[5] = v40;
    goto LABEL_142;
  }
  v76 = (int *)(v35 + 128);
  *(_DWORD *)(v35 + 128) = v38;
  if ( v30 )
  {
    *(_BYTE *)(v35 + 140) = 1;
    v46 = *(_QWORD *)v30;
  }
  else
  {
    *(_BYTE *)(v35 + 140) = 0;
    v46 = *(_QWORD *)(a2 + 7);
  }
  *(_QWORD *)(v35 + 144) = v46;
  v47 = (char *)this + 32;
  v48 = (char *)this + 48;
  *(_QWORD *)(v35 + 152) = *(_QWORD *)(a2 + 7);
  v49 = v35;
  *(_DWORD *)(v35 + 160) = 1;
  v50 = *(_OWORD *)&v20->VideoStandard;
  v81 = (__int64 (__fastcall ***)(_QWORD, __int64))v35;
  *(_OWORD *)(v35 + 72) = v50;
  *(_OWORD *)(v35 + 88) = *(_OWORD *)(a2 + 6);
  *(_OWORD *)(v35 + 104) = *(_OWORD *)(a2 + 10);
  *(_QWORD *)(v35 + 120) = *((_QWORD *)a2 + 7);
  v35 = 0LL;
  v51 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
  v75 = (char *)v51;
  if ( v51 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
  {
    v52 = (char *)v51 - 8;
    goto LABEL_86;
  }
  v61 = (__int64)v51 - 8;
  v52 = (char *)v51 - 8;
  if ( v51 != (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)8 )
  {
    while ( *(_DWORD *)(v61 + 24) != *(_DWORD *)(v49 + 24) )
    {
      v62 = *(DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL **)(v61 + 8);
      v61 = (__int64)v62 - 8;
      if ( v62 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
        v61 = 0LL;
      if ( !v61 )
        goto LABEL_86;
    }
    if ( DMMVIDPNTARGETMODE::operator!=(v61, v49) )
    {
      WdLogSingleEntry3(2LL, *(unsigned int *)(v49 + 24), v49, this);
      LODWORD(v40) = -1071774940;
    }
    else
    {
LABEL_120:
      v63 = WdLogNewEntry5_WdTrace(v53, v52, v59, v57);
      LODWORD(v40) = -1071774956;
      *(_QWORD *)(v63 + 24) = v49;
      *(_QWORD *)(v63 + 32) = this;
    }
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(&v81);
    v68 = (_QWORD *)WdLogNewEntry5_WdTrace(v65, v64, v66, v67);
    v68[3] = a2;
    v68[4] = this;
    v68[5] = (int)v40;
LABEL_142:
    v4 = v40;
    if ( v35 )
      (**(void (__fastcall ***)(__int64, __int64))v35)(v35, 1LL);
    goto LABEL_148;
  }
LABEL_86:
  if ( v51 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
    goto LABEL_123;
  v53 = v52;
  if ( !v52 )
    goto LABEL_123;
  v54 = *(_DWORD *)(v49 + 76);
  for ( i = v49 + 76;
        *((_DWORD *)v53 + 19) != v54
     || *((_DWORD *)v53 + 20) != *(_DWORD *)(i + 4)
     || *((_DWORD *)v53 + 21) != *(_DWORD *)(v49 + 84)
     || *((_DWORD *)v53 + 22) != *(_DWORD *)(v49 + 88)
     || *((_DWORD *)v53 + 23) != *(_DWORD *)(v49 + 92)
     || *((_DWORD *)v53 + 24) != *(_DWORD *)(v49 + 96);
        i = v49 + 76 )
  {
LABEL_107:
    v60 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v53 + 1);
    v53 = (char *)v60 - 8;
    if ( v60 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
      v53 = 0LL;
    if ( !v53 )
      goto LABEL_122;
  }
  if ( *((_DWORD *)v53 + 25) != *(_DWORD *)(v49 + 100)
    || *((_DWORD *)v53 + 26) != *(_DWORD *)(v49 + 104)
    || *((_QWORD *)v53 + 14) != *(_QWORD *)(v49 + 112)
    || (v56 = *((_DWORD *)v53 + 30), (((unsigned __int8)v56 ^ *(_BYTE *)(v49 + 120)) & 7) != 0)
    || (((unsigned __int16)v56 ^ (unsigned __int16)*(_DWORD *)(v49 + 120)) & 0x1F8) != 0
    || (v57 = *((unsigned int *)v53 + 32), v58 = *v76, (((unsigned __int8)v57 ^ *(_BYTE *)v76) & 3) != 0)
    || (((unsigned __int8)v57 ^ (unsigned __int8)v58) & 0xFC) != 0
    || (((unsigned __int16)v57 ^ (unsigned __int16)v58) & 0x3F00) != 0
    || (((unsigned int)v57 ^ v58) & 0xFC000) != 0
    || (((unsigned int)v57 ^ v58) & 0x3F00000) != 0
    || (v59 = (unsigned int)v57 ^ v58, (v59 & 0xFC000000) != 0) )
  {
    v54 = *(_DWORD *)(v49 + 76);
    goto LABEL_107;
  }
  if ( v53 )
    goto LABEL_120;
LABEL_122:
  v47 = (char *)this + 32;
  v48 = (char *)this + 48;
LABEL_123:
  if ( v75 == v48 || !v52 )
  {
LABEL_129:
    v70 = (char **)*((_QWORD *)v48 + 1);
    v71 = (char *)(v49 + 8);
    if ( *v70 != v48 )
      __fastfail(3u);
    *(_QWORD *)v71 = v48;
    *(_QWORD *)(v49 + 16) = v70;
    *v70 = v71;
    *((_QWORD *)v48 + 1) = v71;
    ++*((_QWORD *)v47 + 4);
  }
  else
  {
    while ( v52 != (char *)v49 )
    {
      v69 = (char *)*((_QWORD *)v52 + 1);
      v52 = v69 - 8;
      if ( v69 == v48 )
        v52 = 0LL;
      if ( !v52 )
        goto LABEL_129;
    }
    WdLogSingleEntry1(1LL, 108LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_QWORD *)(v49 + 40) )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)(v49 + 40) = this;
  if ( *((_DWORD *)a2 - 4) == 305419896 )
  {
    v72 = *((_QWORD *)a2 - 1);
    if ( !v72
      || DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::ContainsByReference(
           (__int64)v47,
           v72) )
    {
      operator delete(a2 - 4);
    }
    else
    {
      WdLogSingleEntry2(2LL, a2 - 4, this);
      v4 = -1071774928;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2 - 4);
    v4 = -1071774959;
  }
LABEL_148:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v77);
  if ( v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v73, v77);
  return v4;
}
