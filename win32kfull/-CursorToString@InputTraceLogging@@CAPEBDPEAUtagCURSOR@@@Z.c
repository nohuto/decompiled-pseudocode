const char *__fastcall InputTraceLogging::CursorToString(struct tagCURSOR *a1)
{
  unsigned int v2; // ecx
  __int64 v4; // rdx
  struct tagCURSOR **i; // rax

  v2 = 0;
  if ( !a1 )
    return "Empty";
  v4 = 0LL;
  for ( i = (struct tagCURSOR **)&gasyscur[1]; *i != a1; i += 69 )
  {
    ++v2;
    if ( ++v4 >= 19 )
      return "Custom";
  }
  return InputTraceLogging::CurIndexName(v2);
}
