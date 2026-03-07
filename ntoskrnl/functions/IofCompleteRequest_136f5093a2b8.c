void __stdcall IofCompleteRequest(PIRP Irp, CCHAR PriorityBoost)
{
  if ( IopDispatchCompleteRequest )
  {
    if ( IopDispatchCompleteRequest == 3 )
      IopPerfCompleteRequest((ULONG_PTR)Irp);
    else
      IovCompleteRequest((ULONG_PTR)Irp);
  }
  else
  {
    IopfCompleteRequest((ULONG_PTR)Irp);
  }
}
