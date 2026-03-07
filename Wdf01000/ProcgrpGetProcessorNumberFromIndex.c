__int64 __fastcall ProcgrpGetProcessorNumberFromIndex(unsigned int ProcIndex, _PROCESSOR_NUMBER *ProcNumber)
{
  unsigned __int8 *v2; // rax
  __int64 result; // rax

  v2 = *(unsigned __int8 **)&KeNumberProcessors;
  if ( ProcIndex >= *v2 )
    return 3221225485LL;
  result = 0LL;
  ProcNumber->Number = ProcIndex;
  ProcNumber->Group = 0;
  ProcNumber->Reserved = 0;
  return result;
}
