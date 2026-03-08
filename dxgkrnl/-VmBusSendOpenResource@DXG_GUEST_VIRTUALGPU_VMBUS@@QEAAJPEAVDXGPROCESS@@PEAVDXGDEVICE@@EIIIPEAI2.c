/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C038763C
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0184E44 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C01CA6CC (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int *v9; // rbx
  __int64 v14; // rdi
  int v15; // edi
  unsigned int *v16; // rax
  unsigned int *v17; // rsi
  __int64 v18; // rdx
  unsigned int v20[4]; // [rsp+50h] [rbp-178h] BYREF
  __int128 v21; // [rsp+60h] [rbp-168h] BYREF
  int v22; // [rsp+70h] [rbp-158h]

  v9 = a9;
  v22 = 0;
  v21 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v21, this, 0x30u, 0LL, 0LL, 0LL);
  v14 = v21;
  if ( !(_QWORD)v21 )
    goto LABEL_5;
  *(_DWORD *)(v14 + 8) = DXGPROCESS::GetHostProcess(a2);
  *(_BYTE *)(v14 + 12) = 0;
  *(_DWORD *)(v14 + 12) &= 0x1FFu;
  *(_QWORD *)v14 = 0LL;
  *(_QWORD *)(v14 + 16) = 32LL;
  *(_DWORD *)(v14 + 24) = *((_DWORD *)a3 + 118);
  *(_DWORD *)(v14 + 32) = a5;
  *(_DWORD *)(v14 + 40) = a7;
  *(_BYTE *)(v14 + 28) = a4;
  *(_DWORD *)(v14 + 36) = a6;
  if ( a6 >= 0x8000 )
  {
    WdLogSingleEntry1(2LL, 10252LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"NumAllocatoins is invalid", 10252LL, 0LL, 0LL, 0LL, 0LL);
    v15 = -1073741811;
    goto LABEL_15;
  }
  v16 = (unsigned int *)operator new[]((4 * a6 + 15) & 0xFFFFFFF8, 0x4B677844u, 64LL);
  v17 = v16;
  if ( !v16 )
  {
LABEL_5:
    v15 = -1073741801;
    goto LABEL_15;
  }
  v20[0] = (4 * a6 + 15) & 0xFFFFFFF8;
  v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v21, v16, v20);
  if ( v15 < 0 || (v15 = -1073741823, v20[0] < ((4 * a6 + 15) & 0xFFFFFFF8)) || (v15 = v17[1], v15 < 0) )
  {
    WdLogSingleEntry1(2LL, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendOpenResource failed: 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    *a8 = *v17;
    if ( a6 )
    {
      v18 = a6;
      do
      {
        *v9 = *(unsigned int *)((char *)v9 + (char *)(v17 + 2) - (char *)a9);
        ++v9;
        --v18;
      }
      while ( v18 );
    }
  }
  operator delete(v17);
LABEL_15:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v21);
  return (unsigned int)v15;
}
