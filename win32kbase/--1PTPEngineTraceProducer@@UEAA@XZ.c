void __fastcall PTPEngineTraceProducer::~PTPEngineTraceProducer(PTPEngineTraceProducer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  *(_QWORD *)this = &IPTPEngine::`vftable';
}
