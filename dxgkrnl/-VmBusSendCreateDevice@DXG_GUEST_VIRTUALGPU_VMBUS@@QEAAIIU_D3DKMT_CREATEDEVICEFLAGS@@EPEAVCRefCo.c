__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        struct _D3DKMT_CREATEDEVICEFLAGS a3,
        char a4,
        struct CRefCountedBuffer *Entry)
{
  unsigned int v5; // edi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13[4]; // [rsp+30h] [rbp-168h] BYREF
  __int128 v14; // [rsp+40h] [rbp-158h] BYREF
  int v15; // [rsp+50h] [rbp-148h]
  unsigned int v16; // [rsp+160h] [rbp-38h] BYREF

  v5 = 0;
  if ( g_VgpuDisableCreateDevice )
    return 0LL;
  v15 = 0;
  v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v14, this, 0x28u, 0LL, 0LL, 0LL);
  v11 = v14;
  if ( (_QWORD)v14 )
  {
    *(_BYTE *)(v14 + 12) = 0;
    *(_DWORD *)(v11 + 12) &= 0x1FFu;
    *(_QWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 8) = a2;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(struct _D3DKMT_CREATEDEVICEFLAGS *)(v11 + 24) = a3;
    *(_BYTE *)(v11 + 28) = a4;
    *(_QWORD *)(v11 + 32) = Entry;
    v13[0] = 8;
    _InterlockedIncrement((volatile signed __int32 *)Entry + 3);
    v12 = 0;
    if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v14, &v16, v13) < 0
      || (v12 = v16) == 0 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(Entry);
    }
    v5 = v12;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v14);
  return v5;
}
