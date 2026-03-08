/*
 * XREFs of ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C005C970
 * Callers:
 *     ?VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z @ 0x1C005CA90 (-VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C01887C0 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C005C3E0 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(__int64 a1, char a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  DXG_VMBUS_CHANNEL_BASE *v5; // rcx
  __int64 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  unsigned __int8 v11[16]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v12; // [rsp+70h] [rbp+27h]
  __int64 v13; // [rsp+78h] [rbp+2Fh]
  __int128 v14; // [rsp+80h] [rbp+37h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v5 = *(DXG_VMBUS_CHANNEL_BASE **)a1;
    v14 = 0LL;
    *(_OWORD *)v11 = 0LL;
    v11[12] = 2;
    *(_DWORD *)&v11[12] = *(_WORD *)&v11[12] & 0x1FF;
    v12 = 0LL;
    v13 = v4;
    LODWORD(v14) = *a4;
    LODWORD(v12) = 2;
    DWORD2(v14) = a2 != 0;
    LODWORD(v4) = DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(v5, v11, (struct DXGKVMB_COMMAND_BASE *)v11, 0x30u);
    if ( (int)v4 < 0 )
    {
      v6 = (int)v4;
      LOBYTE(v4) = WdLogSingleEntry1(2LL, (int)v4);
      if ( bTracingEnabled )
      {
        LOBYTE(v4) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          LOBYTE(v4) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                         v8,
                         v7,
                         v9,
                         0LL,
                         0,
                         -1,
                         L"VmBusSendAsyncMessage failed. 0x%I64x",
                         v6,
                         0LL,
                         0LL,
                         0LL,
                         0LL);
      }
    }
  }
  return v4;
}
