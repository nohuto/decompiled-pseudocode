signed __int64 MmInitSystemDll()
{
  signed __int64 result; // rax
  signed __int64 v1; // rbx

  result = (signed __int64)PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    result = PspReferenceSystemDll(*(signed __int64 **)(result - 8));
    qword_140C65680 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject(*(signed __int64 **)(v1 - 8), result, 0x64537350u);
  }
  return result;
}
