unsigned __int64 __fastcall EtwpGetSystemMaximumBufferCount(unsigned int *a1)
{
  unsigned int *v1; // r9
  unsigned __int64 MaximumNonPagedPoolInBytes; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned int v6; // eax

  v1 = a1;
  if ( a1[75] == 1 )
  {
    v3 = MmSizeOfPagedPoolInBytes;
  }
  else
  {
    MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
    if ( v3 >= MaximumNonPagedPoolInBytes )
      v3 = MaximumNonPagedPoolInBytes;
  }
  if ( (v1[204] & 2) != 0 && (v6 = v1[3], (v6 & 0x2000000) != 0) && (v6 & 0x400) != 0 )
    v4 = 50 * v3;
  else
    v4 = v3 * (unsigned int)EtwpMaxNonPagedPoolUsage;
  return v4 / 0x64 / v1[1];
}
