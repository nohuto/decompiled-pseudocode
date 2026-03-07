void *__fastcall UserSetScaleFactorsFromRemoteMetric(int a1)
{
  void *result; // rax

  result = gpsi;
  if ( a1 )
    *((_DWORD *)gpsi + 559) |= 0x40u;
  else
    *((_DWORD *)gpsi + 559) &= ~0x40u;
  return result;
}
