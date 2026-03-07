__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        enum _D3DKMT_ESCAPETYPE a6,
        struct _D3DDDI_ESCAPEFLAGS a7,
        unsigned int Size,
        unsigned __int8 *Src)
{
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  int v17; // edi
  void *v18; // rbp
  unsigned int v19[4]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v20; // [rsp+60h] [rbp-158h] BYREF
  int v21; // [rsp+70h] [rbp-148h]

  if ( Size > 0x20000 )
  {
    WdLogSingleEntry1(2LL, 11906LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrivateDriverDataSize is invalid",
      11906LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = (Size + 7) & 0xFFFFFFF8;
  v19[0] = v14;
  v21 = 0;
  v15 = 56;
  v20 = 0LL;
  if ( v14 )
    v15 = v14 + 55;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v20, this, v15, 0LL, 0LL, 0LL);
  v16 = v20;
  if ( (_QWORD)v20 )
  {
    *(struct _D3DDDI_ESCAPEFLAGS *)(v20 + 36) = a7;
    *(_DWORD *)(v16 + 44) = a5;
    *(_DWORD *)(v16 + 28) = a4;
    v18 = (void *)(v16 + 48);
    *(_BYTE *)(v16 + 12) = 0;
    *(_DWORD *)(v16 + 12) &= 0x1FFu;
    *(_DWORD *)(v16 + 32) = a6;
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 16) = 13LL;
    *(_DWORD *)(v16 + 8) = a2;
    *(_DWORD *)(v16 + 24) = a3;
    *(_DWORD *)(v16 + 40) = Size;
    memmove((void *)(v16 + 48), Src, Size);
    if ( Size )
    {
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v20, v18, v19);
      if ( v17 < 0 )
        goto LABEL_14;
      if ( v19[0] >= Size )
      {
        memmove(Src, v18, Size);
        goto LABEL_15;
      }
      v17 = -1073741823;
    }
    else
    {
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v20, 0LL, 0LL);
    }
    if ( v17 >= 0 )
      goto LABEL_15;
LABEL_14:
    WdLogSingleEntry1(3LL, v17);
    goto LABEL_15;
  }
  WdLogSingleEntry1(6LL, 11915LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate storage for input buffer",
    11915LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v17 = -1073741801;
LABEL_15:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v20);
  return (unsigned int)v17;
}
