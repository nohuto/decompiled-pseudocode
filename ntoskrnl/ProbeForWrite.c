void __stdcall ProbeForWrite(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  unsigned __int64 v3; // rdx
  volatile void *v4; // rdx

  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = (unsigned __int64)Address + Length - 1;
    if ( (unsigned __int64)Address > v3 || v3 >= 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v4 = (volatile void *)((v3 & 0xFFFFFFFFFFFFF000uLL) + 4096);
    do
    {
      *(_BYTE *)Address = *(_BYTE *)Address;
      Address = (volatile void *)(((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL) + 4096);
    }
    while ( Address != v4 );
  }
}
