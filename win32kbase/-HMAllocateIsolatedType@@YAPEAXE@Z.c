PVOID __fastcall HMAllocateIsolatedType()
{
  int v0; // eax
  int v1; // eax
  __int64 v2; // rcx
  PVOID result; // rax

  v0 = HMTagToIsolatedType() - 1;
  if ( v0 )
  {
    v1 = v0 - 1;
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        result = 0LL;
        if ( *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24) )
          return (PVOID)NSInstrumentation::CTypeIsolation<81920,160>::Allocate();
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      v2 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16);
      result = 0LL;
      if ( v2 )
        return NSInstrumentation::CTypeIsolation<86016,336>::Allocate(v2);
    }
  }
  else
  {
    result = 0LL;
    if ( *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 8) )
      return (PVOID)NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  }
  return result;
}
