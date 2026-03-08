/*
 * XREFs of ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x1C0388710
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1C02CF990 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005B244 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C03715E8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C038B3B0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct _D3DKMT_QUERYSTATISTICS *a2,
        struct DXGPROCESS *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  _OWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  struct _D3DKMT_QUERYSTATISTICS *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD *v15; // rcx
  char *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  unsigned int v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+160h] [rbp+60h] BYREF
  char v29; // [rsp+168h] [rbp+68h] BYREF

  v27 = 0;
  v26 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v26, this, 0x340u, 0LL, 0LL, 0LL);
  v6 = v26;
  if ( (_QWORD)v26 )
  {
    v8 = *((_DWORD *)a3 + 126);
    v9 = (_OWORD *)(v26 + 24);
    *(_QWORD *)v26 = 0LL;
    v10 = 6LL;
    *(_BYTE *)(v6 + 12) = 0;
    v11 = 6LL;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    *(_DWORD *)(v6 + 20) = 0;
    *(_DWORD *)(v6 + 8) = v8;
    *(_DWORD *)(v6 + 16) = 48;
    v12 = a2;
    do
    {
      *v9 = *(_OWORD *)v12;
      v9[1] = *((_OWORD *)v12 + 1);
      v9[2] = *((_OWORD *)v12 + 2);
      v9[3] = *((_OWORD *)v12 + 3);
      v9[4] = *((_OWORD *)v12 + 4);
      v9[5] = *((_OWORD *)v12 + 5);
      v9[6] = *((_OWORD *)v12 + 6);
      v9 += 8;
      v13 = *((_OWORD *)v12 + 7);
      v12 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)v12 + 128);
      *(v9 - 1) = v13;
      --v11;
    }
    while ( v11 );
    v14 = *(_OWORD *)v12;
    v25[0] = 784;
    *v9 = v14;
    v9[1] = *((_OWORD *)v12 + 1);
    *((_QWORD *)v9 + 4) = *((_QWORD *)v12 + 4);
    *(_QWORD *)(v6 + 40) = 0LL;
    v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v26, &v28, v25);
    if ( v7 < 0 || (v7 = -1073741823, v25[0] < 0x310) || (v7 = v28, v28 < 0) )
    {
      WdLogSingleEntry1(3LL, v7);
    }
    else
    {
      v15 = (_OWORD *)((char *)a2 + 24);
      v16 = &v29;
      do
      {
        v17 = *((_OWORD *)v16 + 1);
        *v15 = *(_OWORD *)v16;
        v18 = *((_OWORD *)v16 + 2);
        v15[1] = v17;
        v19 = *((_OWORD *)v16 + 3);
        v15[2] = v18;
        v20 = *((_OWORD *)v16 + 4);
        v15[3] = v19;
        v21 = *((_OWORD *)v16 + 5);
        v15[4] = v20;
        v22 = *((_OWORD *)v16 + 6);
        v15[5] = v21;
        v23 = *((_OWORD *)v16 + 7);
        v16 += 128;
        v15[6] = v22;
        v15 += 8;
        *(v15 - 1) = v23;
        --v10;
      }
      while ( v10 );
      *(_QWORD *)v15 = *(_QWORD *)v16;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v26);
  return (unsigned int)v7;
}
