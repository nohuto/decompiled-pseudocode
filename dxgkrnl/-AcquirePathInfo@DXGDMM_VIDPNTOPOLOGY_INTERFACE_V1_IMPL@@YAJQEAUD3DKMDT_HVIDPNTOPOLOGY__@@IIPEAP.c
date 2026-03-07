__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  int v15; // eax
  unsigned int v16; // r15d
  unsigned int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // r8
  _QWORD *v21; // rax
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  char v24; // [rsp+50h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v25)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *const); // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h]
  _QWORD *v27; // [rsp+68h] [rbp-A0h]
  _QWORD *v28; // [rsp+88h] [rbp-80h]
  _QWORD v29[3]; // [rsp+98h] [rbp-70h] BYREF
  void **v30; // [rsp+B0h] [rbp-58h]
  int v31; // [rsp+B8h] [rbp-50h]
  void **v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]
  void **v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D8h] [rbp-30h]
  void **v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E8h] [rbp-20h]
  _QWORD *v38; // [rsp+F0h] [rbp-18h]
  __int64 v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  __int16 v41; // [rsp+104h] [rbp-4h]
  int v42; // [rsp+108h] [rbp+0h]
  int v43; // [rsp+10Ch] [rbp+4h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int64 v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  __int64 v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  int v49; // [rsp+138h] [rbp+30h]
  int v50; // [rsp+13Ch] [rbp+34h]
  int v51; // [rsp+140h] [rbp+38h]
  __int64 v52; // [rsp+144h] [rbp+3Ch]
  ReferenceCounted *v53; // [rsp+150h] [rbp+48h]

  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  LODWORD(v23[0]) = -1;
  v23[1] = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    LODWORD(v23[0]) = 6021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6021);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v23, 6021);
  if ( !a4 )
  {
    WdLogSingleEntry4(2LL, 0LL, v7, v6, this);
    v17 = -1073741811;
    goto LABEL_24;
  }
  *a4 = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v17 = -1071774976;
    goto LABEL_24;
  }
  v22 = 0LL;
  if ( !*((_QWORD *)this + 21) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)this + 21);
  v9 = (_QWORD *)(*(_QWORD *)(v8 + 304) + 24LL);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 == v9 || (v11 = v10 - 1, v10 == (_QWORD *)8) )
  {
LABEL_32:
    WdLogSingleEntry1(2LL, v7);
    v17 = -1071774972;
    goto LABEL_24;
  }
  while ( *((_DWORD *)v11 + 6) != (_DWORD)v7 )
  {
    v21 = (_QWORD *)v11[1];
    v11 = v21 - 1;
    if ( v21 == v9 )
      v11 = 0LL;
    if ( !v11 )
      goto LABEL_32;
  }
  v12 = (_QWORD *)(*(_QWORD *)(v8 + 312) + 24LL);
  if ( (_QWORD *)*v12 == v12 || (v13 = *v12 - 8LL, *v12 == 8LL) )
  {
LABEL_37:
    WdLogSingleEntry1(2LL, v6);
    v17 = -1071774971;
    goto LABEL_24;
  }
  while ( *(_DWORD *)(v13 + 24) != (_DWORD)v6 )
  {
    v14 = *(_QWORD **)(v13 + 8);
    if ( v14 != v12 )
    {
      v13 = (__int64)(v14 - 1);
      if ( v13 )
        continue;
    }
    goto LABEL_37;
  }
  v39 = v13;
  v29[0] = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  v29[1] = 0LL;
  v30 = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  v32 = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  v34 = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  v36 = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  v29[2] = 0LL;
  v31 = 1833173003;
  v33 = 0LL;
  v35 = 0;
  v38 = v11;
  v42 = 254;
  v43 = 254;
  v50 = 255;
  v53 = 0LL;
  v37 = 1;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0;
  v41 = -1;
  v40 = 255;
  v51 = 1;
  v44 = 0x1100000001LL;
  v52 = 1LL;
  DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties((DMMVIDPNPRESENTPATH *)v29);
  LODWORD(v26) = 0;
  v25 = DMMVIDPNTOPOLOGY::FindByValue;
  v37 = 2;
  v28 = v29;
  v27 = v29;
  v15 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          this,
          &v25,
          &v22,
          0LL);
  v16 = v15;
  v17 = -1071774937;
  if ( v15 == -1071774937 )
  {
    WdLogSingleEntry3(3LL, v7, v6, this);
    if ( v22 )
      WdLogSingleEntry0(1LL);
    goto LABEL_36;
  }
  if ( v15 < 0 )
  {
    WdLogSingleEntry4(7LL, v7, v6, this, v15);
    v17 = v16;
LABEL_36:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v29);
    goto LABEL_24;
  }
  v18 = v22;
  if ( !v22 )
    WdLogSingleEntry0(1LL);
  v29[0] = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  v30 = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  v32 = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  v34 = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  v36 = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  if ( v53 )
    ReferenceCounted::Release(v53);
  *a4 = v18;
  v17 = 0;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v23);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v19, v23[0]);
  return v17;
}
