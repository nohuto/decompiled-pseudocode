_QWORD *__fastcall rimFindAndReclaimHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // r10
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = rimFindHoldingFrame(a1, a2);
  v4 = result;
  if ( result )
  {
    InputTraceLogging::RIM::DropCompleteFrame(v3, (__int64)result);
    return (_QWORD *)rimReclaimHoldingFrame(v6, v5, v4);
  }
  return result;
}
