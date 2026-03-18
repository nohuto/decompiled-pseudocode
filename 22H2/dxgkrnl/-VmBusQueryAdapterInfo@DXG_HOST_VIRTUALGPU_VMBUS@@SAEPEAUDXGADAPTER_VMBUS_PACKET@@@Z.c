/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0383B50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B834 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rdi
  const wchar_t *v5; // r9
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  UINT v8; // r15d
  __int64 v9; // rax
  _DWORD *v10; // rsi
  int v11; // edx
  int v12; // eax
  UINT PrivateDriverDataSize; // r8d
  void *pPrivateDriverData; // rdx
  struct _D3DKMT_QUERYADAPTERINFO v16; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v17[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGPUSHLOCK *v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+78h] [rbp-8h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v18);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v19 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v4 = 4828LL;
    WdLogSingleEntry1(2LL, 4828LL);
    v5 = L"The adapter is already closed by the guest";
LABEL_17:
    v11 = 0x40000;
    goto LABEL_18;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v6 )
  {
    memset(&v16, 0, sizeof(v16));
    v16.Type = *(_DWORD *)(v6 + 24);
    v7 = *(unsigned int *)(v6 + 28);
    v8 = v7 + 4;
    if ( !(_DWORD)v7 )
    {
      v4 = 4864LL;
      WdLogSingleEntry1(2LL, 4864LL);
      v5 = L"Invalid OutputBufferSize for DXGKVMB_COMMAND_QUERYADAPTERINFO, size is zero";
      goto LABEL_17;
    }
    if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 32 < v7 || (unsigned int)v7 > 0x20000 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid OutputBufferSize",
        *(unsigned int *)(v6 + 28),
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_19;
    }
    v16.PrivateDriverDataSize = *(_DWORD *)(v6 + 28);
    v9 = operator new[](v8, 0x4B677844u, 64LL);
    v10 = (_DWORD *)v9;
    if ( !v9 )
    {
      v4 = 4852LL;
      WdLogSingleEntry1(6LL, 4852LL);
      v5 = L"Failed to allocate pPrivateDriverDate";
      v11 = 262145;
LABEL_18:
      DxgkLogInternalTriageEvent(0LL, v11, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_19;
    }
    v16.pPrivateDriverData = (void *)(v9 + 4);
    memmove((void *)(v9 + 4), (const void *)(v6 + 32), *(unsigned int *)(v6 + 28));
    v12 = DxgkQueryAdapterInfoImpl(&v16, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL));
    if ( *((_DWORD *)a1 + 38) < 0x27u )
    {
      if ( v12 < 0 )
      {
LABEL_14:
        operator delete(v10);
        goto LABEL_19;
      }
      PrivateDriverDataSize = v16.PrivateDriverDataSize;
      pPrivateDriverData = v16.pPrivateDriverData;
    }
    else
    {
      *v10 = v12;
      PrivateDriverDataSize = v8;
      pPrivateDriverData = v10;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), pPrivateDriverData, PrivateDriverDataSize);
    v3 = 1;
    goto LABEL_14;
  }
LABEL_19:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v17);
  return v3;
}
