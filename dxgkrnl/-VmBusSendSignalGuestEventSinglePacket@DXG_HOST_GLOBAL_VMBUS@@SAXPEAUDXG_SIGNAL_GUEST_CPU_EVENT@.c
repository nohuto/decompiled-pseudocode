/*
 * XREFs of ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x1C005CC28
 * Callers:
 *     _lambda_65e49200310e163fd0a118e331418de0_::operator() @ 0x1C0056C60 (_lambda_65e49200310e163fd0a118e331418de0_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C0047F60 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x1C0057384 (-ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ.c)
 *     ?VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z @ 0x1C005C61C (-VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEventSinglePacket(
        struct DXG_SIGNAL_GUEST_CPU_EVENT *a1,
        struct DXGKVMB_SINGLEPACKETCONTEXT *this)
{
  struct VMBPACKET__ *v4; // rsi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r14
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int128 v14; // [rsp+60h] [rbp-9h] BYREF
  __int64 v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  __int128 v17; // [rsp+80h] [rbp+17h]

  v4 = (struct VMBPACKET__ *)((__int64 (__fastcall *)(_QWORD))qword_1C013CF08)(**(_QWORD **)a1);
  if ( v4 )
  {
    v8 = *((_QWORD *)a1 + 1);
    v17 = 0LL;
    v15 = 0LL;
    v16 = v8;
    BYTE8(v17) = *((_BYTE *)a1 + 16);
    LOBYTE(v8) = *((_BYTE *)a1 + 18);
    v14 = 0LL;
    BYTE9(v17) = v8;
    BYTE12(v14) = 2;
    HIDWORD(v14) = WORD6(v14) & 0x1FF;
    *(_QWORD *)&v17 = 0LL;
    ((void (__fastcall *)(struct VMBPACKET__ *, struct DXGKVMB_SINGLEPACKETCONTEXT *))qword_1C013CF50)(v4, this);
    ((void (__fastcall *)(struct VMBPACKET__ *, void (__fastcall *)(struct VMBPACKET__ *, __int64, void *)))qword_1C013CF48)(
      v4,
      SinglePacketCompletionRoutine);
    _InterlockedIncrement((volatile signed __int32 *)this);
    *((_QWORD *)this + 1) = v4;
    v9 = VmBusSendAsyncPacket(v4, (struct DXGKVMB_COMMAND_BASE *)&v14, 48LL);
    if ( v9 < 0 )
    {
      v10 = v9;
      WdLogSingleEntry1(2LL, v9);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0LL,
          0,
          -1,
          L"VmBusSendAsyncPacket failed. 0x%I64x",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
      ((void (__fastcall *)(struct VMBPACKET__ *))qword_1C013CF10)(v4);
      *((_QWORD *)this + 1) = 0LL;
      DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(this);
    }
    if ( !*((_BYTE *)a1 + 17) )
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(a1);
  }
  else
  {
    WdLogSingleEntry1(6LL, 6829LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v5,
          v7,
          0LL,
          1,
          -1,
          L"Failed to allocate VMBPACKET",
          6829LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
}
