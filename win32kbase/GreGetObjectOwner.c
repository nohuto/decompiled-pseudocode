__int64 __fastcall GreGetObjectOwner(__int64 a1, int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  GdiHandleEntryDirectory **v5; // rbx
  unsigned int v6; // eax
  struct _ENTRY *Entry; // rax

  v3 = a1;
  v4 = -2147483614;
  v5 = *(GdiHandleEntryDirectory ***)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v6 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v5, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(v5[2], v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == HIWORD(v3) )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v4;
}
