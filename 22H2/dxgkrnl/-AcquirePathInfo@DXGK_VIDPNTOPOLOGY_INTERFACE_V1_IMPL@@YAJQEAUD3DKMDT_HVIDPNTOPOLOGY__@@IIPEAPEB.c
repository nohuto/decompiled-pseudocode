/*
 * XREFs of ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E7E30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x1C00058A8 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C000650C (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007548 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009260 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018EB8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0117B40 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r13
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 Container; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rax
  struct DMMVIDPNTARGET *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct DMMVIDPNSOURCE *v30; // r11
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r15
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v50; // [rsp+30h] [rbp-D0h] BYREF
  int v51; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-C0h]
  char v53; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v54)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *const); // [rsp+50h] [rbp-B0h] BYREF
  int v55; // [rsp+58h] [rbp-A8h]
  _BYTE *v56; // [rsp+60h] [rbp-A0h]
  _BYTE *v57; // [rsp+80h] [rbp-80h]
  _BYTE v58[80]; // [rsp+90h] [rbp-70h] BYREF
  int v59; // [rsp+E0h] [rbp-20h]

  v51 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v52 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 7035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7035);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 7035LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v13 = v7;
  v10[3] = v7;
  v10[4] = v5;
  v10[5] = this;
  v10[6] = a4;
  if ( !a4 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v14[3] = 0LL;
    v14[4] = v7;
    v14[5] = v5;
    v14[6] = this;
    WdLogEvent5_WdError(v14);
    v16 = -1073741811;
    goto LABEL_24;
  }
  *a4 = 0LL;
  v17 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v20 = v17;
  if ( !v17 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    v16 = -1071774976;
    goto LABEL_24;
  }
  v50 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v17 + 160, v18);
  if ( !IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    v26 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v26 + 24) = v7;
    WdLogEvent5_WdError(v26);
    v16 = -1071774972;
    goto LABEL_24;
  }
  v27 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v25 + 312), v5);
  if ( !v27 )
  {
    v31 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v31 + 24) = v5;
    WdLogEvent5_WdError(v31);
    v16 = -1071774971;
    goto LABEL_24;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v58,
    v30,
    v27,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v59 != 2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33, v32);
    WdLogEvent5_WdAssertion(v34);
  }
  v55 = 0;
  v54 = DMMVIDPNTOPOLOGY::FindByValue;
  v57 = v58;
  v56 = v58;
  v35 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v20,
          (__int64)&v54,
          &v50,
          1);
  v39 = v35;
  v16 = -1071774937;
  if ( v35 == -1071774937 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
    v40[3] = v13;
    v40[4] = v5;
    v40[5] = v20;
    WdLogEvent5_WdWarning(v40);
    if ( v50 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v42, v41);
      WdLogEvent5_WdAssertion(v43);
    }
    goto LABEL_20;
  }
  if ( v35 < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
    v44[3] = v13;
    v44[4] = v5;
    v44[5] = v20;
    v44[6] = v39;
    WdLogEvent5_WdError(v44);
    v16 = v39;
LABEL_20:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v58);
    goto LABEL_24;
  }
  v45 = v50;
  if ( !v50 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v37, v36);
    WdLogEvent5_WdAssertion(v46);
  }
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v58);
  *a4 = v45;
  v16 = 0;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v15);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v51);
  return v16;
}
