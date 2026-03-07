__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        unsigned int a2,
        UINT a3,
        UINT a4,
        UINT a5,
        struct _D3DDDI_CREATECONTEXTFLAGS a6,
        enum _D3DKMT_CLIENTHINT a7,
        unsigned int Size,
        void *Src)
{
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v13; // ebx
  struct _D3DDDI_CREATECONTEXTFLAGS *v14; // rdi
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // r15d
  unsigned int v16[4]; // [rsp+50h] [rbp-168h] BYREF
  void *v17[2]; // [rsp+60h] [rbp-158h] BYREF
  int v18; // [rsp+70h] [rbp-148h]

  v16[0] = a2;
  if ( Size <= 0x20000 )
  {
    v13 = 0;
    *(_OWORD *)v17 = 0LL;
    v18 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v17, this, (Size + 62) & 0xFFFFFFF8, 0LL, 0LL, 0LL);
    v14 = (struct _D3DDDI_CREATECONTEXTFLAGS *)v17[0];
    if ( v17[0] )
    {
      *((_DWORD *)v17[0] + 2) = v16[0];
      v14[9].Value = a5;
      *(_BYTE *)&v14[3].0 = 0;
      v14[3].Value &= 0x1FFu;
      v14[10].0 = a6.0;
      v14[8].Value = a4;
      v14[11].Value = a7;
      *(_QWORD *)&v14->0 = 0LL;
      *(_QWORD *)&v14[4].0 = 6LL;
      v14[6].Value = 0;
      v14[7].Value = a3;
      v14[12].Value = Size;
      if ( Size )
        memmove(&v14[13], Src, Size);
      v16[0] = (Size + 62) & 0xFFFFFFF8;
      Value = 0;
      if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)v17, v14, v16) >= 0
        && v16[0] >= ((Size + 62) & 0xFFFFFFF8) )
      {
        Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v14[6].Value;
      }
      if ( Size )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 9) + 2096LL) >= 0x7008u )
          memmove(Src, &v14[13], Size);
      }
      v13 = Value;
    }
    else
    {
      WdLogSingleEntry1(6LL, 8637LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for DXGKVMB_COMMAND_CREATECONTEXTVIRTUAL",
        8637LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v17);
    return *(unsigned int *)&v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 8624LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrivateDriverDataSize is invalid",
      8624LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
