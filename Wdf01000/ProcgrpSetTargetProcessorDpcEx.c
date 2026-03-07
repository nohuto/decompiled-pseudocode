__int64 __fastcall ProcgrpSetTargetProcessorDpcEx(_KDPC *Dpc, _PROCESSOR_NUMBER *ProcNumber)
{
  unsigned __int8 *v2; // rax

  if ( ProcNumber->Group )
    return 3221225485LL;
  v2 = *(unsigned __int8 **)&KeNumberProcessors;
  if ( ProcNumber->Number >= *v2 || ProcNumber->Reserved )
    return 3221225485LL;
  KeSetTargetProcessorDpc(Dpc, ProcNumber->Number);
  return 0LL;
}
