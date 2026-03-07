_BOOL8 EnforceColorDependentSettings()
{
  _BOOL8 result; // rax

  result = (*((_DWORD *)gpDispInfo + 33) & 2) != 0 || (unsigned int)GreGetDeviceCaps(*((HDC *)gpDispInfo + 7), 24) != -1;
  gbDisableAlpha = result;
  return result;
}
