/*
 * XREFs of ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C03884DC
 * Callers:
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CA274 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a3)
{
  __int64 v6; // rbx
  int v7; // ebx
  int HostProcess; // eax
  __int128 v9; // xmm0
  UINT32 v10; // eax
  ULONGLONG v11; // xmm1_8
  unsigned int v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+160h] [rbp+60h] BYREF
  __int128 v17; // [rsp+164h] [rbp+64h]
  ULONGLONG v18; // [rsp+174h] [rbp+74h]
  UINT32 v19; // [rsp+17Ch] [rbp+7Ch]

  v15 = 0;
  v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v14, this, 0x40u, 0LL, 0LL, 0LL);
  v6 = v14;
  if ( (_QWORD)v14 )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_QWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 20) = 0;
    *(_BYTE *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    *(_DWORD *)(v6 + 8) = HostProcess;
    *(_DWORD *)(v6 + 16) = 62;
    v9 = *(_OWORD *)&a3->hAdapter;
    v13[0] = 32;
    *(_OWORD *)(v6 + 24) = v9;
    *(_OWORD *)(v6 + 40) = *(_OWORD *)((char *)&a3->ClockData.GpuFrequency + 4);
    *(_QWORD *)(v6 + 56) = *(ULONGLONG *)((char *)&a3->ClockData.CpuClockCounter + 4);
    v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v14, &v16, v13);
    if ( v7 >= 0 )
    {
      if ( v13[0] >= 0x20 )
      {
        v10 = v19;
        v11 = v18;
        v7 = v16;
        *(_OWORD *)&a3->ClockData.GpuFrequency = v17;
        a3->ClockData.CpuClockCounter = v11;
        a3->ClockData.Flags.Value = v10;
      }
      else
      {
        v7 = -1073741811;
      }
    }
  }
  else
  {
    v7 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v14);
  return (unsigned int)v7;
}
