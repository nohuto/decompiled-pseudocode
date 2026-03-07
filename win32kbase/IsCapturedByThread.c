bool __fastcall IsCapturedByThread(struct tagTHREADINFO **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 MouseProcessor; // rax
  char v6; // dl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor((__int64)a1, a2, a3, a4);
  v6 = 0;
  if ( MouseProcessor )
    return CInputDest::GetThreadInfo((CInputDest *)(MouseProcessor + 3576)) == *a1;
  return v6;
}
