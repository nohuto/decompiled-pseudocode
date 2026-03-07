bool __fastcall HalpAcpiIsCachedTableCompromised(__int64 a1, int a2, char *a3, char *a4, void *Buf2)
{
  const char *v5; // r10
  int v7; // eax
  bool v8; // bl
  unsigned int *TableFromBios; // rax
  unsigned int *v11; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  v5 = "SLIC";
  LODWORD(NumberOfBytes) = 0;
  v7 = 0;
  v8 = 1;
  while ( a2 != *(_DWORD *)v5 )
  {
    ++v7;
    v5 += 4;
    if ( v7 )
    {
      if ( v7 == 1 )
        return 0;
      break;
    }
  }
  TableFromBios = HalpAcpiGetTableFromBios(a1, a2, a3, a4, &NumberOfBytes, &v13);
  v11 = TableFromBios;
  if ( TableFromBios )
  {
    v8 = memcmp(TableFromBios, Buf2, TableFromBios[1]) != 0;
    if ( a1 )
      HalpUnmapVirtualAddress(
        v11,
        (((unsigned __int16)v11 & 0xFFF) + (unsigned __int64)(unsigned int)NumberOfBytes + 4095) >> 12,
        0LL);
    else
      MmUnmapIoSpace(v11, (unsigned int)NumberOfBytes);
  }
  return v8;
}
