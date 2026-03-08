/*
 * XREFs of ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03599A0
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1C03596D0 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C035B1D0 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C035B6E0 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z @ 0x1C0058EE0 (-QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z.c)
 *     McTemplateK0pxqqxxxdx_EtwWriteTransfer @ 0x1C0059730 (McTemplateK0pxqqxxxdx_EtwWriteTransfer.c)
 *     ?Add@CumulativeStats@@QEAAXN@Z @ 0x1C0087FB8 (-Add@CumulativeStats@@QEAAXN@Z.c)
 *     ?Add@RollingStats@@QEAAXN@Z @ 0x1C0087FFC (-Add@RollingStats@@QEAAXN@Z.c)
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1C0088024 (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ @ 0x1C0088128 (-GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ.c)
 *     DxgkLock2Internal @ 0x1C019DDA0 (DxgkLock2Internal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkUnlock2Internal @ 0x1C031DED8 (DxgkUnlock2Internal.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r15
  unsigned __int64 *pData; // rsi
  unsigned int v10; // r12d
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  unsigned int *v13; // rbx
  unsigned __int64 v14; // rax
  struct DXGPROCESS *Current; // rax
  int v16; // eax
  __int64 v17; // rcx
  double v18; // xmm0_8
  __int64 v19; // rcx
  double v20; // xmm1_8
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  double v26; // xmm0_8
  __int64 v27; // rax
  double v28; // xmm6_8
  double v29; // xmm2_8
  double v30; // xmm1_8
  double v31; // xmm7_8
  int CurrentEffectivePowerLevel; // eax
  __int64 v33; // r8
  const EVENT_DESCRIPTOR *v34; // rdx
  __int64 v35; // rcx
  struct DXGPROCESS *v36; // rax
  __int64 v37; // [rsp+30h] [rbp-A9h]
  __int64 v38; // [rsp+38h] [rbp-A1h]
  __int64 v39; // [rsp+58h] [rbp-81h]
  __int64 v40; // [rsp+60h] [rbp-79h]
  struct _D3DKMT_UNLOCK2 v41; // [rsp+68h] [rbp-71h] BYREF
  struct _D3DKMT_LOCK2 v42; // [rsp+70h] [rbp-69h] BYREF
  char v43[8]; // [rsp+88h] [rbp-51h] BYREF
  DXGPUSHLOCK *v44; // [rsp+90h] [rbp-49h]
  int v45; // [rsp+98h] [rbp-41h]
  unsigned __int64 v46; // [rsp+138h] [rbp+5Fh] BYREF
  struct COREDEVICEACCESS *v47; // [rsp+148h] [rbp+6Fh]
  unsigned __int64 v48; // [rsp+150h] [rbp+77h]

  v48 = a4;
  v47 = a3;
  LODWORD(v5) = 0;
  if ( !*((_QWORD *)this + 39) )
    return 0LL;
  v41 = 0LL;
  memset(&v42, 0, sizeof(v42));
  if ( a4 < *((_QWORD *)this + 12) )
    return (unsigned int)v5;
  pData = a5;
  v10 = 0;
  v11 = -1LL;
  LODWORD(v47) = 0;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43, (struct _KTHREAD **)this + 5, 0);
      DXGPUSHLOCK::AcquireExclusive(v44);
      v45 = 2;
      v13 = (unsigned int *)(*((_QWORD *)this + 4) + 136LL * v10);
      if ( !*((_BYTE *)v13 + 32) || *((_BYTE *)v13 + 104) )
        goto LABEL_41;
      v14 = *((_QWORD *)v13 + 2);
      if ( v14 > v48 )
      {
        v11 = *((_QWORD *)this + 12);
        if ( v11 >= v14 )
          v11 = *((_QWORD *)v13 + 2);
        goto LABEL_41;
      }
      if ( !pData )
      {
        v42.hDevice = *((_DWORD *)a2 + 117);
        v42.hAllocation = *((_DWORD *)this + 21);
        Current = DXGPROCESS::GetCurrent(v12);
        v16 = DxgkLock2Internal(a2, *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL), (__int64)Current, &v42);
        v5 = v16;
        if ( v16 < 0 )
        {
          WdLogSingleEntry3(2LL, this, v16, 1484LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"TrackedWorkload 0x%I64x: Unable to lock query result buffer, returning 0x%I64x",
            (__int64)this,
            v5,
            1484LL,
            0LL,
            0LL);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
          return (unsigned int)v5;
        }
        pData = (unsigned __int64 *)v42.pData;
      }
      v17 = pData[v13[2]] - pData[*v13];
      v18 = v17 < 0
          ? (double)(int)(v17 & 1 | ((unsigned __int64)v17 >> 1))
          + (double)(int)(v17 & 1 | ((unsigned __int64)v17 >> 1))
          : (double)(int)v17;
      v19 = *((_QWORD *)this + 39);
      if ( v19 < 0 )
      {
        v21 = *((_QWORD *)this + 39) & 1LL | (*((_QWORD *)this + 39) >> 1);
        v20 = (double)(int)v21 + (double)(int)v21;
      }
      else
      {
        v20 = (double)(int)v19;
      }
      *(double *)(*((_QWORD *)v13 + 16) + 16LL) = v18 / v20 * 1000.0 + *(double *)(*((_QWORD *)v13 + 16) + 16LL);
      if ( !*((_BYTE *)v13 + 12) )
        break;
LABEL_40:
      *(_BYTE *)(*v13 + *((_QWORD *)this + 11)) = 0;
      *(_BYTE *)(v13[2] + *((_QWORD *)this + 11)) = 0;
      *((_BYTE *)v13 + 32) = 0;
LABEL_41:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
      LODWORD(v47) = ++v10;
      if ( v10 >= *((_DWORD *)this + 26) )
        goto LABEL_42;
    }
    v22 = *((_QWORD *)v13 + 6);
    v23 = *((_QWORD *)v13 + 5);
    v46 = 0LL;
    if ( !DXGTRACKEDWORKLOAD::QPCFromGPUTimestamp(this, v23, v22, pData[v13[2]], &v46) )
    {
LABEL_39:
      **((_BYTE **)v13 + 16) = 0;
      goto LABEL_40;
    }
    v24 = *((_QWORD *)v13 + 3) - v46;
    v25 = *((_QWORD *)this + 40);
    if ( v25 < 0 )
    {
      v27 = *((_QWORD *)this + 40) & 1LL | (*((_QWORD *)this + 40) >> 1);
      v26 = (double)(int)v27 + (double)(int)v27;
    }
    else
    {
      v26 = (double)(int)v25;
    }
    v28 = (double)(int)v24 / v26 * 1000.0;
    if ( *((_BYTE *)v13 + 120) )
    {
      *((_QWORD *)this + 38) += v24 >> 63;
      CumulativeStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 192), v28);
    }
    RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 120), *(double *)(*((_QWORD *)v13 + 16) + 16LL));
    v29 = DOUBLE_300_0;
    v30 = *(double *)(*((_QWORD *)v13 + 16) + 16LL);
    if ( v30 + v28 > 0.0 )
      v29 = v30 * 100.0 / (v30 + v28);
    v31 = fmin(300.0, fmax(5.0, v29));
    RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 232), v31);
    if ( bTracingEnabled )
    {
      KeQueryPerformanceCounter(0LL);
      if ( v28 >= 0.0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        {
          CurrentEffectivePowerLevel = TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
          v40 = *((_QWORD *)this + 38);
          LODWORD(v39) = (int)v28;
          v34 = (const EVENT_DESCRIPTOR *)&TrackedWorkloadDeadline;
          goto LABEL_35;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        CurrentEffectivePowerLevel = TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
        v40 = *((_QWORD *)this + 38);
        LODWORD(v39) = (int)v28;
        v34 = (const EVENT_DESCRIPTOR *)&TrackedWorkloadDeadlineMissed;
LABEL_35:
        LODWORD(v38) = (int)v31;
        LODWORD(v37) = CurrentEffectivePowerLevel;
        McTemplateK0pxqqxxxdx_EtwWriteTransfer(
          *((_QWORD *)v13 + 14),
          v34,
          v33,
          this,
          v33,
          v37,
          v38,
          *((_QWORD *)v13 + 14),
          *((_QWORD *)v13 + 3),
          v46,
          v39,
          v40,
          v41,
          *(_OWORD *)&v42.hDevice);
      }
    }
    if ( v28 < 0.0 )
      TrackedWorkloadMonitor::Boost(
        (DXGTRACKEDWORKLOAD *)((char *)this + 328),
        (DXGTRACKEDWORKLOAD *)((char *)this + 232));
    v10 = (unsigned int)v47;
    goto LABEL_39;
  }
LABEL_42:
  if ( !pData
    || (v35 = *((unsigned int *)this + 21), !(_DWORD)v35)
    || (v41.hDevice = *((_DWORD *)a2 + 117),
        v41.hAllocation = v35,
        v36 = DXGPROCESS::GetCurrent(v35),
        LODWORD(v5) = DxgkUnlock2Internal(a2, *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL), (__int64)v36, &v41),
        (int)v5 >= 0) )
  {
    if ( v11 != -1LL )
      *((_QWORD *)this + 12) = v11;
  }
  return (unsigned int)v5;
}
