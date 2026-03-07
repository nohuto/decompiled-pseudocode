__int64 __fastcall HmgReferenceCheckLock(__int64 a1, char a2)
{
  __int16 v3; // edi^2
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // eax
  __int64 v8; // rsi
  struct _ENTRY *Entry; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  __int64 v14; // rax

  v3 = WORD1(a1);
  v4 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v6, v4);
  v8 = *(_QWORD *)(v6 + 16);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v8, v7, 0);
  if ( Entry )
  {
    if ( *((_BYTE *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v3 )
    {
      v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v6, v4);
      v11 = v10;
      v12 = *(_DWORD *)(v8 + 2056);
      if ( v10 < v12 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      {
        if ( v10 >= v12 )
          v13 = ((v10 - v12) >> 16) + 1;
        else
          v13 = 0;
        v14 = *(_QWORD *)(v8 + 8LL * v13 + 8);
        if ( v13 )
          v11 += ((1 - v13) << 16) - v12;
        if ( v11 < *(_DWORD *)(v14 + 20) )
          return *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                           + 16LL * (unsigned __int8)v11
                           + 8);
      }
    }
  }
  return v5;
}
