__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        struct _D3DKMT_QUERYVIDEOMEMORYINFO *a4)
{
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  _QWORD v14[4]; // [rsp+160h] [rbp+60h] BYREF

  v13 = 0;
  v12 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v12, this, 0x28u, 0LL, 0LL, 0LL);
  v8 = v12;
  if ( (_QWORD)v12 )
  {
    *(_QWORD *)v12 = 0LL;
    *(_DWORD *)(v8 + 20) = 0;
    *(_BYTE *)(v8 + 12) = 0;
    *(_DWORD *)(v8 + 12) &= 0x1FFu;
    *(_DWORD *)(v8 + 8) = a2;
    *(_DWORD *)(v8 + 16) = 21;
    *(_DWORD *)(v8 + 24) = a3;
    *(_DWORD *)(v8 + 28) = a4->MemorySegmentGroup;
    *(_DWORD *)(v8 + 32) = a4->PhysicalAdapterIndex;
    v11[0] = 32;
    v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v12, v14, v11);
    if ( v9 < 0 || (v9 = -1073741823, v11[0] < 0x20) )
    {
      WdLogSingleEntry1(3LL, v9);
    }
    else
    {
      v9 = 0;
      a4->Budget = v14[0];
      a4->AvailableForReservation = v14[3];
      a4->CurrentReservation = v14[2];
      a4->CurrentUsage = v14[1];
    }
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v12);
  return (unsigned int)v9;
}
