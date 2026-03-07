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
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 Container; // rax
  __int64 v18; // r10
  struct DMMVIDPNTARGET *v19; // rax
  struct DMMVIDPNSOURCE *v20; // r11
  int v21; // eax
  unsigned int v22; // r15d
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h]
  char v30; // [rsp+48h] [rbp-B8h]
  struct DMMVIDPNPRESENTPATH *(__fastcall *v31)(DMMVIDPNTOPOLOGY *, const struct DMMVIDPNPRESENTPATH *const); // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+58h] [rbp-A8h]
  _BYTE *v33; // [rsp+60h] [rbp-A0h]
  _BYTE *v34; // [rsp+80h] [rbp-80h]
  _BYTE v35[80]; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+E0h] [rbp-20h]

  v28 = -1;
  v5 = (unsigned int)a3;
  v7 = (unsigned int)a2;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 7035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7035);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 7035);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v13 = v7;
  v12[3] = v7;
  v12[4] = v5;
  v12[5] = this;
  v12[6] = a4;
  if ( !a4 )
  {
    WdLogSingleEntry4(2LL, 0LL, v7, v5, this);
    v14 = -1073741811;
    goto LABEL_24;
  }
  *a4 = 0LL;
  v15 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v16 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, this);
    v14 = -1071774976;
    goto LABEL_24;
  }
  v27 = 0LL;
  Container = ContainedBy<DMMVIDPN>::GetContainer(v15 + 160);
  if ( !IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v7) )
  {
    WdLogSingleEntry1(2LL, v7);
    v14 = -1071774972;
    goto LABEL_24;
  }
  v19 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v18 + 312), v5);
  if ( !v19 )
  {
    WdLogSingleEntry1(2LL, v5);
    v14 = -1071774971;
    goto LABEL_24;
  }
  DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
    (DMMVIDPNPRESENTPATH *)v35,
    v20,
    v19,
    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
    0xFFFFu);
  if ( v36 != 2 )
    WdLogSingleEntry0(1LL);
  v32 = 0;
  v31 = DMMVIDPNTOPOLOGY::FindByValue;
  v34 = v35;
  v33 = v35;
  v21 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
          v16,
          (__int64)&v31,
          &v27,
          1);
  v22 = v21;
  v14 = -1071774937;
  if ( v21 == -1071774937 )
  {
    WdLogSingleEntry3(3LL, v13, v5, v16);
    if ( v27 )
      WdLogSingleEntry0(1LL);
    goto LABEL_20;
  }
  if ( v21 < 0 )
  {
    WdLogSingleEntry4(2LL, v13, v5, v16, v21);
    v14 = v22;
LABEL_20:
    DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v35);
    goto LABEL_24;
  }
  v23 = v27;
  if ( !v27 )
    WdLogSingleEntry0(1LL);
  DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v35);
  *a4 = v23;
  v14 = 0;
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 )
  {
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v28);
  }
  return v14;
}
