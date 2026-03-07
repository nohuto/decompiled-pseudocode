__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateSyncObject(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        int a3,
        __int128 *a4,
        int a5,
        _OWORD *a6)
{
  unsigned int v6; // ebx
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  bool v14; // zf
  __int128 v15; // xmm1
  unsigned int v17[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+70h] [rbp-90h]
  _OWORD v20[2]; // [rsp+180h] [rbp+80h] BYREF

  v6 = 0;
  v19 = 0;
  v18 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v18, a1, 0x80u, 0LL, 0LL, 0LL);
  v11 = v18;
  if ( (_QWORD)v18 )
  {
    *(_BYTE *)(v18 + 12) = 0;
    *(_DWORD *)(v11 + 12) &= 0x1FFu;
    *(_QWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 8) = a2;
    *(_QWORD *)(v11 + 16) = 8LL;
    v12 = *a4;
    v17[0] = 32;
    *(_OWORD *)(v11 + 24) = v12;
    *(_OWORD *)(v11 + 40) = a4[1];
    *(_OWORD *)(v11 + 56) = a4[2];
    *(_OWORD *)(v11 + 72) = a4[3];
    *(_OWORD *)(v11 + 88) = a4[4];
    v13 = a4[5];
    *(_DWORD *)(v11 + 120) = a5;
    *(_OWORD *)(v11 + 104) = v13;
    *(_DWORD *)(v11 + 24) = a3;
    if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(a1, (struct DXGVMBUSMESSAGE *)&v18, v20, v17) < 0
      || v17[0] < 0x20
      || (!a3 ? (v14 = DWORD1(v20[0]) == 0) : (v14 = LODWORD(v20[0]) == 0), v14) )
    {
      WdLogSingleEntry1(2LL, -1073741823LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateSyncObject failed: 0x%I64x",
        -1073741823LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v6 = -1073741823;
    }
    else
    {
      v15 = v20[1];
      *a6 = v20[0];
      a6[1] = v15;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v18);
  return v6;
}
