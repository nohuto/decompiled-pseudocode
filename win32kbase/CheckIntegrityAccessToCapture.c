__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 MouseProcessor; // rax
  unsigned int v6; // edi

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( !MouseProcessor )
    return 0;
  v6 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3696), 1, 1)
    || !(unsigned __int8)anonymous_namespace_::ValidateUIPI(a1, MouseProcessor + 3576) )
  {
    return 0;
  }
  return v6;
}
