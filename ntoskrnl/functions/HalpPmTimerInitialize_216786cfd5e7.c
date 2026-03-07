__int64 __fastcall HalpPmTimerInitialize(__int64 a1)
{
  unsigned int v1; // ebx
  PVOID v4; // rax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 1) )
  {
    v4 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 20), *(unsigned int *)(a1 + 28), MmNonCached);
    if ( v4 )
      *(_QWORD *)(a1 + 8) = v4;
    else
      return (unsigned int)-1073741670;
  }
  return v1;
}
