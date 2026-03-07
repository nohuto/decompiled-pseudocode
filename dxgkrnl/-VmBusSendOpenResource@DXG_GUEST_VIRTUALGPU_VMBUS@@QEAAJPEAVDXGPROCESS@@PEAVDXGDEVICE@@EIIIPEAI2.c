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
