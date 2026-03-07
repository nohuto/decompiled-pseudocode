__int64 IsKernelDebuggerEnabled()
{
  unsigned int v0; // ebx
  __int16 SystemInformation; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  SystemInformation = 0;
  if ( ZwQuerySystemInformation(SystemKernelDebuggerInformation, &SystemInformation, 2u, 0LL) >= 0
    && (_BYTE)SystemInformation )
  {
    return HIBYTE(SystemInformation) == 0;
  }
  return v0;
}
