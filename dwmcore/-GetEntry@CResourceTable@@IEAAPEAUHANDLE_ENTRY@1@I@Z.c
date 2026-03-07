struct CResourceTable::HANDLE_ENTRY *__fastcall CResourceTable::GetEntry(CResourceTable *this, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // r9

  LOBYTE(v2) = HANDLE_TABLE::ValidEntry((CResourceTable *)((char *)this + 16), a2);
  if ( v2 )
    return (struct CResourceTable::HANDLE_ENTRY *)(*(_QWORD *)(v4 + 40) + (unsigned int)(*(_DWORD *)(v4 + 24) * v3));
  else
    return 0LL;
}
