CGlobalMit *__fastcall CGlobalMit::CGlobalMit(CGlobalMit *this, struct CComposition *a2)
{
  CGlobalMit *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 32) = 0;
  CMit::s_pMessageSession = 0LL;
  CMit::s_pMessageCallSendHost = 0LL;
  CMit::s_pSystemInputHost = 0LL;
  *(_QWORD *)this = &CGlobalMit::`vftable';
  CMmcssTask::CMmcssTask((CGlobalMit *)((char *)this + 48));
  *((_QWORD *)this + 17) = 0LL;
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
