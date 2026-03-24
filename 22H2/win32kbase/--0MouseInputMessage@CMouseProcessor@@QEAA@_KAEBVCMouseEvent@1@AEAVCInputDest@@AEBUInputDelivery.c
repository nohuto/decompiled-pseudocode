/*
 * XREFs of ??0MouseInputMessage@CMouseProcessor@@QEAA@_KAEBVCMouseEvent@1@AEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BE518
 * Callers:
 *     ??0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BE46C (--0ButtonInputMessage@CMouseProcessor@@QEAA@AEBVCButtonEvent@1@_KAEAVCInputDest@@AEBUInputDelive.c)
 *     ??0MoveInputMessage@CMouseProcessor@@QEAA@AEBVCMoveEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BE654 (--0MoveInputMessage@CMouseProcessor@@QEAA@AEBVCMoveEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryCo.c)
 *     ??0WheelInputMessage@CMouseProcessor@@QEAA@AEBVCWheelEvent@1@_KAEAVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BE6DC (--0WheelInputMessage@CMouseProcessor@@QEAA@AEBVCWheelEvent@1@_KAEAVCInputDest@@AEBUInputDelivery.c)
 * Callees:
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::MouseInputMessage::MouseInputMessage(
        CMouseProcessor::MouseInputMessage *this,
        __int64 a2,
        const struct CMouseProcessor::CMouseEvent *a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  __int64 v8; // rax

  *((_QWORD *)this + 2) = a2;
  memset((char *)this + 24, 0, 0x70uLL);
  *((_BYTE *)this + 136) = 0;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a4;
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a4 + 1);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a4 + 2);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a4 + 3);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a4 + 4);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a4 + 5);
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a4 + 6);
  memset(a4, 0, 0x78uLL);
  *((_OWORD *)this + 9) = *(_OWORD *)a5;
  *((_QWORD *)this + 20) = *((_QWORD *)a5 + 2);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 4);
  *((_QWORD *)this + 22) = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  v8 = *((_QWORD *)a3 + 1);
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)v8;
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)(v8 + 16);
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)(v8 + 32);
  *(_OWORD *)((char *)this + 232) = *(_OWORD *)(v8 + 48);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)(v8 + 64);
  *(_OWORD *)((char *)this + 264) = *(_OWORD *)(v8 + 80);
  *(_OWORD *)((char *)this + 280) = *(_OWORD *)(v8 + 96);
  *(_OWORD *)((char *)this + 296) = *(_OWORD *)(v8 + 112);
  *(_OWORD *)((char *)this + 312) = *(_OWORD *)(v8 + 128);
  *(_OWORD *)((char *)this + 328) = *(_OWORD *)(v8 + 144);
  *((_QWORD *)this + 43) = *(_QWORD *)(v8 + 160);
  return this;
}
