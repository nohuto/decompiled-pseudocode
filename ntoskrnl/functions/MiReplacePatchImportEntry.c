__int64 __fastcall MiReplacePatchImportEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = a2;
  LOBYTE(a2) = 1;
  v7 = 0;
  v5 = RtlImageDirectoryEntryToData(v2, a2, 12, (int)&v7);
  if ( v5 && v7 >= 8 && v7 >> 3 )
  {
    while ( *(_QWORD *)(v5 + 8LL * v3) != *(_QWORD *)(v4 + 16) )
    {
      if ( ++v3 >= v7 >> 3 )
        return 1LL;
    }
    MiReplaceImportEntry(v5 + 8LL * v3, *(_QWORD *)(v4 + 8));
  }
  return 1LL;
}
