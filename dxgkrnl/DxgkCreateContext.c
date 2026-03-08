/*
 * XREFs of DxgkCreateContext @ 0x1C02E06B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B530C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C01DAD68 (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContext(struct DXGCONTEXT *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  int v6; // r14d
  _OWORD *v7; // rax
  struct DXGDEVICE *v8; // r13
  __int64 Value; // rbx
  int v10; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rdx
  UINT v15; // edx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // sf
  void *v21; // rbx
  char *v22; // r12
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t v25; // r8
  unsigned int v26; // r8d
  struct DXGCONTEXT *v27; // r12
  int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // r10
  __int64 v31; // r11
  int v32; // r13d
  _DWORD *v33; // rdx
  _QWORD *v34; // rdx
  _QWORD *v35; // rdx
  _QWORD *v36; // rdx
  _DWORD *v37; // rdx
  _QWORD *v38; // rdx
  _DWORD *v39; // rdx
  struct DXGDEVICE *v40; // [rsp+50h] [rbp-1C8h] BYREF
  int v41; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-1B8h]
  char v43; // [rsp+68h] [rbp-1B0h]
  unsigned int v44; // [rsp+70h] [rbp-1A8h]
  __int64 v45; // [rsp+78h] [rbp-1A0h]
  struct DXGDEVICE *v46; // [rsp+80h] [rbp-198h] BYREF
  struct DXGCONTEXT *v47; // [rsp+88h] [rbp-190h] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp-188h] BYREF
  struct DXGCONTEXT *v49; // [rsp+A0h] [rbp-178h]
  size_t Size; // [rsp+A8h] [rbp-170h]
  void *v51; // [rsp+B0h] [rbp-168h]
  struct _D3DDDI_CREATECONTEXTFLAGS v52[4]; // [rsp+C0h] [rbp-158h]
  void *Src[2]; // [rsp+D0h] [rbp-148h]
  __int128 v54; // [rsp+E0h] [rbp-138h]
  __int128 v55; // [rsp+F0h] [rbp-128h]
  __int128 v56; // [rsp+100h] [rbp-118h]
  __int128 v57; // [rsp+110h] [rbp-108h]
  int v58; // [rsp+120h] [rbp-F8h]
  __int64 v59; // [rsp+128h] [rbp-F0h]
  __int64 v60; // [rsp+130h] [rbp-E8h]
  __int64 v61; // [rsp+138h] [rbp-E0h]
  __int64 v62; // [rsp+140h] [rbp-D8h]
  _BYTE v63[160]; // [rsp+150h] [rbp-C8h] BYREF

  v49 = a1;
  v47 = a1;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 )
      return (unsigned int)v6;
    v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_34:
    if ( v19 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v41);
    return (unsigned int)v6;
  }
  v7 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v52[0].0 = *v7;
  *(_OWORD *)Src = v7[1];
  v54 = v7[2];
  v55 = v7[3];
  v56 = v7[4];
  v57 = v7[5];
  v46 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v52[0].Value, Current, &v46);
  v8 = v46;
  if ( !v46 )
  {
    Value = v52[0].Value;
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, v52[0].Value, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      Value,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL) + 2280LL) & 1) != 0 )
  {
    v10 = 0;
    v11 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v52[2].Value;
    while ( 1 )
    {
      v11 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&v11 >> 1);
      if ( !*(_DWORD *)&v11 )
        break;
      ++v10;
    }
    if ( (unsigned int)GetBitCount(v52[2].Value) > 1 || v12 >= *(_DWORD *)(v13 + 288) )
    {
      v14 = v52[2].Value;
    }
    else
    {
      v15 = *(unsigned __int16 *)(344LL * v12 + *(_QWORD *)(v13 + 2808));
      v44 = v52[1].Value;
      if ( v52[1].Value < v15 )
        goto LABEL_26;
      v14 = v52[1].Value;
    }
    v6 = -1073741811;
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
    goto LABEL_11;
  }
  v44 = v52[1].Value;
  if ( v52[1].Value || v52[2].Value )
  {
    v6 = -1073741811;
    WdLogSingleEntry3(3LL, v52[1].Value, v52[2].Value, -1073741811LL);
    goto LABEL_11;
  }
LABEL_26:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v8);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)v8, 0, v16, 0);
  v6 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v63, 0LL);
  if ( v6 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
    if ( v48[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    if ( !v40 )
      goto LABEL_32;
    goto LABEL_30;
  }
  v21 = 0LL;
  v51 = 0LL;
  v22 = (char *)Src[0];
  if ( !Src[0] )
  {
    if ( !LODWORD(Src[1]) )
    {
      v26 = v44;
      v27 = v49;
LABEL_63:
      v47 = 0LL;
      v6 = DXGDEVICE::CreateContext(v8, &v47, v26, v52[2].Value, v52[3], v21, (unsigned int)Src[1], SHIDWORD(Src[1]), 0);
      if ( v6 >= 0 )
      {
        v28 = *((_DWORD *)v47 + 6);
        v58 = v28;
        v29 = *((_QWORD *)v47 + 7);
        v60 = v29;
        v30 = *((_QWORD *)v47 + 6);
        v61 = v30;
        v31 = *((_QWORD *)v47 + 11);
        v62 = v31;
        v32 = *((_DWORD *)v47 + 18);
        LODWORD(v49) = v32;
        v45 = *((_QWORD *)v47 + 15);
        v59 = v45;
        v44 = *((_DWORD *)v47 + 26);
        LODWORD(Size) = v44;
        v33 = (_DWORD *)((char *)v27 + 32);
        if ( (unsigned __int64)v27 + 32 >= MmUserProbeAddress )
          v33 = (_DWORD *)MmUserProbeAddress;
        *v33 = v28;
        v34 = (_QWORD *)((char *)v27 + 40);
        if ( (unsigned __int64)v27 + 40 >= MmUserProbeAddress )
          v34 = (_QWORD *)MmUserProbeAddress;
        *v34 = v29;
        v35 = (_QWORD *)((char *)v27 + 48);
        if ( (unsigned __int64)v27 + 48 >= MmUserProbeAddress )
          v35 = (_QWORD *)MmUserProbeAddress;
        *v35 = v30;
        v36 = (_QWORD *)((char *)v27 + 56);
        if ( (unsigned __int64)v27 + 56 >= MmUserProbeAddress )
          v36 = (_QWORD *)MmUserProbeAddress;
        *v36 = v31;
        v37 = (_DWORD *)((char *)v27 + 64);
        if ( (unsigned __int64)v27 + 64 >= MmUserProbeAddress )
          v37 = (_DWORD *)MmUserProbeAddress;
        *v37 = v32;
        v38 = (_QWORD *)((char *)v27 + 72);
        if ( (unsigned __int64)v27 + 72 >= MmUserProbeAddress )
          v38 = (_QWORD *)MmUserProbeAddress;
        *v38 = v45;
        v39 = (_DWORD *)((char *)v27 + 80);
        if ( (unsigned __int64)v27 + 80 >= MmUserProbeAddress )
          v39 = (_DWORD *)MmUserProbeAddress;
        *v39 = v44;
      }
      operator delete(v21);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
      if ( v48[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
LABEL_11:
      if ( !v40 )
        goto LABEL_32;
LABEL_30:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
      goto LABEL_32;
    }
LABEL_41:
    v6 = -1073741811;
    WdLogSingleEntry3(3LL, Src[0], LODWORD(Src[1]), -1073741811LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
    if ( v48[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 )
      return (unsigned int)v6;
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_34;
  }
  if ( !LODWORD(Src[1]) )
    goto LABEL_41;
  Size = LODWORD(Src[1]);
  v21 = (void *)operator new[](LODWORD(Src[1]), 0x4B677844u, 256LL);
  v51 = v21;
  if ( v21 )
  {
    v25 = Size;
    if ( &v22[Size] < v22 || (unsigned __int64)&v22[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v21, v22, v25);
    v26 = v44;
    v27 = v49;
    goto LABEL_63;
  }
  WdLogSingleEntry3(3LL, v8, Size, -1073741801LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
  if ( v48[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v41);
  }
  return 3221225495LL;
}
