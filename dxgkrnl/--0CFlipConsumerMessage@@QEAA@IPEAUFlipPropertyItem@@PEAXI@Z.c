CFlipConsumerMessage *__fastcall CFlipConsumerMessage::CFlipConsumerMessage(
        CFlipConsumerMessage *this,
        int a2,
        struct FlipPropertyItem *a3,
        void *a4,
        unsigned int a5)
{
  _QWORD *v5; // r8

  *((_DWORD *)this + 8) = a5;
  *((_QWORD *)this + 2) = a3;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 3) = a4;
  v5 = (_QWORD *)(((unsigned __int64)this + 48) & -(__int64)((CFlipConsumerMessage *)((char *)this + 40) != 0LL));
  v5[1] = v5;
  *v5 = v5;
  *(_QWORD *)this = &CFlipConsumerMessage::`vftable'{for `CFlipPropertySetBase'};
  *((_QWORD *)this + 5) = &CFlipConsumerMessage::`vftable'{for `CFlipQueuedObject'};
  return this;
}
