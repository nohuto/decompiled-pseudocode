void __fastcall IopLiveDumpDiscardVirtualAddressRange(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 i; // rdi
  PHYSICAL_ADDRESS v6; // rax

  if ( a3 )
  {
    v3 = a2;
    if ( a2 )
    {
      for ( i = (a3 >> 12) + ((a3 & 0xFFF) != 0); i; --i )
      {
        if ( MmIsAddressValid(v3) )
        {
          v6.QuadPart = (unsigned __int64)MmGetPhysicalAddress(v3).QuadPart >> 12;
          if ( v6.QuadPart < *(_QWORD *)(a1 + 576) )
            RtlClearBitsEx(a1 + 576, v6.QuadPart, 1uLL);
        }
        v3 += 4096;
      }
    }
  }
}
