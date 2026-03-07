PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::PTPEngineTraceProducer(
        PTPEngineTraceProducer *this,
        struct IPTPEngine *a2)
{
  unsigned __int64 v2; // rbx

  *((_QWORD *)this + 1) = 0LL;
  v2 = (unsigned __int64)this + 16;
  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  *((_QWORD *)this + 3) = a2;
  memset((char *)this + 40, 0, 0x22CuLL);
  *((_QWORD *)this + 75) = 0LL;
  (***((void (__fastcall ****)(_QWORD, _QWORD))this + 3))(
    *((_QWORD *)this + 3),
    v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  return this;
}
