bool __fastcall IsCapturedBySystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 MouseProcessor; // rax
  char v6; // bl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  v6 = 0;
  if ( MouseProcessor )
    return CInputDest::operator==((int *)(MouseProcessor + 3576), a1) != 0;
  return v6;
}
