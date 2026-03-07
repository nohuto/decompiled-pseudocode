char __fastcall KEOEMProcs(struct tagKE *a1)
{
  __int64 (__fastcall *v1)(struct tagKE *); // rax
  __int64 v3; // rbx

  v1 = aKEProcOEM[0];
  v3 = 0LL;
  while ( (unsigned int)v1(a1) )
  {
    v1 = aKEProcOEM[++v3];
    if ( !v1 )
      return 1;
  }
  InputTraceLogging::Keyboard::DropInput(12LL);
  return 0;
}
