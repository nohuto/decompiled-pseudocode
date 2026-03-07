__int64 __fastcall bSecureBits(char *a1, unsigned int a2, void **a3)
{
  unsigned int v4; // ebx
  char *v5; // r9
  HANDLE v6; // rax

  v4 = 1;
  *a3 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v5 = &a1[a2];
      if ( (unsigned __int64)v5 > MmUserProbeAddress || v5 < a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v6 = MmSecureVirtualMemory(a1, a2, 2u);
    *a3 = v6;
    return v6 != 0LL;
  }
  return v4;
}
