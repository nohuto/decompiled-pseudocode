__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo19h1(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1 *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // xmm1_8
  unsigned int v9[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v10; // [rsp+60h] [rbp-A0h] BYREF
  int v11; // [rsp+70h] [rbp-90h]
  __int128 v12; // [rsp+180h] [rbp+80h] BYREF
  __int64 v13; // [rsp+190h] [rbp+90h]

  v2 = 0;
  v11 = 0;
  v10 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v10, this, 0x18u, 0LL, 0LL, 0LL);
  v5 = v10;
  v9[0] = 24;
  *(_BYTE *)(v10 + 12) = 0;
  *(_DWORD *)(v5 + 12) &= 0x1FFu;
  *(_QWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 36LL;
  v6 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v10, &v12, v9);
  if ( v6 < 0 || (v6 = -1073741823, v9[0] < 0x18) )
  {
    WdLogSingleEntry1(2LL, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendGetInternalAdapterInfo failed: 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    v2 = v6;
  }
  else
  {
    v7 = v13;
    *(_OWORD *)a2 = v12;
    *((_QWORD *)a2 + 2) = v7;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v10);
  return v2;
}
