__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiGetNodeMetadata(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        struct _DXGK_NODEMETADATA *a3)
{
  __int64 v6; // rax
  int v7; // edi
  __int128 v8; // xmm1
  __int16 v9; // ax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned int v13[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+70h] [rbp-90h]
  _OWORD v16[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v17; // [rsp+1C0h] [rbp+C0h]
  __int16 v18; // [rsp+1C8h] [rbp+C8h]
  int v19; // [rsp+1CCh] [rbp+CCh]

  v15 = 0;
  v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v14, this, 0x20u, 0LL, 0LL, 0LL);
  v6 = v14;
  if ( (_QWORD)v14 )
  {
    *(_QWORD *)v14 = 0LL;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 20) = 0;
    *(_BYTE *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    *(_DWORD *)(v6 + 16) = 44;
    *(_DWORD *)(v6 + 24) = a2;
    v13[0] = 80;
    v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v14, v16, v13);
    if ( v7 < 0 || (v7 = -1073741823, v13[0] < 0x50) || (v7 = v19, v19 < 0) )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendDdiGetNodeMetadata failed: 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v8 = v16[1];
      v9 = v18;
      *(_OWORD *)&a3->EngineType = v16[0];
      v10 = v16[2];
      *(_OWORD *)&a3->FriendlyName[6] = v8;
      v11 = v16[3];
      *(_OWORD *)&a3->FriendlyName[14] = v10;
      *(_QWORD *)&v10 = v17;
      *(_OWORD *)&a3->FriendlyName[22] = v11;
      *(_QWORD *)&a3->FriendlyName[30] = v10;
      *(_WORD *)&a3->GpuMmuSupported = v9;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v14);
  return (unsigned int)v7;
}
