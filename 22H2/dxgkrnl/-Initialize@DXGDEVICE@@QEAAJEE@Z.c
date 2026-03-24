/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0137FB4
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C01384D0 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0009188 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq_EtwWriteTransfer @ 0x1C0043744 (McTemplateK0ppqpttq_EtwWriteTransfer.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C012C504 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0137E1C (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x1C0247A8C (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  int v4; // esi
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD **Current; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r8d
  struct _ERESOURCE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  struct _KEVENT *v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 result; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  ADAPTER_RENDER *v35; // r8
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned int v42; // r8d
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  UINT v56; // ecx
  int v57; // eax
  signed __int64 v58; // rax
  signed __int64 v59; // rdi
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _DWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int HostProcess; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned int Device; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned int v76; // [rsp+50h] [rbp-11h]
  __int128 v77; // [rsp+58h] [rbp-9h] BYREF
  __int64 v78; // [rsp+68h] [rbp+7h]
  _BYTE v79[24]; // [rsp+70h] [rbp+Fh] BYREF
  _DXGKARG_CREATEDEVICE v80; // [rsp+88h] [rbp+27h] BYREF

  v4 = a3;
  if ( DXGADAPTER::IsComputeOnlyAdapter(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v57 = *(_DWORD *)(v7 + 2060);
    if ( (v57 & 0x80u) == 0 && (v57 & 0x40) == 0 )
    {
      v7 = *((_QWORD *)this + 5);
      v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 176), v7, 0LL);
      v59 = v58;
      if ( v58 && *((_QWORD *)this + 5) != v58 )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8);
        v60[3] = this;
        v60[5] = -1071775744LL;
        v60[4] = v59;
        WdLogEvent5_WdWarning(v60);
        return 3223191552LL;
      }
      *((_BYTE *)this + 1869) |= 4u;
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL), 1u);
    }
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v79, Current);
  v11 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 240LL), (__int64)this, 3, 0, 0);
  *((_DWORD *)this + 109) = v11;
  v14 = v11;
  if ( !v11 )
  {
    v61 = WdLogNewEntry5_WdWarning(v12, 0LL, v13);
    *(_QWORD *)(v61 + 24) = this;
    *(_QWORD *)(v61 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v61);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v79);
    return 3221225495LL;
  }
  v15 = *((_QWORD *)this + 5);
  v16 = (v11 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 < *(_DWORD *)(v15 + 256) )
  {
    v17 = *(_QWORD *)(v15 + 240);
    v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
    if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
      *(_DWORD *)(v17 + 16 * (((unsigned __int64)v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v79);
  v19 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 17) = v19;
  if ( !v19 )
  {
LABEL_53:
    v63 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v63 + 24) = this;
    *(_QWORD *)(v63 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v63);
    return 3221225495LL;
  }
  v23 = ExInitializeResourceLite(v19);
  v27 = v23;
  if ( v23 < 0 )
    goto LABEL_54;
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    v28 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    *((_QWORD *)this + 235) = v28;
    if ( v28 )
    {
      KeInitializeEvent(v28, NotificationEvent, 1u);
      v29 = (_QWORD *)*((_QWORD *)this + 2);
      memset(&v80.8, 0, 24);
      v80.hDevice = this;
      if ( (*(_DWORD *)(v29[2] + 2056LL) & 1) != 0 )
      {
        if ( (*((_BYTE *)this + 1869) & 8) != 0 )
          v80.Flags.Value |= 2u;
      }
      else
      {
        v80.pInfo = (DXGK_DEVICEINFO *)((char *)this + 592);
      }
      if ( (*(_DWORD *)(v29[2] + 348LL) & 0x10) != 0 )
      {
        v56 = v80.Flags.Value & 0x7FFFFFFF | (v4 << 31);
        LOBYTE(v4) = 1;
        v80.Flags.Value = v56;
      }
      *((_BYTE *)this + 1865) = a2;
      *((_BYTE *)this + 1866) = v4;
      v30 = (*(__int64 (__fastcall **)(_QWORD, DXGDEVICE *))(*(_QWORD *)(v29[80] + 8LL) + 392LL))(v29[81], this);
      *((_QWORD *)this + 95) = v30;
      v20 = v30;
      if ( v30 )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                    + 400LL))(v30);
        if ( (int)result < 0 )
          return result;
        LODWORD(v27) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
        if ( (int)v27 < 0 )
          goto LABEL_55;
        v35 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        *((_BYTE *)this + 1870) = 1;
        v36 = *((_QWORD *)v35 + 2);
        if ( (*(_DWORD *)(v36 + 2060) & 0x80u) != 0 )
        {
          v80.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)
                                              + 8LL * *(unsigned int *)(v36 + 232))
                                  + 8LL);
          v36 = *((_QWORD *)v35 + 2);
        }
        if ( (*(_DWORD *)(v36 + 2060) & 0x40) != 0 )
        {
          v54 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) + 8LL * *(unsigned int *)(v36 + 232));
          if ( v54 )
            v54 = (_QWORD *)v54[2];
          v80.hKmdProcess = v54;
        }
        LODWORD(v27) = ADAPTER_RENDER::DdiCreateDevice(v35, &v80, (__int64)v35);
        if ( (int)v27 < 0 )
        {
LABEL_55:
          v64 = WdLogNewEntry5_WdWarning(v33, v32, v34);
          *(_QWORD *)(v64 + 24) = this;
          goto LABEL_56;
        }
        v37 = 0;
        v38 = *((_DWORD *)this + 108);
        *((_QWORD *)this + 73) = v80.hDevice;
        v39 = _mm_cvtsi128_si32((__m128i)0LL);
        v77 = 0LL;
        if ( v38 == 2 )
          v37 = 8;
        v40 = v39 & 0xFFFFFFF1 | v37;
        v41 = 0;
        if ( v38 == 1 )
          v41 = 32;
        v42 = v41 | v40 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (v4 & 1))));
        v78 = *((_QWORD *)this + 56);
        v43 = *((_QWORD *)this + 2);
        LODWORD(v77) = v42;
        v44 = (*(__int64 (__fastcall **)(DXGDEVICE *, __int128 *, char *))(*(_QWORD *)(*(_QWORD *)(v43 + 616) + 8LL)
                                                                         + 112LL))(
                this,
                &v77,
                (char *)this + 768);
        v27 = v44;
        if ( v44 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 1088LL))(
            *((_QWORD *)this + 95),
            *((_QWORD *)this + 96));
          goto LABEL_30;
        }
