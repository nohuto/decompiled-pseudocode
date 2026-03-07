__int64 __fastcall CInputSink::Open(CInputSink *this, struct _WIN32_OPENMETHOD_PARAMETERS *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *((_QWORD *)a2 + 1);
  result = 0LL;
  if ( (!v2 || v2 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels) && v2 != *((_QWORD *)this + 4) )
    return 3221225659LL;
  return result;
}
