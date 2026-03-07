void __fastcall HalpIommuUpdateRemappingTableEntry(char a1, __int64 a2, __int64 a3)
{
  ULONG_PTR *v3; // rbx
  int v4; // esi
  char v6; // bp
  unsigned int v7; // r14d
  ULONG_PTR *v9; // rdi

  v3 = (ULONG_PTR *)HalpIommuList;
  v4 = 0;
  v6 = 0;
  v7 = a2;
  while ( v3 != &HalpIommuList )
  {
    v9 = v3;
    v3 = (ULONG_PTR *)*v3;
    if ( (v9[61] & 0x40) != 0 )
    {
      if ( !v4 || IommuRemappingPolicy == 2 || *((_DWORD *)v9 + 123) == 6 )
      {
        LOBYTE(a2) = a1;
        v6 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, __int64))v9[22])(v9[2], a2, v7, a3);
      }
      if ( v6 )
        ((void (__fastcall *)(ULONG_PTR, _QWORD))v9[23])(v9[2], v7);
      ++v4;
    }
  }
}
