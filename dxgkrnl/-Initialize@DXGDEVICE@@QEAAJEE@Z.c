/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C01B57FC
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B70A8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0009C00 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C000A020 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x1C0048ABC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01A3A50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01A5238 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C01B50C4 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01B6C74 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x1C0382250 (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  int v5; // r15d
  DXGADAPTER *v7; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  struct _ERESOURCE *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rsi
  struct _KEVENT *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int *v24; // rsi
  __int64 v25; // r8
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // r8d
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdi
  UINT v39; // ecx
  __int64 v40; // r14
  __int64 v41; // rsi
  DXGGLOBAL *Global; // rax
  signed __int64 v43; // rax
  __int64 v44; // rax
  unsigned int HostProcess; // edx
  unsigned int Device; // eax
  __int64 v47; // [rsp+30h] [rbp-61h]
  __int64 v48; // [rsp+40h] [rbp-51h]
  __int64 v49; // [rsp+48h] [rbp-49h]
  __int128 v50; // [rsp+78h] [rbp-19h] BYREF
  __int64 v51; // [rsp+88h] [rbp-9h]
  _BYTE v52[24]; // [rsp+90h] [rbp-1h] BYREF
  _DXGKARG_CREATEDEVICE v53; // [rsp+A8h] [rbp+17h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = a3;
  v7 = *(DXGADAPTER **)(v3 + 16);
  if ( (*((_DWORD *)v7 + 698) & 8) != 0
    && (*((_DWORD *)v7 + 571) & 0x80u) == 0
    && !DXGADAPTER::IsGpuVirtualAddressingSupported(v7) )
  {
    v7 = (DXGADAPTER *)*((_QWORD *)this + 5);
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 176), (signed __int64)v7, 0LL);
    if ( v43 && *((_QWORD *)this + 5) != v43 )
    {
      LODWORD(v17) = -1071775744;
      WdLogSingleEntry3(3LL, this, v43, -1071775744LL);
      return (unsigned int)v17;
    }
    *((_BYTE *)this + 1901) |= 4u;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL));
  }
  Current = DXGPROCESS::GetCurrent((__int64)v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v52, Current);
  v9 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 280LL), (__int64)this, 3, 0, 0);
  *((_DWORD *)this + 117) = v9;
  v10 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
    return 3221225495LL;
  }
  v11 = *((_QWORD *)this + 5);
  v12 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 296) )
  {
    v13 = *(_QWORD *)(v11 + 280);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
      && (v14 & 0x2000) == 0
      && (v14 & 0x1F) != 0 )
    {
      *(_DWORD *)(v13 + 16 * ((v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
  v15 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 17) = v15;
  if ( !v15 )
    goto LABEL_54;
  v16 = ExInitializeResourceLite(v15);
  v17 = v16;
  if ( v16 < 0 )
    goto LABEL_57;
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    v44 = operator new[](0x14uLL, 0x4B677844u, 64LL);
    *((_QWORD *)this + 60) = v44;
    if ( v44 )
    {
      *(_QWORD *)v44 = 0LL;
      *(_DWORD *)(v44 + 8) = 4;
      *(_DWORD *)(v44 + 12) = 1;
      *(_DWORD *)(*((_QWORD *)this + 60) + 16LL) = 0;
      HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
      if ( !HostProcess )
      {
        WdLogSingleEntry1(2LL, -1073741823LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get host adapter process, returning 0x%I64x",
          -1073741823LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225473LL;
      }
      Device = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4472LL),
                 HostProcess,
                 *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 488),
                 *((_DWORD *)this + 116) == 2,
                 *((struct CRefCountedBuffer **)this + 60));
      *((_DWORD *)this + 118) = Device;
      if ( !Device )
      {
        WdLogSingleEntry1(2LL, 1074LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to create device on the host",
          1074LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741823LL;
      }
      goto LABEL_30;
    }
    WdLogSingleEntry1(6LL, 1052LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate m_pVidSchErrorCode",
      1052LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v18 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 239) = v18;
  if ( !v18 )
    goto LABEL_54;
  KeInitializeEvent(v18, NotificationEvent, 1u);
  v19 = (_QWORD *)*((_QWORD *)this + 2);
  memset(&v53.8, 0, 24);
  v53.hDevice = this;
  if ( (*(_DWORD *)(v19[2] + 2280LL) & 1) != 0 )
  {
    if ( (*((_BYTE *)this + 1901) & 8) != 0 || (*((_DWORD *)this + 122) & 8) != 0 )
      v53.Flags.Value |= 2u;
  }
  else
  {
    v53.pInfo = (DXGK_DEVICEINFO *)((char *)this + 624);
  }
  if ( (*(_DWORD *)(v19[2] + 436LL) & 0x10) != 0 )
  {
    v39 = v53.Flags.Value & 0x7FFFFFFF | (v5 << 31);
    LOBYTE(v5) = 1;
    v53.Flags.Value = v39;
  }
  *((_BYTE *)this + 1897) = a2;
  *((_BYTE *)this + 1898) = v5;
  v20 = (*(__int64 (__fastcall **)(_QWORD, DXGDEVICE *))(*(_QWORD *)(v19[95] + 8LL) + 384LL))(v19[96], this);
  *((_QWORD *)this + 99) = v20;
  if ( !v20 )
  {
LABEL_54:
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    return 3221225495LL;
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 392LL))(v20);
  if ( (int)result < 0 )
    return result;
  LODWORD(v17) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
  if ( (int)v17 < 0 )
    goto LABEL_50;
  v22 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 1902) = 1;
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_DWORD *)(v23 + 2284) & 0x80u) != 0 )
  {
    v40 = *((_QWORD *)this + 5);
    v41 = *(unsigned int *)(v23 + 240);
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)v41 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      _mm_lfence();
      v53.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(v40 + 48) + 8 * v41) + 24LL);
    }
  }
  v24 = *(unsigned int **)(*((_QWORD *)this + 2) + 16LL);
  if ( DXGADAPTER::IsGpuVirtualAddressingSupported((DXGADAPTER *)v24) )
    v53.hKmdProcess = DXGPROCESS::GetKmdProcessHandle(*((DXGPROCESS **)this + 5), v24[60]);
  LODWORD(v17) = ADAPTER_RENDER::DdiCreateDevice(*((ADAPTER_RENDER **)this + 2), &v53, v25);
  if ( (int)v17 < 0 )
  {
LABEL_50:
    WdLogSingleEntry1(3LL, this);
    return (unsigned int)v17;
  }
  v26 = *((_DWORD *)this + 116);
  v27 = 0;
  *((_QWORD *)this + 77) = v53.hDevice;
  v28 = _mm_cvtsi128_si32((__m128i)0LL);
  v50 = 0LL;
  if ( v26 == 2 )
    v27 = 8;
  v29 = v28 & 0xFFFFFFD1 | v27 & 0xFFFFFFDF;
  v30 = 0;
  if ( v26 == 1 )
    v30 = 32;
  v31 = v30 | v29 | (2 * (a2 & 1 | (2 * (v5 & 1))));
  v51 = *((_QWORD *)this + 60);
  v32 = *((_QWORD *)this + 2);
  LODWORD(v50) = v31;
  v33 = (*(__int64 (__fastcall **)(DXGDEVICE *, __int128 *, char *))(*(_QWORD *)(*(_QWORD *)(v32 + 736) + 8LL) + 112LL))(
          this,
          &v50,
          (char *)this + 800);
  v17 = v33;
  if ( v33 < 0 )
  {
LABEL_57:
    WdLogSingleEntry2(3LL, this, v17);
    return (unsigned int)v17;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 1080LL))(
    *((_QWORD *)this + 99),
    *((_QWORD *)this + 100));
