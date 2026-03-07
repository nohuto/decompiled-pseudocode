TemporaryConfiguration *__fastcall TemporaryConfiguration::TemporaryConfiguration(TemporaryConfiguration *this)
{
  TemporaryConfiguration *result; // rax

  *((_DWORD *)this + 2) = 0;
  result = this;
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 1) = -805306369;
  return result;
}
