void __fastcall CMouseProcessor::MouseMoveTimes::EnsureMoveTime(CMouseProcessor::MouseMoveTimes *this)
{
  __int64 v2; // rax
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 1) )
    *(_QWORD *)this = 0LL;
  if ( !*(_QWORD *)this )
  {
    v2 = CMouseProcessor::EventTime::Now(v3);
    *(_OWORD *)this = *(_OWORD *)v2;
    *((_QWORD *)this + 2) = *(_QWORD *)(v2 + 16);
  }
}
