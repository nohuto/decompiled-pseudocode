bool __fastcall CDS_JOURNAL::_IsUnextend(const struct CDS_JOURNAL::_ENTRY *a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*((_DWORD *)a1 + 11) & 0x180000) == 0x180000 && !*((_DWORD *)a1 + 17) )
    return *((_DWORD *)a1 + 18) == 0;
  return v1;
}
