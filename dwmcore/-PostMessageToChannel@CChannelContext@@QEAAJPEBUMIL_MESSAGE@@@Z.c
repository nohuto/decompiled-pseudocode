/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800EB7CC
 * Callers:
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x18004D118 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800EB4FC (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800EB548 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1801DCE20 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1801F6BB0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x1800EB874 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(
        CChannelContext *this,
        const struct MIL_MESSAGE *a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  unsigned int v8; // ebx
  _OWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF
  _OWORD *v14; // [rsp+60h] [rbp+18h] BYREF

  lpMem = 0LL;
  v14 = 0LL;
  v5 = CTransportCmdPacker::AllocateNotification(this, *(unsigned int *)a2, a3, &lpMem, &v14);
  v7 = lpMem;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Eu, 0LL);
  }
  else
  {
    v9 = v14;
    *v14 = *(_OWORD *)a2;
    *((_QWORD *)v9 + 2) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v9 + 6) = *((_DWORD *)a2 + 6);
    v7[4] = *((_DWORD *)this + 4);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 16LL))(*((_QWORD *)this + 5), v7);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA6u, 0LL);
  }
  operator delete(v7);
  return v8;
}