LABEL_54:
        v64 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v64 + 24) = this;
        *(_QWORD *)(v64 + 32) = v27;
LABEL_56:
        WdLogEvent5_WdWarning(v64);
        return (unsigned int)v27;
      }
    }
    goto LABEL_53;
  }
  v65 = operator new(0x14uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  *((_QWORD *)this + 56) = v65;
  if ( !v65 )
  {
    v62 = WdLogNewEntry5_WdLowResource(v67, v66, v68, v69);
    *(_QWORD *)(v62 + 24) = 1046LL;
    WdLogEvent5_WdLowResource(v62);
    return 3221225495LL;
  }
  *(_QWORD *)v65 = 0LL;
  v65[2] = 4;
  v65[3] = 1;
  *(_DWORD *)(*((_QWORD *)this + 56) + 16LL) = 0;
  HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
  if ( !HostProcess )
  {
    v72 = WdLogNewEntry5_WdError(v71, 0LL);
    *(_QWORD *)(v72 + 24) = -1073741823LL;
LABEL_60:
    WdLogEvent5_WdError(v72);
    return 3221225473LL;
  }
  Device = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4240LL),
             HostProcess,
             *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 456),
             *((_DWORD *)this + 108) == 2,
             *((PSLIST_ENTRY *)this + 56));
  *((_DWORD *)this + 110) = Device;
  if ( !Device )
  {
    v72 = WdLogNewEntry5_WdError(v75, v74);
    *(_QWORD *)(v72 + 24) = 1067LL;
    goto LABEL_60;
  }
LABEL_30:
  v45 = *((_QWORD *)this + 5);
  v46 = *((unsigned int *)this + 109);
  *((_DWORD *)this + 144) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v45 + 208));
  v47 = ((unsigned int)v46 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v47 < *(_DWORD *)(v45 + 256) )
  {
    v48 = *(_QWORD *)(v45 + 240);
    v49 = ((unsigned int)v46 >> 25) & 0x60;
    if ( (((unsigned int)v46 >> 25) & 0x60) == (*(_BYTE *)(v48 + 16 * v47 + 8) & 0x60)
      && (*(_DWORD *)(v48 + 16 * v47 + 8) & 0x1F) != 0 )
    {
      v50 = 2 * ((v46 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v48 + 8 * v50 + 8) & 0x2000) == 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v49, v48);
        *(_QWORD *)(v55 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v55);
        v48 = *(_QWORD *)(v45 + 240);
      }
      *(_DWORD *)(v48 + 8 * v50 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v45 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v45 + 208, 0LL);
  KeLeaveCriticalRegion();
  v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51);
  v53[3] = this;
  v53[4] = *((unsigned int *)this + 109);
  v53[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v53);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v76 = *((_DWORD *)this + 109);
      McTemplateK0ppqpttq_EtwWriteTransfer(
        *((unsigned __int8 *)this + 1866),
        &EventCreateDevice,
        v76,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 72LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 108),
        this,
        *((unsigned __int8 *)this + 1865),
        *((unsigned __int8 *)this + 1866),
        v76);
    }
  }
  return 0LL;
}
