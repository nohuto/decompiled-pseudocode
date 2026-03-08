/*
 * XREFs of ?FlushChannels@CComposition@@QEAAXXZ @ 0x18004D118
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18004E7F8 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x1800509B0 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800E1CF4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800EB7CC (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CComposition::FlushChannels(CComposition *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  CChannelContext *v5; // rbp
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+34h] [rbp-24h]
  __int64 v10; // [rsp+44h] [rbp-14h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 56LL))(*((_QWORD *)this + 28)) )
  {
    if ( *((_DWORD *)this + 134) )
    {
      v2 = 0LL;
      v3 = *((unsigned int *)this + 134);
      do
      {
        v4 = *((_QWORD *)this + 64);
        v8 = 1;
        v9 = 0LL;
        v5 = *(CChannelContext **)(v2 + v4);
        v10 = 0LL;
        v6 = CChannelContext::PostMessageToChannel(v5, (const struct MIL_MESSAGE *)&v8);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x70u, 0LL);
        CMILRefCountBaseT<IMILRefCount>::InternalRelease(v5);
        v2 += 8LL;
        --v3;
      }
      while ( v3 );
    }
    *((_DWORD *)this + 134) = 0;
    DynArrayImpl<1>::ShrinkToSize((char *)this + 512, 8LL);
  }
}
