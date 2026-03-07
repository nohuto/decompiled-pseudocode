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
  v8 = *((_QWORD *)a3 + 1);
  *((_OWORD *)this + 11) = *(_OWORD *)v8;
  *((_OWORD *)this + 12) = *(_OWORD *)(v8 + 16);
  *((_OWORD *)this + 13) = *(_OWORD *)(v8 + 32);
  *((_OWORD *)this + 14) = *(_OWORD *)(v8 + 48);
  *((_OWORD *)this + 15) = *(_OWORD *)(v8 + 64);
  *((_OWORD *)this + 16) = *(_OWORD *)(v8 + 80);
  *((_OWORD *)this + 17) = *(_OWORD *)(v8 + 96);
  *((_OWORD *)this + 18) = *(_OWORD *)(v8 + 112);
  *((_OWORD *)this + 19) = *(_OWORD *)(v8 + 128);
  *((_OWORD *)this + 20) = *(_OWORD *)(v8 + 144);
  *((_QWORD *)this + 42) = *(_QWORD *)(v8 + 160);
  return this;
}
