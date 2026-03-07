__int64 __fastcall x86BiosAllocateBuffer(int *a1, _WORD *a2, _WORD *a3)
{
  int v3; // eax

  if ( x86BiosInitialized != 1 )
    return 3221225626LL;
  if ( x86BiosBufferAllocated )
    return 3221225626LL;
  v3 = x86BiosTransferLength;
  if ( *a1 > (unsigned int)x86BiosTransferLength )
    return 3221225626LL;
  x86BiosBufferAllocated = 1;
  *a2 = 0x2000;
  *a3 = 0;
  *a1 = v3;
  return 0LL;
}
