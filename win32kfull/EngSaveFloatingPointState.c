ULONG __stdcall EngSaveFloatingPointState(PVOID pBuffer, ULONG cjBufferSize)
{
  ULONG result; // eax

  if ( !pBuffer )
    return 8;
  result = 1;
  if ( !cjBufferSize )
    return 8;
  return result;
}
