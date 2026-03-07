NTSTATUS __fastcall CreateGlobalAtomTable(PRTL_ATOM_TABLE *AtomTable)
{
  NTSTATUS result; // eax
  int v3; // edi
  PWSTR *i; // rbx
  NTSTATUS v5; // eax
  struct _RTL_ATOM_TABLE *v6; // rcx
  NTSTATUS v7; // esi
  USHORT Atom; // [rsp+48h] [rbp+10h] BYREF

  Atom = 0;
  result = RtlCreateAtomTable(0, AtomTable);
  if ( result >= 0 )
  {
    v3 = 0;
    for ( i = off_1C0280BD0; ; ++i )
    {
      v5 = RtlAddAtomToAtomTable(*AtomTable, *i, &Atom);
      v6 = *AtomTable;
      v7 = v5;
      if ( v5 < 0 )
        break;
      result = RtlPinAtomInAtomTable(v6, Atom);
      if ( (unsigned int)++v3 >= 0x19 )
        return result;
    }
    RtlDestroyAtomTable(v6);
    return v7;
  }
  return result;
}
