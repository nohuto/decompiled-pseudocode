bool __fastcall InputTraceLogging::InteractionFurtherProcessingForInput(const struct CInteraction *a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return (*((_BYTE *)a1 + 192) & 4) != 0;
  return result;
}
