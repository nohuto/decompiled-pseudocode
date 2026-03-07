__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_140016228;
  if ( !(_BYTE)word_140016228 )
    return 0;
  v1 = HIBYTE(word_140016228);
  v2 = 1;
  if ( HIBYTE(word_140016228) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_140016228, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_140016228);
      v0 = word_140016228;
    }
    else
    {
      v0 = 1;
      word_140016228 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
