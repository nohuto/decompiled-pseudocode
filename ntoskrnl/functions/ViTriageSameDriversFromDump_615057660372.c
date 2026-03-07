__int64 __fastcall ViTriageSameDriversFromDump(__int64 a1, __int64 a2)
{
  __int64 **v5; // rsi
  __int64 *i; // rbx
  unsigned int v7; // edi
  __int64 LoaderEntry; // rax
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  if ( (int)TriageGetDriverCount(a2, &v9) >= 0 )
  {
    v5 = (__int64 **)(a1 + 16);
    for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
    {
      v7 = 0;
      if ( !v9 )
      {
LABEL_9:
        DbgPrintEx(0x5Du, 3u, "Matching checksum for module %wZ not found in triage dump\n", i + 11);
        return 0LL;
      }
      while ( 1 )
      {
        LoaderEntry = TriageGetLoaderEntry(a2, v7);
        if ( LoaderEntry )
        {
          if ( *((_DWORD *)i + 30) == *(_DWORD *)(LoaderEntry + 120) )
            break;
        }
        if ( ++v7 >= v9 )
          goto LABEL_9;
      }
    }
    return 1LL;
  }
  else
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: failed to get driver count from the dump.\n");
    return 0LL;
  }
}
