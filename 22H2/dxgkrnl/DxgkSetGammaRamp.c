/*
 * XREFs of DxgkSetGammaRamp @ 0x1C025A5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000278C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C000ADB4 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B554 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00436B0 (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C00EB174 (MonitorNotifyDXGIGammaRampChange.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012F308 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkSetGammaRamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rbx
  struct _KTHREAD **Current; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // r15d
  _QWORD *v20; // rax
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  enum _D3DDDI_GAMMARAMP_TYPE v26; // eax
  __int64 v27; // rax
  __int64 v28; // r14
  _QWORD *v29; // rax
  DXGK_GAMMA_RAMP *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  DXGK_GAMMA_RAMP *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  void *v38; // rcx
  const void *v39; // rdx
  char *v40; // r9
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  char v47; // al
  struct DXGDEVICE *v48; // [rsp+30h] [rbp-128h] BYREF
  struct _KTHREAD **v49; // [rsp+38h] [rbp-120h]
  _QWORD v50[2]; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v51; // [rsp+50h] [rbp-108h] BYREF
  struct DXGDEVICE *v52[2]; // [rsp+58h] [rbp-100h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v53[4]; // [rsp+68h] [rbp-F0h]
  void *Src[2]; // [rsp+78h] [rbp-E0h]
  _BYTE v55[160]; // [rsp+90h] [rbp-C8h] BYREF

  v4 = (_OWORD *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v49 = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v6, 0LL);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return v8;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v53 = *v4;
  *(_OWORD *)Src = v4[1];
  v52[0] = 0LL;
  v10 = (unsigned int)v53[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, (unsigned int)v53[0], Current, v52);
  v14 = v52[0];
  if ( !v52[0] )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v15 + 24) = v10;
    v8 = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_37;
  }
  v16 = *((_QWORD *)v52[0] + 231);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v17 + 24) = v10;
    v8 = -1073741637;
    *(_QWORD *)(v17 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v17);
    if ( !v48 )
      return v8;
LABEL_10:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    return v8;
  }
  LODWORD(v18) = 0;
  v19 = (unsigned int)Src[1];
  v8 = -1073741811;
  if ( v53[2] == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    LODWORD(v18) = (*(_DWORD *)(v16 + 2040) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      LODWORD(v18) = -1073741811;
  }
  else if ( v53[2] != D3DDDI_GAMMARAMP_DXGI_1 || LODWORD(Src[1]) != 12324 )
  {
    LODWORD(v18) = -1073741811;
  }
  if ( (int)v18 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning((unsigned int)(v53[2] - 2), v11, v13);
    v20[3] = v53[2];
    v20[4] = v10;
    v20[5] = (int)v18;
    WdLogEvent5_WdWarning(v20);
    if ( !v48 )
      return (unsigned int)v18;
LABEL_21:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    return (unsigned int)v18;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50, v52[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v14, 1, v21, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v16 + 2696) + 251LL) )
    v22 = COREDEVICEACCESS::AcquireExclusive((__int64)v55, 1LL);
  else
    v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v55, 0LL);
  LODWORD(v18) = v22;
  if ( v22 < 0 )
  {
LABEL_28:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    if ( v50[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
    if ( !v48 )
      return (unsigned int)v18;
    goto LABEL_21;
  }
  v25 = *(unsigned int *)(*(_QWORD *)(v16 + 2696) + 80LL);
  v26 = *((_DWORD *)v14 + 464);
  if ( (_DWORD)v25 != v26 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v25, v23);
    *(_QWORD *)(v27 + 24) = 4137LL;
    WdLogEvent5_WdAssertion(v27);
    v26 = *((_DWORD *)v14 + 464);
  }
  v28 = (unsigned int)v53[1];
  if ( (unsigned int)v26 <= v53[1] )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v23, v24);
    v29[3] = v14;
    v29[4] = v28;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v29);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
    if ( v50[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
LABEL_37:
    if ( !v48 )
      return v8;
    goto LABEL_10;
  }
  v30 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  if ( v30 )
    v35 = DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v30);
  else
    v35 = 0LL;
  v52[1] = v35;
  if ( v35 )
  {
    LODWORD(v18) = DXGK_GAMMA_RAMP::Initialize((size_t *)v35, (unsigned int)v53[2], 0LL);
    if ( (int)v18 >= 0 )
    {
      v38 = (void *)*((_QWORD *)v35 + 4);
      v39 = Src[0];
      v40 = (char *)Src[0] + v19;
      if ( v40 < Src[0] || (unsigned __int64)v40 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v38, v39, v19);
      DXGDEVICE::SetDeviceGammaRamp(v14, (unsigned int)v28, v35);
      v41 = 0LL;
      v51 = -1;
      while ( 1 )
      {
        v42 = v41++;
        if ( (int)DmmEnumClientVidPnPathTargetsFromSource((_QWORD *)v16, (unsigned int)v28, v42, &v51) < 0 )
          break;
        v37 = v51;
        if ( v51 == -1 )
          break;
        v43 = MonitorNotifyDXGIGammaRampChange((DXGADAPTER *)v16, v51);
        v18 = v43;
        if ( v43 < 0 )
        {
          v46 = WdLogNewEntry5_WdError(v45, v44);
          *(_QWORD *)(v46 + 24) = v18;
          WdLogEvent5_WdError(v46);
          break;
        }
      }
      v47 = *((_BYTE *)v49 + 349);
      *((_BYTE *)v49 + 349) = 1;
      if ( !v47 )
        DxgkLogCodePointPacket(0x5Eu, 3u, v18, 0, *(_QWORD *)(v16 + 316));
    }
    ReferenceCounted::Release(v35, v37);
    goto LABEL_28;
  }
  v36 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
  *(_QWORD *)(v36 + 24) = v14;
  WdLogEvent5_WdLowResource(v36);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
  if ( v50[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
  if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
  return 3221225495LL;
}
