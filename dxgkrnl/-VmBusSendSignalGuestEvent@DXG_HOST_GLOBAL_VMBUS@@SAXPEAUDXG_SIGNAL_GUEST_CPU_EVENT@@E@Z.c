void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent(DXG_VMBUS_CHANNEL_BASE **a1, char a2)
{
  DXG_VMBUS_CHANNEL_BASE *v2; // r10
  char v4; // r8
  char v5; // cl
  DXG_VMBUS_CHANNEL_BASE *v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v13[16]; // [rsp+68h] [rbp+17h] BYREF
  __int128 v14; // [rsp+78h] [rbp+27h]
  __int128 v15; // [rsp+88h] [rbp+37h]

  v2 = *a1;
  *(_OWORD *)v13 = 0LL;
  if ( v2 )
  {
    v4 = *((_BYTE *)a1 + 18);
    v14 = 0LL;
    v15 = 0LL;
    if ( *((_BYTE *)a1 + 16) || (v5 = 0, a2) )
      v5 = 1;
    v6 = a1[1];
    v13[12] = 2;
    *(_DWORD *)&v13[12] = *(_WORD *)&v13[12] & 0x1FF;
    LODWORD(v14) = 0;
    *((_QWORD *)&v14 + 1) = v6;
    *(_QWORD *)&v15 = 0LL;
    BYTE8(v15) = v5;
    BYTE9(v15) = v4;
    if ( *((_BYTE *)a1 + 19) )
      BYTE11(v15) |= 1u;
    v7 = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v2, v13, (struct DXGKVMB_COMMAND_BASE *)v13, 0x30u);
    if ( v7 < 0 )
    {
      v8 = v7;
      WdLogSingleEntry1(2LL, v7);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v10,
            v9,
            v11,
            0LL,
            0,
            -1,
            L"VmBusSendAsyncMessage failed. 0x%I64x",
            v8,
            0LL,
            0LL,
            0LL,
            0LL,
            *(_QWORD *)v13,
            *(_QWORD *)&v13[8],
            v14,
            v15);
      }
    }
  }
  else
  {
    *(_QWORD *)&v14 = 0LL;
    *(_QWORD *)v13 = a1[1];
    if ( *((_BYTE *)a1 + 16) || (LOBYTE(v14) = 0, a2) )
      LOBYTE(v14) = 1;
    Global = DXGGLOBAL::GetGlobal();
    (*((void (__fastcall **)(unsigned __int8 *))Global + 3))(v13);
  }
  if ( !*((_BYTE *)a1 + 17) )
    DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)a1);
}
