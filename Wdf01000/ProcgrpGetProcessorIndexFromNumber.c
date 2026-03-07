__int64 __fastcall ProcgrpGetProcessorIndexFromNumber(_PROCESSOR_NUMBER *ProcNumber)
{
  unsigned __int8 *v1; // rax

  if ( ProcNumber->Group )
    return 0xFFFFFFFFLL;
  v1 = *(unsigned __int8 **)&KeNumberProcessors;
  if ( ProcNumber->Number >= *v1 || ProcNumber->Reserved )
    return 0xFFFFFFFFLL;
  else
    return ProcNumber->Number;
}
