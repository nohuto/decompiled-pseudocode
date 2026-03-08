/*
 * XREFs of ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C038FABC
 * Callers:
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0389BFC (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C034B4E8 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall VmBusSubmitSignalToHwQueueHelper(
        struct DXGPROCESS *a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned __int64 *a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  unsigned int v11; // edi
  unsigned int v12; // eax
  __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // r11d
  __int64 v20; // r10
  unsigned int v21; // ecx
  DXGSYNCOBJECT *v22; // rcx
  unsigned int HostHandle; // eax
  unsigned int v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // r9
  unsigned int v27; // ecx
  int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 *v30; // rdx
  struct DXGPROCESS *v32; // [rsp+80h] [rbp+8h]

  v32 = a1;
  v11 = 0;
  if ( !a7 || !a6 )
  {
    WdLogSingleEntry1(2LL, 8837LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"MonitoredFenceValueArray or ObjectHandleArray not specified for submit signal to HwQueue",
      8837LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  while ( 1 )
  {
    if ( v11 >= a4 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= a3 )
          return 0LL;
        v17 = a6[v16];
        v18 = (v17 >> 6) & 0xFFFFFF;
        v19 = *((_DWORD *)a1 + 74);
        if ( v18 < v19
          && (v20 = *((_QWORD *)a1 + 35), v21 = *(_DWORD *)(v20 + 16LL * v18 + 8), a6[v16] >> 30 == ((v21 >> 5) & 3))
          && (v21 & 0x2000) == 0
          && (v21 & 0x1F) == 8 )
        {
          v22 = *(DXGSYNCOBJECT **)(v20 + 16LL * v18);
        }
        else
        {
          v22 = 0LL;
        }
        if ( v22 )
        {
          HostHandle = DXGSYNCOBJECT::GetHostHandle(v22, v17);
          goto LABEL_35;
        }
        v24 = (v17 >> 6) & 0xFFFFFF;
        v25 = v17 >> 30;
        if ( v24 >= v19 )
          goto LABEL_32;
        v26 = *((_QWORD *)v32 + 35);
        v27 = *(_DWORD *)(v26 + 16LL * v24 + 8);
        if ( v25 != ((v27 >> 5) & 3) )
          goto LABEL_32;
        if ( (v27 & 0x2000) != 0 )
          goto LABEL_32;
        v28 = v27 & 0x1F;
        if ( !v28 )
          goto LABEL_32;
        if ( v28 != 11 )
          break;
        v29 = *(_QWORD *)(v26 + 16LL * v24);
LABEL_33:
        if ( !v29 )
        {
          WdLogSingleEntry1(2LL, a6[v16]);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid sync object handle 0x%I64x",
            a6[v16],
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        HostHandle = *(_DWORD *)(v29 + 44);
LABEL_35:
        a9[v16] = HostHandle;
        if ( a2 )
        {
          v30 = (unsigned __int64 *)&a7[v16];
          if ( (unsigned __int64)v30 >= MmUserProbeAddress )
            v30 = (unsigned __int64 *)MmUserProbeAddress;
          a10[v16] = *v30;
        }
        else
        {
          a10[v16] = a7[v16];
        }
        v16 = (unsigned int)(v16 + 1);
        a1 = v32;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_32:
      v29 = 0LL;
      goto LABEL_33;
    }
    v12 = (a5[v11] >> 6) & 0xFFFFFF;
    if ( v12 >= *((_DWORD *)a1 + 74) )
      goto LABEL_10;
    v13 = *((_QWORD *)a1 + 35);
    if ( ((a5[v11] >> 25) & 0x60) != (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) )
      goto LABEL_10;
    if ( (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) != 0 )
      goto LABEL_10;
    v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
    if ( !v14 )
      goto LABEL_10;
    if ( v14 != 15 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
      v15 = 0LL;
      goto LABEL_11;
    }
    v15 = *(_QWORD *)(v13 + 16LL * v12);
LABEL_11:
    if ( !v15 )
      break;
    a8[v11++] = *(_DWORD *)(v15 + 28);
    a1 = v32;
  }
  WdLogSingleEntry1(2LL, a5[v11]);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid HwQueue handle: 0x%I64x", a5[v11], 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
