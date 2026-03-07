__int64 __fastcall ProcgrpQueryMaximumProcessorCount()
{
  unsigned __int8 *v0; // rax

  v0 = *(unsigned __int8 **)&KeNumberProcessors;
  return *v0;
}
