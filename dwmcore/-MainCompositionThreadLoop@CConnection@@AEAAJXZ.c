/*
 * XREFs of ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800D5CD8
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D5BCC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800D5DAC (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800D5F58 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z @ 0x180102E08 (-Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x1801CE9E0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CConnection::MainCompositionThreadLoop(struct CTransport **this)
{
  int v2; // ebx
  struct CTransport *v3; // rbx
  CPartitionVerticalBlankScheduler *v4; // rax
  CPartitionVerticalBlankScheduler *v5; // rax
  __int64 v6; // rcx
  CPartitionVerticalBlankScheduler *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  struct CTransport *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-48h]
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = CKernelTransport::Create(this + 1);
  if ( v2 < 0 )
  {
    v13 = 70LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
      (const char *)(unsigned int)v2,
      v15);
    return (unsigned int)v2;
  }
  v3 = this[1];
  v4 = (CPartitionVerticalBlankScheduler *)DefaultHeap::AllocClear(0x2498uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v4, v3, (struct CConnection *)this);
  v7 = v5;
  if ( !v5 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x21u, 0LL);
    goto LABEL_12;
  }
  v8 = CPartitionVerticalBlankScheduler::Initialize(v5);
  v2 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x22u, 0LL);
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v7, 1u);
LABEL_12:
    v13 = 75LL;
    goto LABEL_13;
  }
  v10 = this[6];
  this[4] = v7;
  SetEvent(v10);
  *((_BYTE *)this + 24) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start,
      v11,
      1LL,
      v16);
  do
  {
    v2 = (*(__int64 (__fastcall **)(struct CTransport *))(*(_QWORD *)this[4] + 80LL))(this[4]);
    if ( v2 < 0 )
    {
      v13 = 89LL;
      goto LABEL_13;
    }
  }
  while ( *((_BYTE *)this + 24) );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v12,
      1LL,
      v17);
  return 0LL;
}
