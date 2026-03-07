struct tagCURSOR *__fastcall InputTraceLogging::GetCursorOrFrame(struct tagCURSOR *a1)
{
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    return (struct tagCURSOR *)**((_QWORD **)a1 + 12);
  else
    return a1;
}
