__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendHostMonitorPower(
        DXG_VMBUS_CHANNEL_BASE *a1,
        struct _LUID a2,
        int a3,
        char a4)
{
  int v4; // eax
  __int64 v5; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned __int8 v10[8]; // [rsp+60h] [rbp+17h] BYREF
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  __int64 v13; // [rsp+70h] [rbp+27h]
  struct _LUID v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+80h] [rbp+37h]
  BOOL v16; // [rsp+84h] [rbp+3Bh]

  v12 = 2;
  v14 = a2;
  v15 = a3;
  v13 = 6LL;
  v16 = a4 != 0;
  *(_QWORD *)v10 = 0LL;
  v11 = 0;
  v4 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(a1, v10, (struct DXGKVMB_COMMAND_BASE *)v10, 0x28u);
  v5 = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry1(2LL, v4);
    if ( bTracingEnabled )
    {
      LOBYTE(v7) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0LL,
          0,
          -1,
          L"VmBusSendAsyncMessage failed. 0x%I64x",
          v5,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return (unsigned int)v5;
}
