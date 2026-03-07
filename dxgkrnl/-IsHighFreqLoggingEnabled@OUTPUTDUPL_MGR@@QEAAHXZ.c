__int64 __fastcall OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(OUTPUTDUPL_MGR *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 10) || bTracingEnabled )
    return 1LL;
  return result;
}
