/*
 * XREFs of ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXIPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@E@Z @ 0x1C005C870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C0029C48 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     ?VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C005C3E0 (-VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendPropagatePresentHistoryToken(
        DXG_VMBUS_CHANNEL_BASE *this,
        unsigned int a2,
        struct DXGPRESENTHISTORYTOKENQUEUE *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        struct CRefCountedBuffer *a5,
        unsigned __int8 a6)
{
  __int64 v7; // rcx
  unsigned __int8 v8[8]; // [rsp+60h] [rbp+7h] BYREF
  int v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+6Ch] [rbp+13h]
  __int64 v11; // [rsp+70h] [rbp+17h]
  struct DXGPRESENTHISTORYTOKENQUEUE *v12; // [rsp+78h] [rbp+1Fh]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v13; // [rsp+80h] [rbp+27h]
  struct CRefCountedBuffer *v14; // [rsp+88h] [rbp+2Fh]
  __int64 v15; // [rsp+90h] [rbp+37h]

  v7 = 0LL;
  v10 = 2;
  v11 = 1LL;
  v15 = 0LL;
  *(_QWORD *)v8 = 0LL;
  v9 = 0;
  v14 = a5;
  v13 = a4;
  v12 = a3;
  if ( a2 >= 0x18 )
  {
    v7 = a6 & 1;
    v15 = v7;
  }
  if ( bTracingEnabled && (v15 & 1) == 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqqxdqp_EtwWriteTransfer(v7, &EventRetirePresentHistory, (__int64)a3, 0LL, a4, 2, 0, 0LL, 0, 0, this);
  DXG_VMBUS_CHANNEL_BASE::VmBusSendAsyncMessage(this, v8, (struct DXGKVMB_COMMAND_BASE *)v8, 0x38u);
}
