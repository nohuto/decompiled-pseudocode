/*
 * XREFs of DxgkCreateContext @ 0x1C00EDDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00F07E8 (-GetBitCount@@YAII@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00F1B0C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGDEVICE *v11; // r13
  int v12; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r15d
  PVOID v26; // r14
  char *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  size_t v31; // r8
  unsigned int v32; // r8d
  ULONG64 v33; // r12
  int v34; // r8d
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // r11
  int v38; // r13d
  _DWORD *v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rdx
  _DWORD *v43; // rdx
  _QWORD *v44; // rdx
  _DWORD *v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r14
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  struct DXGDEVICE *v62; // [rsp+50h] [rbp-1C8h] BYREF
  int v63; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v64; // [rsp+60h] [rbp-1B8h]
  char v65; // [rsp+68h] [rbp-1B0h]
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v66; // [rsp+70h] [rbp-1A8h]
  ULONG64 v67; // [rsp+78h] [rbp-1A0h]
  struct DXGDEVICE *v68; // [rsp+80h] [rbp-198h] BYREF
  _QWORD v69[2]; // [rsp+88h] [rbp-190h] BYREF
  size_t Size; // [rsp+98h] [rbp-180h]
  PVOID v71; // [rsp+A0h] [rbp-178h]
  ULONG64 v72; // [rsp+A8h] [rbp-170h]
  struct DXGCONTEXT *v73; // [rsp+B0h] [rbp-168h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v74[4]; // [rsp+C0h] [rbp-158h]
  void *Src[2]; // [rsp+D0h] [rbp-148h]
  __int128 v76; // [rsp+E0h] [rbp-138h]
  __int128 v77; // [rsp+F0h] [rbp-128h]
  __int128 v78; // [rsp+100h] [rbp-118h]
  __int128 v79; // [rsp+110h] [rbp-108h]
  int v80; // [rsp+120h] [rbp-F8h]
  int v81; // [rsp+124h] [rbp-F4h]
  ULONG64 v82; // [rsp+128h] [rbp-F0h]
  __int64 v83; // [rsp+130h] [rbp-E8h]
  __int64 v84; // [rsp+138h] [rbp-E0h]
  __int64 v85; // [rsp+140h] [rbp-D8h]
  _BYTE v86[160]; // [rsp+150h] [rbp-C8h] BYREF

  v72 = a1;
  v67 = a1;
  v63 = -1;
  v64 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2039LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v50 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v50 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v50);
LABEL_70:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v51);
    if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerExit, v57, v63);
    return 3221225485LL;
  }
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v74[0].0 = *v7;
  *(_OWORD *)Src = v7[1];
  v76 = v7[2];
  v77 = v7[3];
  v78 = v7[4];
  v79 = v7[5];
  v68 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, v74[0].Value, Current, &v68);
  v11 = v68;
  if ( !v68 )
  {
    v52 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v52 + 24) = v74[0].Value;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v52);
LABEL_67:
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    goto LABEL_70;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v68 + 2) + 16LL) + 2056LL) & 1) != 0 )
  {
    v12 = 0;
    Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v74[2].Value;
    while ( 1 )
    {
      Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&Value >> 1);
      if ( !*(_DWORD *)&Value )
        break;
      ++v12;
    }
    if ( GetBitCount(v74[2].Value) > 1 || (unsigned int)v16 >= *(_DWORD *)(v17 + 280) )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
      v54[3] = v74[2].Value;
    }
    else
    {
      v18 = 360LL * (unsigned int)v16;
      v19 = *(unsigned __int16 *)(v18 + *(_QWORD *)(v17 + 2584));
      v20 = v74[1].Value;
      v66 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v74[1].Value;
      if ( v74[1].Value < (unsigned int)v19 )
        goto LABEL_13;
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v19, v16);
      v54[3] = v20;
    }
    v54[4] = -1073741811LL;
    goto LABEL_54;
  }
  v53 = v74[1].Value;
  v66 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v74[1].Value;
  if ( v74[1].Value || v74[2].Value )
  {
    v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    v54[3] = v53;
    v54[4] = v74[2].Value;
    v54[5] = -1073741811LL;
LABEL_54:
    WdLogEvent5_WdWarning(v54);
    goto LABEL_67;
  }
LABEL_13:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69, v11);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v86, (__int64)v11, 0, v21, 0);
  v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v86, 0LL);
  if ( v25 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
    if ( v69[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
    if ( !v62 )
      goto LABEL_43;
LABEL_41:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
LABEL_43:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v46);
    if ( v65 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v63);
    }
    return (unsigned int)v25;
  }
  v26 = 0LL;
  v71 = 0LL;
  v27 = (char *)Src[0];
  if ( !Src[0] )
  {
    if ( !LODWORD(Src[1]) )
    {
      v32 = (unsigned int)v66;
      v33 = v72;
      goto LABEL_21;
    }
    goto LABEL_65;
  }
  if ( !LODWORD(Src[1]) )
  {
LABEL_65:
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v55[3] = v27;
    v55[4] = LODWORD(Src[1]);
    v55[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v55);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
    if ( v69[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
    goto LABEL_67;
  }
  Size = LODWORD(Src[1]);
  v26 = operator new[](LODWORD(Src[1]), 0x4B677844u, PagedPool);
  v71 = v26;
  if ( v26 )
  {
    v31 = Size;
    if ( &v27[Size] < v27 || (unsigned __int64)&v27[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v26, v27, v31);
    v32 = (unsigned int)v66;
    v33 = v72;
LABEL_21:
    v73 = 0LL;
    v25 = DXGDEVICE::CreateContext(v11, &v73, v32, v74[2].Value, v74[3], v26, (unsigned int)Src[1], SHIDWORD(Src[1]), 0);
    if ( v25 >= 0 )
    {
      v34 = *((_DWORD *)v73 + 6);
      v80 = v34;
      v35 = *((_QWORD *)v73 + 7);
      v83 = v35;
      v36 = *((_QWORD *)v73 + 6);
      v84 = v36;
      v37 = *((_QWORD *)v73 + 11);
      v85 = v37;
      v38 = *((_DWORD *)v73 + 18);
      v81 = v38;
      v67 = *((_QWORD *)v73 + 15);
      v82 = v67;
      v66 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)*((_DWORD *)v73 + 26);
      LODWORD(Size) = v66;
      v39 = (_DWORD *)(v33 + 32);
      if ( v33 + 32 >= MmUserProbeAddress )
        v39 = (_DWORD *)MmUserProbeAddress;
      *v39 = v34;
      v40 = (_QWORD *)(v33 + 40);
      if ( v33 + 40 >= MmUserProbeAddress )
        v40 = (_QWORD *)MmUserProbeAddress;
      *v40 = v35;
      v41 = (_QWORD *)(v33 + 48);
      if ( v33 + 48 >= MmUserProbeAddress )
        v41 = (_QWORD *)MmUserProbeAddress;
      *v41 = v36;
      v42 = (_QWORD *)(v33 + 56);
      if ( v33 + 56 >= MmUserProbeAddress )
        v42 = (_QWORD *)MmUserProbeAddress;
      *v42 = v37;
      v43 = (_DWORD *)(v33 + 64);
      if ( v33 + 64 >= MmUserProbeAddress )
        v43 = (_DWORD *)MmUserProbeAddress;
      *v43 = v38;
      v44 = (_QWORD *)(v33 + 72);
      if ( v33 + 72 >= MmUserProbeAddress )
        v44 = (_QWORD *)MmUserProbeAddress;
      *v44 = v67;
      v45 = (_DWORD *)(v33 + 80);
      if ( v33 + 80 >= MmUserProbeAddress )
        v45 = (_DWORD *)MmUserProbeAddress;
      *v45 = v66;
    }
    operator delete[](v26);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
    if ( v69[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
    if ( !v62 )
      goto LABEL_43;
    goto LABEL_41;
  }
  v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
  v58[3] = v11;
  v58[4] = Size;
  v58[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v58);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v86);
  if ( v69[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
  if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v59);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v63);
  return 3221225495LL;
}
