__int64 __fastcall ProcgrpGetCurrentProcessorNumberEx(_PROCESSOR_NUMBER *ProcNumber)
{
  __int64 result; // rax

  result = KeGetCurrentProcessorNumber();
  if ( ProcNumber )
  {
    ProcNumber->Group = 0;
    ProcNumber->Number = result;
    ProcNumber->Reserved = 0;
  }
  return result;
}
