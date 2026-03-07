__int64 __fastcall ProcessorpIsPreferredInterruptTarget(ULONG a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v3; // r8
  char *v4; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  ProcNumber = 0;
  if ( ProcessorpPreferredCpuSetActive )
  {
    if ( KeGetProcessorNumberFromIndex(a1, &ProcNumber) >= 0 )
    {
      v3 = 0;
      if ( ProcessorpPreferredCpuSetGroupCount )
      {
        while ( 1 )
        {
          v4 = (char *)ProcessorpPreferredCpuSet + 16 * v3;
          if ( ProcNumber.Group == *((_WORD *)v4 + 4) )
            break;
          if ( ++v3 >= (unsigned __int16)ProcessorpPreferredCpuSetGroupCount )
            return v1;
        }
        return (unsigned int)KeCheckProcessorGroupAffinity(v4, a1);
      }
    }
  }
  return v1;
}
