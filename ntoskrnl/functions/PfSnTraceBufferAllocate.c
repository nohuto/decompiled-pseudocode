_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = (_DWORD *)ExAllocatePool2(64LL, 69632LL, 1112564547LL);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
