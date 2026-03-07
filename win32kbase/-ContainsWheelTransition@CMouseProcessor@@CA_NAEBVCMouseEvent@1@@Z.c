char __fastcall CMouseProcessor::ContainsWheelTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 30LL) )
    return ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a1)(a1) & 0xC00) != 0;
  return v1;
}
