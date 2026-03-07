bool IsVailContainer(void)
{
  bool v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( HIBYTE(word_1803E3650) )
    return word_1803E3650;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
  {
    HIBYTE(word_1803E3650) = 1;
    v0 = v2 != 0;
    LOBYTE(word_1803E3650) = v2 != 0;
  }
  else
  {
    word_1803E3650 = 256;
  }
  return v0;
}
