bool __fastcall CInputDest::UsesQueue(CInputDest *this, const struct tagQ *a2)
{
  __int64 v2; // rdx
  struct tagTHREADINFO *ThreadInfo; // r8
  bool result; // al

  ThreadInfo = CInputDest::GetThreadInfo(this);
  result = 0;
  if ( ThreadInfo )
    return *((_QWORD *)ThreadInfo + 54) == v2;
  return result;
}
