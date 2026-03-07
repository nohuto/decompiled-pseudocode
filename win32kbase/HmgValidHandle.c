__int64 __fastcall HmgValidHandle(__int64 a1, char a2)
{
  unsigned int v3; // edi
  GdiHandleEntryDirectory **v4; // rbx
  unsigned int v5; // eax
  struct _ENTRY *Entry; // rax
  unsigned int v7; // ecx

  v3 = a1;
  v4 = *(GdiHandleEntryDirectory ***)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v5 = GdiHandleManager::DecodeIndex(v4, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(v4[2], v5, 0);
  v7 = 0;
  if ( !Entry || *((_BYTE *)Entry + 14) != a2 )
    return 0LL;
  LOBYTE(v7) = *((_WORD *)Entry + 6) == HIWORD(v3);
  return v7;
}
