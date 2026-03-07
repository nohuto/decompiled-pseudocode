char PspComputeExecutionState()
{
  _DWORD *v0; // rdx
  unsigned int v1; // r8d
  char result; // al
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  PspInitializeProcessExecutionState(&v3);
  result = v3;
  if ( v0[265] > v1 )
    result = v3 | 2;
  if ( v0[262] > v1 )
    result |= 1u;
  if ( v0[263] > v1 )
    return result | 4;
  return result;
}
