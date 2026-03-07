__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  int v6; // esi
  __int64 v7; // xmm1_8
  __int64 v8; // rdx
  __int128 *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int128 *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  unsigned int v34[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+70h] [rbp-90h]
  __int128 v37; // [rsp+180h] [rbp+80h] BYREF
  __int64 v38; // [rsp+190h] [rbp+90h]

  v2 = 0;
  v36 = 0;
  v35 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v35, this, 0x18u, 0LL, 0LL, 0LL);
  v5 = v35;
  if ( !(_QWORD)v35 )
  {
    v2 = -1073741801;
    goto LABEL_19;
  }
  *(_BYTE *)(v35 + 12) = 0;
  *(_DWORD *)(v5 + 12) &= 0x1FFu;
  *(_QWORD *)v5 = 0LL;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 36LL;
  v34[0] = 712;
  v6 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v35, &v37, v34);
  if ( v6 < 0 )
  {
LABEL_18:
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
    goto LABEL_19;
  }
  v6 = -1073741823;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) <= 0x10u )
  {
    if ( v34[0] >= 0x18 )
    {
      v7 = v38;
      *(_OWORD *)a2 = v37;
      *((_QWORD *)a2 + 2) = v7;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x22u )
  {
    if ( v34[0] < 0x2C8 )
      goto LABEL_18;
    v20 = 5LL;
    v21 = &v37;
    do
    {
      v22 = v21[1];
      *(_OWORD *)a2 = *v21;
      v23 = v21[2];
      *((_OWORD *)a2 + 1) = v22;
      v24 = v21[3];
      *((_OWORD *)a2 + 2) = v23;
      v25 = v21[4];
      *((_OWORD *)a2 + 3) = v24;
      v26 = v21[5];
      *((_OWORD *)a2 + 4) = v25;
      v27 = v21[6];
      *((_OWORD *)a2 + 5) = v26;
      v28 = v21[7];
      v21 += 8;
      *((_OWORD *)a2 + 6) = v27;
      a2 = (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)((char *)a2 + 128);
      *((_OWORD *)a2 - 1) = v28;
      --v20;
    }
    while ( v20 );
    v29 = v21[1];
    *(_OWORD *)a2 = *v21;
    v30 = v21[2];
    *((_OWORD *)a2 + 1) = v29;
    v31 = v21[3];
    v32 = *((_QWORD *)v21 + 8);
    *((_OWORD *)a2 + 2) = v30;
    *((_OWORD *)a2 + 3) = v31;
    *((_QWORD *)a2 + 8) = v32;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) >= 0x21u && (BYTE12(v37) & 0x20) != 0 )
      *((_BYTE *)this + 80) = 1;
  }
  else
  {
    if ( v34[0] < 0x2C0 )
      goto LABEL_18;
    v8 = 5LL;
    v9 = &v37;
    do
    {
      v10 = v9[1];
      *(_OWORD *)a2 = *v9;
      v11 = v9[2];
      *((_OWORD *)a2 + 1) = v10;
      v12 = v9[3];
      *((_OWORD *)a2 + 2) = v11;
      v13 = v9[4];
      *((_OWORD *)a2 + 3) = v12;
      v14 = v9[5];
      *((_OWORD *)a2 + 4) = v13;
      v15 = v9[6];
      *((_OWORD *)a2 + 5) = v14;
      v16 = v9[7];
      v9 += 8;
      *((_OWORD *)a2 + 6) = v15;
      a2 = (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)((char *)a2 + 128);
      *((_OWORD *)a2 - 1) = v16;
      --v8;
    }
    while ( v8 );
    v17 = v9[1];
    *(_OWORD *)a2 = *v9;
    v18 = v9[2];
    *((_OWORD *)a2 + 1) = v17;
    v19 = v9[3];
    *((_OWORD *)a2 + 2) = v18;
    *((_OWORD *)a2 + 3) = v19;
  }
LABEL_19:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v35);
  return v2;
}