LABEL_30:
  v34 = *((_QWORD *)this + 5);
  v35 = *((unsigned int *)this + 117);
  *((_DWORD *)this + 152) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v34 + 248));
  v36 = ((unsigned int)v35 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v36 < *(_DWORD *)(v34 + 296) )
  {
    v37 = *(_QWORD *)(v34 + 280);
    if ( (((unsigned int)v35 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
      && (*(_DWORD *)(v37 + 16 * v36 + 8) & 0x1F) != 0 )
    {
      v38 = 2 * ((v35 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v37 + 8 * v38 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          217LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v34 + 280) + 8 * v38 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v34 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v34 + 248, 0LL);
  KeLeaveCriticalRegion();
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 117), *((_QWORD *)this + 5));
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      LODWORD(v49) = *((unsigned __int8 *)this + 1898);
      LODWORD(v48) = *((unsigned __int8 *)this + 1897);
      LODWORD(v47) = *((_DWORD *)this + 116);
      McTemplateK0ppqpttqpqp_EtwWriteTransfer(
        *((unsigned __int8 *)this + 1898),
        &EventCreateDevice,
        *((_QWORD *)this + 14),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        v47,
        this,
        v48,
        v49,
        *((_DWORD *)this + 117),
        *((_QWORD *)this + 5),
        *((_DWORD *)this + 118),
        *((_QWORD *)this + 14));
    }
  }
  return 0LL;
}
