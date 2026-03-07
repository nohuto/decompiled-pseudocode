__int64 __fastcall WheaGetCurrentProcessName(void **a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  char *Buffer; // rdx
  __int64 result; // rax
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors);
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    result = DestinationString.Length;
  }
  else
  {
    Buffer = "(Unknown)";
    result = 10LL;
  }
  *a2 = result;
  if ( v2 )
  {
    if ( (unsigned int)result > v2 )
    {
      *a2 = v2;
      LODWORD(result) = v2;
    }
    return (__int64)memmove(*a1, Buffer, (unsigned int)result);
  }
  else
  {
    *a1 = Buffer;
  }
  return result;
}
