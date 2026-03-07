bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}
