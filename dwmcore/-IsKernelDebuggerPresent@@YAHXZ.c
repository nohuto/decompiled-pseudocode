__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1803E1394;
  if ( !(_BYTE)word_1803E1394 )
    return 0;
  v1 = HIBYTE(word_1803E1394);
  v2 = 1;
  if ( HIBYTE(word_1803E1394) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1803E1394, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1803E1394);
      v0 = word_1803E1394;
    }
    else
    {
      v0 = 1;
      word_1803E1394 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
