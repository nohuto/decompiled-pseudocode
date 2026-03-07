struct tagTHREADINFO *_GetCurrentLogicalCursorThread(void)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrentShared();
  if ( (*((_DWORD *)result + 318) & 0x8000000) != 0 )
    return (struct tagTHREADINFO *)*((_QWORD *)result + 190);
  return result;
}
