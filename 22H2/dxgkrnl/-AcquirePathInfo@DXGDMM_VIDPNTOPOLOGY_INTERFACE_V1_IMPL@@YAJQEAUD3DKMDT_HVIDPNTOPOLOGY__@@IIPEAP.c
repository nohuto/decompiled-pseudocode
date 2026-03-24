/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0117D20
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00058A8 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C000650C (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0117B40 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  unsigned int v23; // ebx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h]
  char v46; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v47)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *const); // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+58h] [rbp-A8h]
  _BYTE *v49; // [rsp+60h] [rbp-A0h]
  _BYTE *v50; // [rsp+80h] [rbp-80h]
  _BYTE v51[80]; // [rsp+90h] [rbp-70h] BYREF
  int v52; // [rsp+E0h] [rbp-20h]

  v44 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v45 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v46 = 1;
    v44 = 6021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6021);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 6021LL);
  if ( !a4 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v29[3] = 0LL;
    v29[4] = v7;
    v29[5] = v5;
    v29[6] = this;
    WdLogEvent5_WdError(v29);
    v23 = -1073741811;
    goto LABEL_24;
  }
  *a4 = 0LL;
  if ( !this || (v10 = this, *((_DWORD *)this + 46) != 1833173002) )
    v10 = 0LL;
  if ( !v10 )
  {
    v30 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    v23 = -1071774976;
    goto LABEL_24;
  }
  v11 = *((_QWORD *)v10 + 21);
  v43 = 0LL;
  if ( !v11 )
  {
    v31 = WdLogNewEntry5_WdAssertion(0LL, v8);
    WdLogEvent5_WdAssertion(v31);
    v11 = *((_QWORD *)v10 + 21);
  }
  v12 = (_QWORD *)(*(_QWORD *)(v11 + 304) + 24LL);
  if ( (_QWORD *)*v12 == v12 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = *v12 - 8LL;
    if ( *v12 == 8LL )
    {
LABEL_46:
      v42 = WdLogNewEntry5_WdError(v11, v13);
      *(_QWORD *)(v42 + 24) = v7;
      WdLogEvent5_WdError(v42);
      v23 = -1071774972;
      goto LABEL_24;
    }
    do
    {
      if ( *(_DWORD *)(v13 + 24) == (_DWORD)v7 )
        break;
      v32 = *(_QWORD **)(v13 + 8);
      v13 = (__int64)(v32 - 1);
      if ( v32 == v12 )
        v13 = 0LL;
    }
    while ( v13 );
  }
  if ( !v13 )
    goto LABEL_46;
  v14 = (_QWORD *)(*(_QWORD *)(v11 + 312) + 24LL);
  if ( (_QWORD *)*v14 == v14 )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = *v14 - 8LL;
    if ( *v14 == 8LL )
    {
LABEL_45:
      v41 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v41 + 24) = v5;
      WdLogEvent5_WdError(v41);
      v23 = -1071774971;
      goto LABEL_24;
    }
    do
    {
      if ( *(_DWORD *)(v15 + 24) == (_DWORD)v5 )
        break;
      v33 = *(_QWORD **)(v15 + 8);
      v15 = (__int64)(v33 - 1);
      if ( v33 == v14 )
        v15 = 0LL;
    }
    while ( v15 );
  }
  if ( !v15 )
    goto LABEL_45;
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v51,
    (struct DMMVIDPNSOURCE *)v13,
    (struct DMMVIDPNTARGET *)v15,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v52 != 2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v34);
  }
  v48 = 0;
  v47 = DMMVIDPNTOPOLOGY::FindByValue;
  v50 = v51;
  v49 = v51;
  v18 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          (__int64)v10,
          (__int64)&v47,
          &v43,
          0);
  v22 = v18;
  v23 = -1071774937;
  if ( v18 == -1071774937 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v35[3] = v7;
    v35[4] = v5;
    v35[5] = v10;
    WdLogEvent5_WdWarning(v35);
    if ( v43 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37, v36);
      WdLogEvent5_WdAssertion(v38);
    }
    goto LABEL_44;
  }
  if ( v18 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v39[3] = v7;
    v39[4] = v5;
    v39[5] = v10;
    v39[6] = v22;
    WdLogEvent5_WdDmmEvent(v39);
    v23 = v22;
LABEL_44:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v51);
    goto LABEL_24;
  }
  v24 = v43;
  if ( !v43 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v40);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v51);
  *a4 = v24;
  v23 = 0;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v25);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v44);
  return v23;
}
