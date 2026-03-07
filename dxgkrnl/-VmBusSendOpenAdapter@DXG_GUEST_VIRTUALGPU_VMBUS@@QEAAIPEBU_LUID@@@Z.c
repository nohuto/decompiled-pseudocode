__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct _LUID *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned int v12; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v13[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v14; // [rsp+78h] [rbp-90h]
  unsigned int v15; // [rsp+188h] [rbp+80h] BYREF
  int v16; // [rsp+18Ch] [rbp+84h]
  unsigned int v17; // [rsp+190h] [rbp+88h]

  v2 = 0;
  v14 = 0;
  *(_OWORD *)&v13[1] = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v13[1], this, 0x28u, 0LL, 0LL, 0LL);
  v5 = v13[1];
  if ( v13[1] )
  {
    *(_BYTE *)(v13[1] + 12LL) = 0;
    *(_DWORD *)(v5 + 12) &= 0x1FFu;
    *(_QWORD *)v5 = 0LL;
    *(_DWORD *)(v5 + 8) = 0;
    v9 = 16;
    *(_DWORD *)(v5 + 28) = 16;
    v10 = 16;
    *(_QWORD *)(v5 + 16) = 14LL;
    *(_DWORD *)(v5 + 24) = 42;
    *(struct _LUID *)(v5 + 32) = *a2;
    v11 = v13[1];
    v12 = 16;
    v6 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v13[1], &v15, &v12);
    if ( v6 >= 0 )
    {
      if ( v12 < 0x10 )
      {
        *(_DWORD *)(v11 + 24) = 16;
        v10 = 4;
      }
      else
      {
        if ( v16 >= 0 )
          goto LABEL_15;
        if ( v16 != -1073741637 )
          goto LABEL_3;
        *(_DWORD *)(v11 + 24) = v17;
        v9 = v17;
      }
      *(_DWORD *)(v11 + 28) = v9;
      v9 = v10;
    }
    v12 = v9;
    v6 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v13[1], &v15, &v12);
    if ( v6 < 0 || v12 < v10 )
      goto LABEL_3;
    *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) = *(_DWORD *)(v11 + 24);
LABEL_15:
    v2 = v15;
    goto LABEL_4;
  }
  v6 = -1073741801;
LABEL_3:
  v7 = v6;
  WdLogSingleEntry1(2LL, v6);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendOpenAdapter failed: 0x%I64x", v7, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v13[1]);
  return v2;
}
